#include <bits/stdc++.h>
using namespace std;
class BookInfo
{
public:
    string authorName, bookName;
    int price, stock;

    BookInfo() {}

    BookInfo(string authorName, string bookName, int price, int stock)
    {
        this->authorName = authorName;
        this->bookName = bookName;
        this->price = price;
        this->stock = stock;
    }
};
bool available(string bookName, string authorName, BookInfo BookCollection[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (BookCollection[i].bookName == bookName && BookCollection[i].authorName == authorName && BookCollection[i].stock > 0)
        {
            return true;
        }
    }
    return false;
}
void printBookInfo(string name, string title, BookInfo BookCollection[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (BookCollection[i].bookName == title && BookCollection[i].authorName == name)
        {

            cout << "Author Name: " << BookCollection[i].authorName << endl;
            cout << "Book Name: " << BookCollection[i].bookName << endl;
            cout << "Price: " << BookCollection[i].price << endl;
            cout << "Stock: " << BookCollection[i].stock << endl;
        }
    }
}
int main()
{
    int n = 5;
    BookInfo *BookCollection = new BookInfo[n];
    BookCollection[0] = BookInfo("Ahsanul", "Debug Your Dream", 240, 10);
    BookCollection[1] = BookInfo("Amanul", "Solvency  Regulation", 200, 20);
    BookCollection[2] = BookInfo("Fatin", "Being Expert", 300, 30);
    BookCollection[3] = BookInfo("Khusbul", "Crafting My Next Moves", 400, 40);
    BookCollection[4] = BookInfo("Ahmed", "Mapping the Tech Frontiers", 500, 50);
    cout << "Enter details of person who wants to buy a book: " << endl;
    string title, name;
    cout << "Author Name: ";
    cin >> name;
    cout << "Book Title: ";
    getchar();
    // cin >> title;
    getline(cin, title);
    if (available(title, name, BookCollection, n))
    {
        cout << "\nBook is available" << endl;
        cout << "Details of the book are as follows: " << endl;
        printBookInfo(name, title, BookCollection, n);
        cout << "\nWant to buy the book? (yes/no): ";
        string choice;
        cin >> choice;
        if (choice == "yes")
        {
            int required;
            cout << "Enter the number of books you want to buy: ";
            cin >> required;
            for (int i = 0; i < n; i++)
            {

                if (BookCollection[i].bookName == title && BookCollection[i].authorName == name)
                {
                    if (BookCollection[i].stock < required)
                    {
                        cout << "Required number of books are not available" << endl;
                        return 0;
                    }
                    else
                    {

                        BookCollection[i].stock--;
                        cout << "Book is bought successfully" << endl;
                        cout << "Details of the book are as follows: " << endl;
                        printBookInfo(name, title, BookCollection, n);
                        break;
                    }
                }
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        cout << "Book is not available" << endl;
    }

    return 0;
}