#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount;

    while (1) {
        scanf("%d", &submissionCount);
        if (submissionCount == 0)
            break;

        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < submissionCount; i++) {
            char problemId;
            int time;
            char result[10];

            scanf(" %c %d %s", &problemId, &time, result);
            int index = problemId - 'A';

            if (problems[index].solved)
                continue; // ignora submissões depois de resolvido

            if (strcmp(result, "incorrect") == 0) {
                problems[index].penalty += 20;
            } else if (strcmp(result, "correct") == 0) {
                problems[index].solved = 1;
                totalSolved++;
                totalTime += time + problems[index].penalty;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
