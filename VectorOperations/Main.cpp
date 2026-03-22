#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>
#include "Main.h"
#include <limits>
using namespace std;

void displayMenu();
char handleInput();
void printNumbers(const vector<int> &numbers);
void addNumber(vector<int> &numbers);
void displaySmallest(const vector<int> &numbers);
void displayMean(const vector<int> &numbers);
void displayLargest(const vector<int> &numbers);
bool emptyChecker(const vector<int> &numbers);
int searchForNumber(const vector<int> &numbers);
void clearVector(vector<int> &numbers);
bool checkForDuplicates(const vector<int> &numbers,int numToCheck);

//prototypes above

int main() {
  vector<int> numbers;
  char choice;
  do {
    displayMenu();
    choice = handleInput();
    switch(choice)
      {
      case 'P' :
        printNumbers(numbers);
        break;
      case 'A':
        addNumber(numbers);
        break;
      case 'M':
        displayMean(numbers);
        break;
      case 'S':
        displaySmallest(numbers);
        break;
      case 'L':
        displayLargest(numbers);
        break;
      case 'Q':
        cout << "Quitting\n";
        break;
      case 'F':
        searchForNumber(numbers);
        break;
      case 'C':
        clearVector(numbers);
        break;
      default:
        cout << "Unknown option, try again..." << endl;
      }
  }while (choice != 'Q');

  return 0;
};
//function definitions
void displayMenu()
{
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "F - Find a number" << endl;
  cout << "C - Clear the vector" << endl;
  cout << "Q - Quit" << endl;
}
char handleInput() {
  char choice;
  cout << "Wybierz opcje : ..." << endl;
  cin >> choice;
  return toupper(choice);
}
void printNumbers(const vector<int> &numbers) {
  if (emptyChecker(numbers)) return;

  for(auto num : numbers) {
    cout << num << " ";
  }
  cout << endl;
}
void addNumber(vector<int> &numbers) {
  int choice;
  cout << "Wybierz liczbe do dodania" << endl;
  while (!(cin >> choice))
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Blad! To nie jest liczba. Spróbuj ponownie: ";
    }
  if (checkForDuplicates(numbers,choice)) {
    cout << "Liczba juz jest na liście - " << choice << endl;
    return;
  }
  numbers.push_back(choice);
  cout << "Wpisales: " << choice << endl;
}
void displayMean(const vector<int> &numbers) {
  if (emptyChecker(numbers)) return;
  double sum = 0;
  for(auto num : numbers) {
    sum += num;
  }
  cout << "Mean = " << (sum / numbers.size()) << endl;
}
void displaySmallest(const vector<int> &numbers) {
  if (emptyChecker(numbers)) return;
  int smallest = numbers[0];
  for (auto num : numbers)
  {
    if (num < smallest) smallest = num;
  }
  cout << "The smallest num is: " << smallest << endl;
}

void displayLargest(const vector<int> &numbers) {
  if (emptyChecker(numbers)) return;
  int largest = numbers[0];
  for (auto num : numbers) {
    if (num > largest) largest = num;
  }
  cout << "The largest num is: " << largest << endl;
}
bool emptyChecker(const vector<int> &numbers) {
  if (numbers.empty()) {
    cout << "List is empty : []" << endl;
    return true;
  }
  return false;
}

int searchForNumber(const vector<int> &numbers) {
  int choice;
  while (!(cin >> choice))
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Blad! To nie jest liczba. Spróbuj ponownie: ";
  }
  int result = count(numbers.begin(),numbers.end(),choice);
  if (result > 0) {
    cout << "Liczba " << choice << " wystepuje " << result << endl;
    return result;
  }
{
    cout << "Liczby " << choice << " nie ma na liscie." << endl;
    return 0;
  }
}

void clearVector(vector<int> &numbers) {
  numbers.clear();
  cout << "Wektor został wyczyszczony" << endl;
}

bool checkForDuplicates(const vector<int> &numbers,int numToCheck) {
  return find(numbers.begin(),numbers.end(),numToCheck) != numbers.end();
  //jesli znajdzie to daje iterator na znalezione a jesli nie znajduje to daje
  //automatycznie na koniec numbers
}



