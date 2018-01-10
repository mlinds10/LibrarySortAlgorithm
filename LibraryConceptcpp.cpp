
//Programmer: Marcus Lindsay
//Program: Books store array
//Date: April 5, 2016
//This program uses arrays to use binary and linear searches to find elements.


#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
//Function prototypes
int linearSearch(const int [], int, int);
void sortArray(int [], int);
void showArray(const int [], int);
void selectionSort(int [], int);
int binarySearch(int array[], int size, int searchValue) //Binary function above int main.


{
    int low =0;
    int high = size - 1;

    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(searchValue == array[mid])
        {
            return mid;
        }
        else if(searchValue > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    //Arrays of book titles.
    string bookTitle[] = {"Starting out with C++", "Java Programming", "Software Structures", "Design and Analysis of Algorithms",
    "Computer Graphics", "Artificial Intelligence: A Modern Approach", "Probability and Statistics",
    "Cognitive Science", "Modern Information Retrieval", "Speech and Language Processing"};

    // Array of book ID's.
    int bookID[] = {1101, 1211, 1333, 1456, 1567, 1642, 1699, 1755, 1800, 1999};

    //Array of book prices.
    float bookPrice[] = {112.32, 73.25, 54.00, 67.32, 135.00, 173.22, 120.00, 42.25, 32.11, 123.75};

    int choice; //To hold menu option choices.
    int index; // hold results
    int number;
    int userInput; // user choices
    int quantity = 0; //how many books the user wants
    double totalPrice;   //price of books with quantity added.
    bool found = false;

 	char option; 
 	int cardNumber = 6666;

        //List of tabular form inventory of books and prices.
        cout << "Welcome to BP Gasoline, please choose from the menu below" << endl;
        cout << "Is this a credit or debit card? Y/N" << endl;
        cin >> option; 
        if (option == 'Y')
        	{
        		cout << "Please enter your debit card number " << endl;
        		cin >> cardNumber;
        		if (cardNumber == 6666)
        		{
        			cout << "Hello Mr Lindsay, which choice do to perfer today? " << endl;
				}
			}

        


        cout << "To proceed to the main menu type in the Charlotte area code " << endl; //menu option
        cin >> number;

    if(number == 704)
    cout << "Choose an option from the menu below " << endl;    //menu choices for linear and binary searches of book id.
    cout << "Menu Choices " << endl;
    cout << "************* " << endl;
    cout << "1. Linear Search " << endl;
    cout << "2. Binary Search " << endl;
    cout << "3. Bubble Sort " << endl;
    cout << "4. Selection Sort " << endl;
    cout << "5. Quit " << endl;
    cout << "Enter a menu choice " << endl;
    cin >> choice;

    if(choice == 1) //option 1 gives you the linear search for an array
    cout << "To find a book easier, type in a bookID " << endl;
    cin >> userInput;

                for(index = 0; index < 10; index++) //given the right book id, code displays book information.
                {

                    if(userInput == bookID[index])
                    {
                        found = true;
                        cout << "You have successfully found a book. \n The number was found at "
                             << "index " << index << endl;
                        cout << endl;
                    }
                    else if(userInput == 1101)
                    {
                        totalPrice = (quantity * 112.32);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1101 ";
                        cout << right << "Title: Starting out with C++ " << "Price: $112.32 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1211)
                    {
                        totalPrice = (quantity * 73.25);
                        found = true;
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1211 ";
                        cout << right << "Title: Java Programming " << "Price: $73.25 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1333)
                    {
                        totalPrice = (quantity * 54.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1333 ";
                        cout << right << "Title: Data Structures " << "Price: $54.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1456)
                    {
                        totalPrice = (quantity * 67.32);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1456 ";
                        cout << right << "Title: Design and Analytics " << "Price: $67.32 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1567)
                    {
                        totalPrice = (quantity * 135.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1567 ";
                        cout << right << "Title: Computer Graphics " << "Price: $135.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1642)
                    {
                        totalPrice = (quantity * 173.22);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1642 ";
                        cout << right << "Title: Artificial Intelligence: A modern Approach " << "Price: $173.22 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1699)
                    {
                        totalPrice = (quantity * 120.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1699 ";
                        cout << right << "Title: Probability and Statistics " << "Price: $120.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1755)
                    {
                        totalPrice = (quantity * 42.25);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1755 ";
                        cout << right << "Title: Cognitive Science " << "Price: $42.25 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1800)
                    {
                        totalPrice = (quantity * 32.11);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1800 ";
                        cout << right << "Title: Modern information Retrieval " << "Price: $32.11 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1999)
                    {
                        totalPrice = (quantity * 123.75);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1999 ";
                        cout << right << "Title: Speech and Language Processing " << "Price: $123.75 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }

                }
                if(!found) cout << "Sorry this book is not in our directory " << endl; //if bookid is not found, code; cant be found.


    if(choice == 2) //option 2 gives the binary search
    int userInput;
    cout << "Enter a book ID " << endl; //validation
    cin >> userInput;
    int result = binarySearch(bookID, 10, userInput);
    if(result >= 0)
    {
        cout << "The number " << bookID[result] << " was found at the "
        "element with index " << result << endl;
        cout << "To find a book easier, type in a bookID " << endl;
                cin >> userInput;

                for(index = 0; index < 10; index++)
                {

                    if(userInput == bookID[index])
                    {
                        found = true;
                        cout << "You have successfully found a book. \n The number was found at "
                             << "index " << index << endl;
                        cout << endl;
                    }
                    else if(userInput == 1101)
                    {
                        totalPrice = (quantity * 112.32);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1101 ";
                        cout << right << "Title: Starting out with C++ " << "Price: $112.32 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1211)
                    {
                        totalPrice = (quantity * 73.25);
                        found = true;
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1211 ";
                        cout << right << "Title: Java Programming " << "Price: $73.25 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1333)
                    {
                        totalPrice = (quantity * 54.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1333 ";
                        cout << right << "Title: Data Structures " << "Price: $54.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1456)
                    {
                        totalPrice = (quantity * 67.32);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1456 ";
                        cout << right << "Title: Design and Analytics " << "Price: $67.32 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1567)
                    {
                        totalPrice = (quantity * 135.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1567 ";
                        cout << right << "Title: Computer Graphics " << "Price: $135.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1642)  //else if statements for the listings of books and prices.
                    {
                        totalPrice = (quantity * 173.22);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1642 ";
                        cout << right << "Title: Artificial Intelligence: A modern Approach " << "Price: $173.22 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1699)
                    {
                        totalPrice = (quantity * 120.00);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1699 ";
                        cout << right << "Title: Probability and Statistics " << "Price: $120.00 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1755)
                    {
                        totalPrice = (quantity * 42.25);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1755 ";
                        cout << right << "Title: Cognitive Science " << "Price: $42.25 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1800)
                    {
                        totalPrice = (quantity * 32.11);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1800 ";
                        cout << right << "Title: Modern information Retrieval " << "Price: $32.11 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }
                    else if(userInput == 1999)
                    {
                        totalPrice = (quantity * 123.75);
                        cout << "Select a quantity: " << endl;
                        cin >> quantity;
                        cout << left << "BookID: 1999 ";
                        cout << right << "Title: Speech and Language Processing " << "Price: $123.75 "
                        << " Quantity: " << quantity << " Total Price: " << "$" << totalPrice << endl;
                        cout << endl;
                    }

                }
                if(!found) cout << "Sorry this book is not in our directory " << endl;

    }
    else
    {
        cout << "The number " << userInput << " was not found. " << endl; //else statement if the user puts in wrong id.

    }

    if(choice == 3)
    {
        int arr[500];
        cout << "**** BUBBLE SORT ****\n";
        cout << "Unsorted array:\n";
        showArray(arr, 500);
        cout << endl;
        cout << "Sorted array:\n";
        showArray(arr, 500);
        cout << endl;
    }

  if(choice ==4)
  {
        int arr[500];
        cout << "**** SELECTION SORT ****\n";
        cout << "Unsorted array:\n";
        showArray(arr, 500);
        cout << endl;
        selectionSort(arr, 500);
        cout << endl << "Sorted array:\n";
        showArray(arr, 500);
        cout << endl;
  }
   if(choice ==5)

   {
      cout << "Program will not quit " << endl;
      cout << "Thank you for your time " << endl;
      cout << endl;
   }






}

void selectionSort(int array[],int size) //this selection sort gives the user a quick way to find book ids.
    {
        int startScan, minIndex, minValue;
        for(startScan = 0; startScan < (size -1); startScan++)
        {

            minIndex = startScan;
            minValue = array[startScan];
            for(int index = startScan + 1; index < size; index++)
            {
                if(array[index] < minValue)
                {
                    minValue = array[index];
                    minIndex = index;
                }
            }
            array[minIndex] = array[startScan];
            array[startScan] = minValue;
        }
        return;
    }

void sortArray(int arr[], int size)     //this sorting array function is called to find binary integers.
    {
        bool swap;
        int temp;
        do
        {
            swap = false;
            for(int i =0; i < (size -1); i++)
            {
                if(arr[i] > arr[i+1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swap = temp;
                }
            }
        } while(swap);
    }

void showArray(const int arr[], int size)   //this function is called to show the new sorted array.
    {
        for(int i = 0; i < 1000; i++)
        {
            cout << arr[i] << " " << endl;
            cout << endl;
        }
    }
void initializeUnsortedArr(int *array, int size)
    {
        srand (time(NULL));
        for(int i=0;i<size;i++)
        {
            array[i] = rand() % 500 + 1;
        }
    }

void displayArray(int *array, int size) //this function is called to display the array sorted or unsorted.
{
for(int i=0;i<size;i++)
{
cout << array[i] << "\t";
}
}
