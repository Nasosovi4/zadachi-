//Задача первая
#include <iostream>
using namespace std;

int main()
{
  cout <<"Задание 1\n";
  cout <<"\\ Цитата из фильма \"Джентельмен удачи\" \\ \n";
  cout << "— Мы вам приклеиваем парик.\n";
  cout << "— Так.\n";
  cout << "— Рисуем татуировку.\n";
  cout << "— Так.\n";
  cout << "— И сажаем в тюрьму.\n";
  cout << "— Так… А за что это?\n";

//Задача вторая
  cout <<"Задание 2\n";
    int amount = 33;
    int new_trees = 0;
    cout << "Сколько деревьев ввы посадили сегодня? ";
    cin >> new_trees;

    cout << "Колличесвто деревьев в парке: " << amount << endl;
    cout << "Вы посадили " << new_trees << " деревьев.\n";
    cout << "Всего стало: " << amount + new_trees << endl;

//Задача третья
  int nember1, number2;
  cout <<"Задание 3\n";
  cout <<"number1 = ";
  cin >> nember1;
  cout <<"number2 = ";
  cin >> number2;
  cout <<"Результат от += : number1 = " << (nember1 += number2) << endl;
  cout <<"Результат от -= : number1 = " << (nember1 -= number2) << endl;
  cout <<"Результат от *= : number1 = " << (nember1 *= number2) << endl;
  cout <<"Результат от /= : number1 = " << (nember1 /= number2) << endl;
  cout <<"Результат от %= : number1 = " << (nember1 %= number2) << endl;

//Задача четвертая
  cout <<"Задание 4\n";
  int num1, num2; 
  cout << "Введите первое число: "; 
    cin >> num1; 
  cout << "Введите второе число: "; 
    cin >> num2; 
  int correctAnswer = num1 * num2; 
  int userAnswer; 
  cout << "Сколько будет " << num1 << " умножить на " << num2 << "? "; 
    cin >> userAnswer; 
  if (userAnswer == correctAnswer) 
  { 
    cout << "Правильно!" << endl; 
  } 
  else 
  { 
    cout << "Неправильно. Правильный ответ: " << correctAnswer << endl; 
  } 
    return 0;
  }

  