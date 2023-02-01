#include <fstream>
#include "question.h"

void set_questions(std::fstream& myFiles, Question questions[]){
    myFiles.open("../Python/questions.txt", std::ios::in);
    if(myFiles.is_open()){
        int index = 0;
        std::string question;
        while(getline(myFiles, question)){
            questions[index].question = question;
            index++;
        }
    }
    myFiles.close();
    questions[0].answer = 'c';
    questions[1].answer = 'a';
    questions[2].answer = 'b';
}