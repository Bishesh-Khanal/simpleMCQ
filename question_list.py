from question import Question

questions_file = open("questions.txt","r")
questions = [
    Question(questions_file.readline(),"c"),
    Question(questions_file.readline(),"a"),
    Question(questions_file.readline(),"b")
]
questions_file.close()