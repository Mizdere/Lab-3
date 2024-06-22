// Last Modified Date: 5/1/2024

#include <iostream>
#include <iomanip>
#include <vector>

// Constants for grade thresholds
const int A_Score = 90;
const int B_Score = 80;
const int C_Score = 70;
const int D_Score = 60;
const int MIN_Score = 0;
const int MAX_Score = 100;

// Function to calculate the average of test scores
double calculateAverage(const std::vector<double>& scores) {
    double sum = 0;
    for (double score : scores) {
        sum += score;
    }
    if (scores.empty()) return 0;  // Return 0 if no scores to avoid division by zero
    return sum / scores.size();
}

// Function to determine the letter grade based on the average score
char determineGrade(double average) {
    if (average >= A_Score) {
        return 'A';
    } else if (average >= B_Score) {
        return 'B';
    } else if (average >= C_Score) {
        return 'C';
    } else if (average >= D_Score) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to output the result
void outputResult(double average, char grade) {
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Your average is " << average << ", which is a grade " << grade << std::endl;
}

int main() {
    std::vector<double> scores;
    double score;

    // Get the number of test scores
    int numScores;
    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    // Get test scores from the keyboard
    for (int i = 0; i < numScores; ++i) {
        std::cout << "Enter test score " << i + 1 << ": ";
        std::cin >> score;
        if (score < MIN_Score || score > MAX_Score) {
            std::cout << "Invalid score. Please enter a value between 0 and 100.\n";
            --i; // Decrement i to repeat the loop for the same score
            continue;
        }
        scores.push_back(score);
    }

    // Calculate the average of the test scores
    double average = calculateAverage(scores);

    // Determine the letter grade based on the average
    char grade = determineGrade(average);

    // Output the result
    outputResult(average, grade);

    return 0;
}
