#include <utility>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    int points, goalsdiff, goalsscored, goalsvisitor;
    vector<string> win_to;

    Team(string name) : name(move(name)) {};

    void match(const int &goalsf, const int &goalsc, const bool &visitor, const string &team2) {
        this->goalsdiff += (goalsf - goalsc);
        this->goalsscored += goalsf;
        if (goalsf > goalsc) {
            this->points += 3;
            this->win_to.emplace_back(team2);
        } else if (goalsf == goalsc) this->points += 1;
        if (visitor) this->goalsvisitor += goalsf;
    };
};

struct football_criteria {
    inline bool operator()(const Team *team1, const Team *team2) {
        if (team1->points == team2->points) {
            if (team1->goalsdiff == team2->goalsdiff) {
                if (team1->goalsscored == team2->goalsscored) {
                    if (team1->goalsvisitor == team2->goalsvisitor) return team1->name > team2->name;
                    else return team1->goalsvisitor > team2->goalsvisitor;
                } else return team1->goalsscored > team2->goalsscored;
            } else return team1->goalsdiff > team2->goalsdiff;
        } else return team1->points > team2->points;
    }
};

struct by_team_name {
    inline bool operator()(const Team *team1, const Team *team2) {
        return team1->name < team2->name;
    }
};

vector<Team *> teams;

Team *bin_search(const int l, const int h, const string &name) {
    if (h >= l) {
        int m = l + (h - l) / 2;
        if (teams[m]->name == name) return teams[m];
        if (teams[m]->name > name) return bin_search(l, m - 1, name);
        return bin_search(m + 1, h, name);
    }
    Team *t = new Team(name);
    teams.emplace_back(t);
    sort(teams.begin(), teams.end(), by_team_name());
    return t;
}

Team *get(const string &name) {
    int h = (int) teams.size() - 1;
    return bin_search(0, h, name);
}

void cast(const string &t) {
    const unsigned long i = t.find(" vs. "), n = t.size();
    const string str1 = t.substr(0, i), str2 = t.substr(i + 5, n - i - 4);
    const unsigned long p1 = str1.find_last_of(' '), p2 = str2.find_first_of(' '), n1 = str1.size(), n2 = str2.size();
    string team1 = str1.substr(0, p1);
    string team2 = str2.substr(p2 + 1, n2 - p2);
    int goals1 = atoi(str1.substr(p1 + 1, n1 - p1).c_str());
    int goals2 = atoi(str2.substr(0, p2).c_str());
    get(team1)->match(goals1, goals2, false, team2);
    get(team2)->match(goals2, goals1, true, team1);
}

int n_times_paradox() {
    int times = 0;
    for (const Team *team1 : teams) {
        for (const Team *team2 : teams) {
            if (team1->name == team2->name) break;
            for (const string &t_n : team1->win_to) {
                if (team2->name == t_n) {
                    times++;
                    break;
                }
            }
        }
    }
    return times;
}

int main() {
    string t, ms;
    vector<string> lines_to_p;
    while (getline(cin, ms) && !ms.empty()) {
        teams.clear();
        int m = atoi(ms.c_str());
        for (int i = 0; i < m; i++) {
            getline(cin, t);
            cin.clear();
            cast(t);
        }
        sort(teams.begin(), teams.end(), football_criteria());
        m = 1;
        lines_to_p.emplace_back("The paradox occurs " + to_string(n_times_paradox()) + " time(s).");
        for (const Team *team : teams) lines_to_p.emplace_back(to_string(m++) + ". " + team->name);
    }
    for (const string &line : lines_to_p) printf("%s\n", line.c_str());
    return 0;
}