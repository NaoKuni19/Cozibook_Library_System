#include <iostream>
#include <string>
using namespace std;

// variables
string name, title, author, summary, genreName, receipt = "";
int member, genre, choice, bookID;
int checkout = 0;
bool available;

// book availability
bool b1 = true, b2 = true, b3 = true, b4 = true, b5 = true;
bool b6 = true, b7 = true, b8 = true, b9 = true, b10 = true;
bool b11 = true, b12 = true, b13 = true, b14 = true, b15 = true;
bool b16 = true, b17 = true, b18 = true, b19 = true, b20 = true;
bool b21 = true, b22 = true, b23 = true, b24 = true, b25 = true;
bool b26 = true, b27 = true, b28 = true, b29 = true, b30 = true;
bool b31 = true, b32 = true, b33 = true, b34 = true, b35 = true;
bool b36 = true, b37 = true, b38 = true, b39 = true, b40 = true;

// validate the input
int getChoice(){
    int input;
    while (!(cin >> input)){// if failure on input by user
        cout << "\033[31m ╰┈➤ Invalid input ! \033[0m" << endl << "\033[31m ╰┈➤ Please enter a valid choice: \033[0m";
    cin.clear(); // reset
    cin.ignore(1000, '\n');
} return input;
}
//library introductory message upon open
void description(){
    cout << "\033[34m═══════════════════════════════════════════════\033[0m" << endl;
    cout << "\033[33m         ---─ ⊹ ⊱꒰☆COZIBOOK SYSTEM☆꒱⊰ ⊹ ─---\033[0m" << endl;
    cout << "\033[34m═══════════════════════════════════════════════\033[0m" << endl;
    cout << "「 This is the Cozy Library Book Borrowing System" << endl;
    cout << "   that allows registered members to browse, preview, " << endl;
    cout << "   select, and checkout any books of their liking. 」" << endl;
    cout << "\033[34m═══════════════════════════════════════════════\033[0m" << endl;
}
// section for logging in for the user and member verification
void login(){
    cout << endl << "\033[33mAre you a library member? (1 or 2)\033[0m" << endl;
    cout << "1.│ Yes" << endl;
    cout << "2.│ No" << endl;
    cout << endl << "Enter choice: ";
    member = getChoice();

    while (member != 1 && member != 2){
        cout << "\033[31m ╰┈➤ Invalid choice. Enter 1 or 2: \033[0m";
        member = getChoice();
    } if (member == 1){
        cout << "Enter your name: ";
        cin >> name;
        cout << endl << " ╰┈➤ Welcome, " << name << "!" << endl << endl;
    }else{
        cout << "\033[31m ╰┈➤ Only registered members can borrow books.\033[0m" << endl;
    }
}
/// all books informations/ details
void bookInfo(int id){
    switch (id){
        // Genre Fiction books
    case 1:
        title = "Don Quixote";
        author = "Miguel de Cervantes";
        summary = "A man becomes a knight and goes on adventures.";
        genreName = "Fiction";
        available = b1;
        break;

    case 2:
        title = "Dream of the Red Chamber";
        author = "Cao Xueqin";
        summary = "A story about family, love, and decline.";
        genreName = "Fiction";
        available = b2;
        break;

    case 3:
        title = "The Stranger";
        author = "Albert Camus";
        summary = "A man faces society after committing a crime.";
        genreName = "Fiction";
        available = b3;
        break;

    case 4:
        title = "The Metamorphosis";
        author = "Franz Kafka";
        summary = "A man wakes up transformed into an insect.";
        genreName = "Fiction";
        available = b4;
        break;

    case 5:
        title = "Harry Potter";
        author = "J. K. Rowling";
        summary = "A young wizard discovers his magical world.";
        genreName = "Fiction";
        available = b5;
        break;

        // fantasy genre books
    case 6:
        title = "The Divine Comedy";
        author = "Dante Alighieri";
        summary = "A journey through the afterlife.";
        genreName = "Fantasy";
        available = b6;
        break;

    case 7:
        title = "Faust";
        author = "Johann Wolfgang von Goethe";
        summary = "A scholar makes a deal with the devil.";
        genreName = "Fantasy";
        available = b7;
        break;

    case 8:
        title = "The Odyssey";
        author = "Homer";
        summary = "Odysseus struggles to return home.";
        genreName = "Fantasy";
        available = b8;
        break;

    case 9:
        title = "Alice's Adventures in Wonderland";
        author = "Lewis Carroll";
        summary = "Alice explores a strange and magical world.";
        genreName = "Fantasy";
        available = b9;
        break;

    case 10:
        title = "The Hobbit";
        author = "J. R. R. Tolkien";
        summary = "A hobbit joins a journey to reclaim treasure.";
        genreName = "Fantasy";
        available = b10;
        break;

        // mystery books
    case 11:
        title = "Crime and Punishment";
        author = "Fyodor Dostoevsky";
        summary = "A man struggles with guilt after a murder.";
        genreName = "Mystery";
        available = b11;
        break;

    case 12:
        title = "The Hound of the Baskervilles";
        author = "Arthur Conan Doyle";
        summary = "Sherlock Holmes investigates a strange legend.";
        genreName = "Mystery";
        available = b12;
        break;

    case 13:
        title = "And Then There Were None";
        author = "Agatha Christie";
        summary = "Guests are mysteriously killed one by one.";
        genreName = "Mystery";
        available = b13;
        break;

    case 14:
        title = "The Moonstone";
        author = "Wilkie Collins";
        summary = "A missing diamond leads to an investigation.";
        genreName = "Mystery";
        available = b14;
        break;

    case 15:
        title = "The Maltese Falcon";
        author = "Dashiell Hammett";
        summary = "A detective searches for a valuable statue.";
        genreName = "Mystery";
        available = b15;
        break;

        // romance books
    case 16:
        title = "Wuthering Heights";
        author = "Emily Bronte";
        summary = "A passionate love story filled with revenge.";
        genreName = "Romance";
        available = b16;
        break;

    case 17:
        title = "Pride and Prejudice";
        author = "Jane Austen";
        summary = "Elizabeth and Darcy overcome misunderstandings.";
        genreName = "Romance";
        available = b17;
        break;

    case 18:
        title = "Jane Eyre";
        author = "Charlotte Bronte";
        summary = "An orphan finds love and independence.";
        genreName = "Romance";
        available = b18;
        break;

    case 19:
        title = "Sense and Sensibility";
        author = "Jane Austen";
        summary = "Two sisters experience love and hardship.";
        genreName = "Romance";
        available = b19;
        break;

    case 20:
        title = "Little Women";
        author = "Louisa May Alcott";
        summary = "Four sisters grow up and pursue their dreams.";
        genreName = "Romance";
        available = b20;
        break;

        // science books
    case 21:
        title = "Frankenstein";
        author = "Mary Shelley";
        summary = "A scientist creates a living creature.";
        genreName = "Science";
        available = b21;
        break;

    case 22:
        title = "The Time Machine";
        author = "H. G. Wells";
        summary = "An inventor travels into the distant future.";
        genreName = "Science";
        available = b22;
        break;

    case 23:
        title = "Twenty Thousand Leagues Under the Sea";
        author = "Jules Verne";
        summary = "Explorers discover wonders beneath the ocean.";
        genreName = "Science";
        available = b23;
        break;

    case 24:
        title = "Brave New World";
        author = "Aldous Huxley";
        summary = "A future society controls people's lives.";
        genreName = "Science";
        available = b24;
        break;

    case 25:
        title = "Journey to the Center of the Earth";
        author = "Jules Verne";
        summary = "Explorers travel deep beneath Earth's surface.";
        genreName = "Science";
        available = b25;
        break;

        // history books
    case 26:
        title = "Moby-Dick";
        author = "Herman Melville";
        summary = "A captain obsessively hunts a white whale.";
        genreName = "History";
        available = b26;
        break;

    case 27:
        title = "The Three Musketeers";
        author = "Alexandre Dumas";
        summary = "Four companions face danger and adventure.";
        genreName = "History";
        available = b27;
        break;

    case 28:
        title = "The Count of Monte Cristo";
        author = "Alexandre Dumas";
        summary = "A wrongly imprisoned man seeks revenge.";
        genreName = "History";
        available = b28;
        break;

    case 29:
        title = "Treasure Island";
        author = "Robert Louis Stevenson";
        summary = "A boy searches for buried pirate treasure.";
        genreName = "History";
        available = b29;
        break;

    case 30:
        title = "The Last of the Mohicans";
        author = "James Fenimore Cooper";
        summary = "A story of conflict on the American frontier.";
        genreName = "History";
        available = b30;
        break;

        // horror books
    case 31:
        title = "Hell Screen";
        author = "Ryunosuke Akutagawa";
        summary = "An artist faces a horrifying artistic commission.";
        genreName = "Horror";
        available = b31;
        break;

    case 32:
        title = "Dracula";
        author = "Bram Stoker";
        summary = "People struggle against a dangerous vampire.";
        genreName = "Horror";
        available = b32;
        break;

    case 33:
        title = "Dr Jekyll and Mr Hyde";
        author = "Robert Louis Stevenson";
        summary = "A scientist discovers his darker side.";
        genreName = "Horror";
        available = b33;
        break;

    case 34:
        title = "The Picture of Dorian Gray";
        author = "Oscar Wilde";
        summary = "A portrait reflects a man's hidden corruption.";
        genreName = "Horror";
        available = b34;
        break;

    case 35:
        title = "I Have No Mouth, and I Must Scream";
        author = "Harlan Ellison";
        summary = "The last five humans in an eternal nightmare.";
        genreName = "Horror";
        available = b35;
        break;

        // philosophy books
    case 36:
        title = "Demian";
        author = "Hermann Hesse";
        summary = "A young man searches for identity and meaning.";
        genreName = "Philosophy";
        available = b36;
        break;

    case 37:
        title = "The Little Prince";
        author = "Antoine de Saint-Exupery";
        summary = "A prince learns about love and human nature.";
        genreName = "Philosophy";
        available = b37;
        break;

    case 38:
        title = "Siddhartha";
        author = "Hermann Hesse";
        summary = "A man searches for spiritual understanding.";
        genreName = "Philosophy";
        available = b38;
        break;

    case 39:
        title = "The Old Man and the Sea";
        author = "Ernest Hemingway";
        summary = "An old fisherman struggles to catch a great fish.";
        genreName = "Philosophy";
        available = b39;
        break;

    case 40:
        title = "The Wings";
        author = "Yi Sang";
        summary = "A study of alienation and breakdown.";
        genreName = "Fiction";
        available = b40;
        break;
    default:
        cout << " ╰┈➤ Invalid book ID!" << endl;
        break;
    }
}

// shows status off books (Borrowed or not) all are initially available
void showBook(int id, int number){
    bookInfo(id);
    cout << number << ".│ " << title << " - " << author;

    if (available){
        cout << "\033[33m [🟢 Available]\033[0m" << endl;
    }else{
        cout << "\033[31m [🔴 Borrowed by \033[0m" << name << "\033[31m]\033[0m" << endl;
    }
}

// book list section and show genre title when choosing a genre
void showBooks(){
    cout << endl << "\033[34m⊱ ───────── [ ˚.⋆  BOOK LIST‧₊˚. ] ───────── ⊰\033[0m" << endl << endl;

    // calculates the starting book ID of the selected genre
    int start = (genre - 1) * 5 + 1;

    switch (genre){
    case 1:
        cout << "\033[35m GENRE: FICTION\033[0m" << endl
             << endl;
        break;
    case 2:
        cout << "\033[35m GENRE: FANTASY\033[0m" << endl
             << endl;
        break;
    case 3:
        cout << "\033[35mGENRE: MYSTERY\033[0m" << endl
              << endl;
        break;
    case 4:
        cout << "\033[35mGENRE: ROMANCE\033[0m" << endl
             << endl;
        break;
    case 5:
        cout << "\033[35mGENRE: SCIENCE\033[0m" << endl
             << endl;
        break;
    case 6:
        cout << "\033[35mGENRE: HISTORY\033[0m" << endl
             << endl;
        break;
    case 7:
        cout << "\033[35mGENRE: HORROR\033[0m" << endl
             << endl;
        break;
    case 8:
        cout << "\033[35mGENRE: PHILOSOPHY\033[0m" << endl
             << endl;
        break;
    default:
        cout << "\033[31m╰┈➤ Invalid genre!\033[0m" << endl;
        break;
    }

    // for loop: displays five books in order.
    for (int i = 1; i <= 5; i++){
        showBook(start + i - 1, i);
    }
    cout << endl << "\033[34m───────────────────────────────────\033[0m" << endl;
}

// book summary and confirmation if wanna borrow :>
int previewBook(int id){
    bookInfo(id);

    cout << endl << "\033[34m⊱ ────── [ ˚.⋆  BOOK OVERVIEW ‧₊˚. ] ────── ⊰\033[0m" << endl << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genreName << endl;
    cout << "About this book: " << summary << endl << endl;
    cout << "\033[34m───────────────────────────────────\033[0m" << endl << endl;

    if (!available){
        cout << "\033[31m ╰┈➤ This book is already borrowed.\033[0m" << endl;
        return 0;
    }
    cout << endl << "\033[33mBorrow this book?\033[0m" << endl;
    cout << "1.│ Yes" << endl;
    cout << "2.│ No" << endl;
    cout << endl << "Enter choice: ";
    choice = getChoice();

    while (choice != 1 && choice != 2){
        cout << "\033[31m ╰┈➤ Invalid choice!\033[0m" << endl << "\033[33m      Enter 1 or 2: \033[0m";
        choice = getChoice();
    }if (choice == 1){
        return 1;
    }else{
        return 0;
    }
}

// changes book available to false after selecting (prevents repeating selections aka borrowed)
void borrowBook(int id){
    bookInfo(id);
    switch (id){
    case 1:
        b1 = false;
        break;
    case 2:
        b2 = false;
        break;
    case 3:
        b3 = false;
        break;
    case 4:
        b4 = false;
        break;
    case 5:
        b5 = false;
        break;
    case 6:
        b6 = false;
        break;
    case 7:
        b7 = false;
        break;
    case 8:
        b8 = false;
        break;
    case 9:
        b9 = false;
        break;
    case 10:
        b10 = false;
        break;
    case 11:
        b11 = false;
        break;
    case 12:
        b12 = false;
        break;
    case 13:
        b13 = false;
        break;
    case 14:
        b14 = false;
        break;
    case 15:
        b15 = false;
        break;
    case 16:
        b16 = false;
        break;
    case 17:
        b17 = false;
        break;
    case 18:
        b18 = false;
        break;
    case 19:
        b19 = false;
        break;
    case 20:
        b20 = false;
        break;
    case 21:
        b21 = false;
        break;
    case 22:
        b22 = false;
        break;
    case 23:
        b23 = false;
        break;
    case 24:
        b24 = false;
        break;
    case 25:
        b25 = false;
        break;
    case 26:
        b26 = false;
        break;
    case 27:
        b27 = false;
        break;
    case 28:
        b28 = false;
        break;
    case 29:
        b29 = false;
        break;
    case 30:
        b30 = false;
        break;
    case 31:
        b31 = false;
        break;
    case 32:
        b32 = false;
        break;
    case 33:
        b33 = false;
        break;
    case 34:
        b34 = false;
        break;
    case 35:
        b35 = false;
        break;
    case 36:
        b36 = false;
        break;
    case 37:
        b37 = false;
        break;
    case 38:
        b38 = false;
        break;
    case 39:
        b39 = false;
        break;
    case 40:
        b40 = false;
        break;
    }

    // adds book to borrowed list
    receipt += title + " by " + author + "\n";

    // adds the selected book title and author to the receipt
    // selection confirmation message
    cout << "\033[34m───────────────────────────────────\033[0m" << endl;
    cout << "\033[33m      SUCCESSFULLY ADDED TO LIST       \033[0m" << endl;
    cout << "\033[34m───────────────────────────────────\033[0m" << endl;
    cout << "Borrowed Title: " << title << " by " << author << endl;
    cout << "Current Status: Reserved for " << name << endl;
    cout << "\033[34m───────────────────────────────────\033[0m" << endl;
}

// overview of book/s chosen
void showOverview(){
    cout << endl << "\033[34m⊱ ══════════════ [ ˚.⋆ BORROWING OVERVIEW ‧₊˚. ] ══════════════ ⊰\033[0m" << endl;
    cout << "Member: " << name << endl;

    if (receipt == ""){
        cout << "\033[31m ╰┈➤ No books selected.\033[0m" << endl;
    }else{
        cout << "Books selected:" << endl;
        cout << receipt;
    }
    cout << "\033[34m═══════════════════════════════════════════════\033[0m" << endl;
}

// library Terms and Agreement
int agreement(){
    cout << endl << "\033[34m⊱ ────── [ ˚.⋆ LIBRARY TERMS ‧₊˚. ] ────── ⊰\033[0m" << endl;
    cout << "1.│ Return books on time." << endl;
    cout << "2.│ Keep books clean and undamaged." << endl;
    cout << "3.│ Do not write or draw on library books." << endl;
    cout << "4.│ Do not lend borrowed books to others." << endl;
    cout << "5.│ Report damaged or missing books." << endl;
    cout << "6.│ Return books to the library directly." << endl;
    cout << "7.│ Accept responsibility for lost books." << endl;

    // agreement selection
    cout << endl;
    cout << "1.│ I Agree" << endl;
    cout << "2.│ I Disagree" << endl;
    cout << endl;
    cout << "Enter your choice: ";

    choice = getChoice();

    while (choice != 1 && choice != 2){
        cout << "\033[31m╰┈➤ Invalid choice. Please enter 1 or 2: \033[0m";
        choice = getChoice();
    }
    return choice;
}

// resibo
void printReceipt(){
    cout << endl << "\033[34m ══════════════【BORROWING RECEIPT】══════════════\033[0m" << endl;
    cout << "Member: " << name << endl;
    cout << "Borrowed books:" << endl;
    cout << receipt;
    cout << "\033[34m───────────────────────────────────\033[m" << endl;
    cout << "\033[33mRETRIEVAL TRACKING STATUS:\033[0m" << endl;
    cout << "- Return Deadline: 14 days from today" << endl;
    cout << "- Retrieval Location: Main Desk / Drop Box" << endl;
    cout << "- Tracking Status: ACTIVE (Awaiting Return)" << endl;
    cout << "\033[34m───────────────────────────────────\033[0m" << endl;
    cout << "Please return your books on time." << endl;
    cout << "\033[34m═══════════════════════════════════════════════\033[0m" << endl;
}

// Recheck after user is finished
bool isAvailable(int id){
    switch (id)
    {
    case 1:
        return b1;
    case 2:
        return b2;
    case 3:
        return b3;
    case 4:
        return b4;
    case 5:
        return b5;
    case 6:
        return b6;
    case 7:
        return b7;
    case 8:
        return b8;
    case 9:
        return b9;
    case 10:
        return b10;
    case 11:
        return b11;
    case 12:
        return b12;
    case 13:
        return b13;
    case 14:
        return b14;
    case 15:
        return b15;
    case 16:
        return b16;
    case 17:
        return b17;
    case 18:
        return b18;
    case 19:
        return b19;
    case 20:
        return b20;
    case 21:
        return b21;
    case 22:
        return b22;
    case 23:
        return b23;
    case 24:
        return b24;
    case 25:
        return b25;
    case 26:
        return b26;
    case 27:
        return b27;
    case 28:
        return b28;
    case 29:
        return b29;
    case 30:
        return b30;
    case 31:
        return b31;
    case 32:
        return b32;
    case 33:
        return b33;
    case 34:
        return b34;
    case 35:
        return b35;
    case 36:
        return b36;
    case 37:
        return b37;
    case 38:
        return b38;
    case 39:
        return b39;
    case 40:
        return b40;
    }
    return false;
}

int main(){
    description();
    login();

    if (member != 1){
        cout << "\033[33m ╰┈➤ Session ended for non-member.\033[0m" << endl;
    }else{
        do{
            cout << endl;
            cout << "\033[34m⊱ ────── [ ˚.⋆  GENRE SELECTION‧₊˚. ] ────── ⊰\033[0m" << endl;
            cout << endl;
            cout << "1.│ Fiction" << endl;
            cout << "2.│ Fantasy" << endl;
            cout << "3.│ Mystery" << endl;
            cout << "4.│ Romance" << endl;
            cout << "5.│ Science" << endl;
            cout << "6.│ History" << endl;
            cout << "7.│ Horror" << endl;
            cout << "8.│ Philosophy" << endl;
            cout << endl;
            cout << "0.│ Proceed to checkout" << endl;
            cout << "9.│ Exit without borrowing" << endl;
            cout << endl;
            cout << "\033[33mChoose an option: \033[0m";

            genre = getChoice();

            if (genre >= 1 && genre <= 8){
                bool back = false;
                bool showList = true;

                while (!back && checkout == 0){
                    if (showList == true){
                        showBooks();
                    }
                    cout << endl;
                    cout << "Enter book number (1-5)" << endl;
                    cout << "6.│ Return to genre menu" << endl;
                    cout << "7.│ Proceed to checkout" << endl;
                    cout << endl;
                    cout << "Your choice: ";

                    choice = getChoice();

                    if (choice >= 1 && choice <= 5){
                        bookID = (genre - 1) * 5 + choice;

                        if (isAvailable(bookID)){
                            if (previewBook(bookID) == 1){
                                borrowBook(bookID);
                            }
                        }else{
                            cout << endl;
                            cout << "\033[31m ╰┈➤ This book is already borrowed.\033[0m" << endl;
                            showList = false;
                        }
                    }else if (choice == 6){
                        back = true;
                    }else if (choice == 7){
                        checkout = 1;
                    }else{
                        cout << "\033[31m ╰┈➤ Invalid choice. Please select 1 to 7.\033[0m" << endl;
                    }
                }
            }else if (genre == 0){
                checkout = 1;
            }else if (genre == 9){
                checkout = 1;
            }else{
                cout << "\033[31m╰┈➤ Invalid genre. Please select 0 to 9.\033[0m" << endl;
            }
        }

        while (checkout == 0);
        if (receipt != ""){
            showOverview();
            if (agreement() == 1){
                printReceipt();
                cout << endl;
                cout << "\033[33m ╰┈➤ Thank you for using COZIBOOK!\033[0m" << endl;
            }else{
                cout << endl;
                cout << "\033[31m ╰┈➤ You declined the terms.\033[0m" << endl;
                cout << "\033[31m ╰┈➤ Your selected books have been released.\033[0m" << endl;
                cout << "\033[31m ╰┈➤ No borrowing was completed.\033[0m" << endl;
            }
        }else{
            cout << endl;
            cout << "\033[31m ╰┈➤ No books were selected.\033[0m" << endl;
            cout << " ╰┈➤ Thank you for visiting COZIBOOK!" << endl;
        }
    }
    return 0;
}
