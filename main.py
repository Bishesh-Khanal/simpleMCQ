from question import Question
from question_list import questions

def run_test(questions):
    score = 0
    for i in range(len(questions)):
        answer = input(questions[i].question)
        if answer == questions[i].answer:
            score += 1

    print("You got " + str(score) + "/" + str(len(questions)) + " correct")

run_test(questions)
