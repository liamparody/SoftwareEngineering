#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    size_t loc = input.find("4");
    string number = input.substr(loc);
    size_t after = number.find("2");
    string numb = number.substr(0, after + 1);
    cout << "number = " << numb << endl;


    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    string the = "the";
    int counter = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == the){
            counter = counter + 1;

        }
    }
    cout << "there are " << counter << " the's" << endl;
    int x = 7;
    int myarray[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    for (int n = 0; n < 4; n++) {
        int first = myarray[n];
        int last = myarray[x];
        myarray[x] = first;
        myarray[n] = last;
        x = x - 1;
    }

}



