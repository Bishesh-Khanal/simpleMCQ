#include <fstream>
#include "question.h"
#include "library.h"

int main(){
    std::fstream myFiles;
    Question questions[3];
    set_questions(myFiles, questions);
    run_test( questions );
    return 0;
}