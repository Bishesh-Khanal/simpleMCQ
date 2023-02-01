#include <iostream>
#include "question.h"

void run_test(Question questions[]){
    char answer;
    int score = 0;
    for(int index = 0; index < 3; index++){
        std::cout<<questions[index].question << std::endl;
        std::cin>>answer;
        if(answer == questions[index].answer){
            score++;
        }
    }
    std::cout << "You got " << score << "/" << 3 << std::endl;
}