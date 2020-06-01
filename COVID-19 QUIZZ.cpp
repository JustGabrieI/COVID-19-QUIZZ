#include <iostream> 
#include <string>


char guess; //Отговорете на потребителските въведения за въпрос
int total;  //Общ резултат


//4 възможни отговора, правилен отговор и оценка на въпроса
class Question{
public:
    void setValues(std::string, std::string, std::string, std::string, std::string, char, int); 
    void askQuestion(); 

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};

int main()
{

    std::cout << R"(

               ————————————————————————————————————————————————————————————————————————
                                  WELCOME TO THE C++ COVID19 QUIZZ!
               ————————————————————————————————————————————————————————————————————————
    )" << "\n";

    std::cout << "Press enter to start...\n";
    std::cin.get();

    //Вземете името на потребителя
    std::string name;
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "\n";

    //Попитайте дали потребителят иска да започне тест
    std::string respond;
    std::cout << "Are you ready to start " << name << "? Yes/No.\n";
    std::cin >> respond;

    //Ако потребителят каже „да“, тестът започва
    if (respond == "Yes" || respond == "yes") {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }else{
        std::cout << "\n";
        std::cout << "See you next time!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }//Else, quiz ends.

    //Екземпляри на въпросите
    //10 въпроса, генерирани общо за тази викторина
    
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    //Повикване на функцията на член setValues
    //Въпросът е зададен, 4 варианта за избор на отговор, правилен отговор, 4 точки на въпрос

    q1.setValues("1. How is COVID-19 passed on?",
        "Through droplets that come from your mouth and nose when you cough or breathe out?",
        "In sexual fluids, including semen, vaginal fluids or anal mucous?",
        "By drinking unclean water?",
        "All of the above",
        'a',
        4);

    q2.setValues("2. What are the common symptoms of COVID-19?",
        "A new and continuous cough",
        "Fever",
        "Tiredness",
        "All of the above",
        'd',
        4);

    q3.setValues("3. Can you always tell if someone has COVID-19?",
        "No – not everyone with COVID-19 has symptom",
        "Yes – it will be obvious, a person with COVID-19 coughs a lot",
        "Yes – you can tell just by where a person comes from, their race and ethnicity",
        "All of the above",
        'a',
        4);

    q4.setValues("4. Can washing your hands protect you from COVID-19?",
        "Yes – but only if you use a strong bleach",
        "Yes – normal soap and water or hand sanitizer is enough",
        "No – Washing your hands doesn’t stop COVID-19",
        "All of the above",
        'b',
        4);

    q5.setValues("5. Which of the following things is COVID-19 more dangerous for?",
        "Children",
        "Older people – especially those aged 70 and above",
        "Teens",
        "Animals",
        'b',
        4);

    q6.setValues("6. Should you wear a mask to protect yourself when you go outside?",
        "Yes – Wear a mask at all times to prevent COVID-19",
        "No – You don’t need to wear a mask if you’re healthy and not caring for a sick person",
        " ",
        " ",
        'b',
        4);

    q7.setValues("7. Can COVID-19 be cured?",
        "Yes – Hot drinks can cure COVID-19",
        "No – COVID-19 is a death sentence",
        "No – But most people get better by themselves",
        "Yes - Stay home",
        'c',
        4);

    q8.setValues("8. Which of the following is an example of physical distancing?",
        "You stop going to crowded places and visiting other people’s houses",
        "You stop talking to the people you live with",
        "You stop speaking to your friends on the phone",
        "All of the above",
        'a',
        4);

    q9.setValues("9. How can people living with HIV protect themselves from COVID-19?",
        "Wash their hands regularly and follow the physical distancing advice",
        "Keep taking their antiretroviral treatment",
        "Exercise regularly, eat well and look after their mental health",
        "All of the above",
        'd',
        4);

    q10.setValues("10. Are people living with HIV always more at risk? ",
        "Yes – people with HIV have weaker immune systems",
        "No – people who adhere to antiretroviral treatment (ART) and have a high CD4 count aren’t more at risk",
        " ",
        " ",
        'b',
        4);

    //Извикване на askQuestion член функция
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    //Крайният резултат се показва, когато потребителят приключи с теста
    std::cout << "Your Total Score is " << total << " out of 40!\n";
    std::cout << "\n";

    //Потребителят оценява над 35, потребителят преминава теста
    if (total > 35) {
        std::cout << R"(

               ————————————————————————————————————————————————————————————————————————
                         GOOD JOB! YOU HAVE PASSED THE QUIZ! HAVE A GOOD DAY!
               ————————————————————————————————————————————————————————————————————————

    )" << "\n";
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "YOU LOST, BETTER LUCK NEXT TIME, FRIEND!\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}

//Функцията изисква насоки за въпроси

void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}
//Формат за възможни отговори, показвани при изпълнение на програмата

void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "A) " << answer_1 << "\n";
    std::cout << "B) " << answer_2 << "\n";
    std::cout << "C) " << answer_3 << "\n";
    std::cout << "D) " << answer_4 << "\n";
    std::cout << "\n";

    //Потребителят въвежда отговора си
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
    //Ако отговорът е правилен, се показва съобщение и към тях се добавят 4 точки
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else //Ако отговорът е неправилен, се показва съобщение, не се добавят точки
         //Показва се правилен отговор
    {
        std::cout << "\n";
        std::cout << "Think again!" << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}
