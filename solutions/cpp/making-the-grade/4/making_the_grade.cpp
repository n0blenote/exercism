#include <array>
#include <cmath>
#include <string>
#include <vector>
// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded_scores;
    for (int i = 0; i < student_scores.size(); i++) {
        rounded_scores.push_back(static_cast<int>(student_scores[i]));
    };
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] < 41) {
            count++;
        };
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int grade_gap = (highest_score - 40) / 4;


    return {41, 41 + grade_gap, 41+ (2*grade_gap), 41+ (3*grade_gap)};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> rankings{};
    if (student_names.size() != student_scores.size()) {
        return {};
    }
    for (int i = 0; i < student_names.size(); i++) {
        rankings.push_back( std::to_string(i) + ". "
            + student_names[i] + ": "
            + std::to_string(student_scores[i])
        );
    }
    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_names.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
