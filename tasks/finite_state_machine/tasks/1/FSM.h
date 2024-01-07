#pragma once

#include <stdio.h>

#include "fsm_realization.h"

int Task() {
    StateMachine* sm = CreateStateMachine();
    FILE* fp = fopen("D:/DATA/VS_Code_Files/C_Files/Fsm_Lab_1/text.txt", "r");
    char c = ' ';

    while ((c = (char)fgetc(fp)) != EOF) {
        Step(sm, c);
    }

    printf("%lu Words in comments are exist\n", sm->word_count);

    DeleteStateMachine(sm);
    fclose(fp);
    return 0;
}
