#include <stdio.h>

int main() {
    char desired_grade;
    float min_average, current_average, final_weight;
    float target_score = 0.0;
    
    printf("Enter desired grade: ");
    scanf(" %c", &desired_grade);
    
    
    if (desired_grade >= 'a' && desired_grade <= 'z') {
        desired_grade = desired_grade - ('a' - 'A'); 
    }

    printf("Enter minimum average required: ");
    scanf("%f", &min_average);
    printf("Enter current average in course: ");
    scanf("%f", &current_average);
    printf("Enter how much the final counts as a percentage of the course grade: ");
    scanf("%f", &final_weight);

    
    if (final_weight < 0 || final_weight > 100) {
        printf("Invalid final weight percentage. It should be between 0 and 100.\n");
        return 1;
    }
    
    
    if (desired_grade == 'A') {
        target_score = 90.0;
    } else if (desired_grade == 'B') {
        target_score = 80.0;
    } else if (desired_grade == 'C') {
        target_score = 70.0;
    } else if (desired_grade == 'D') {
        target_score = 60.0;
    } else if (desired_grade == 'F') {
        target_score = 0.0;
    } else {
        printf("Invalid grade entered.\n");
        return 1;
    }

    
    float needed_score = (target_score - current_average * (1 - final_weight / 100)) / (final_weight / 100);

    printf("You need a score of %.2f on the final to get a %c in the course.\n", needed_score, desired_grade);

    return 0;
}
