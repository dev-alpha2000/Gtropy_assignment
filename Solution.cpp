//Header files
#include "iostream"
#include "string"
#include "vector"
#include "fstream"
#include "algorithm"

using namespace std;

// Structure of a Trie node
struct TrieNode {

    // Storing address of a character
    TrieNode* Trie[256];

    // Check if the character is
    // last character of a string or not
    bool isEnd;

    // Constructor function
    TrieNode()
    {

        for (int i = 0; i < 256; i++) {

            Trie[i] = NULL;
        }
        isEnd = false;
    }
};

// Function to insert a string into Trie
void InsertTrie(TrieNode* root, string s)
{

    TrieNode* temp = root;

    // Traverse the string, s
    for (int i = 0; i < s.length(); i++) {

        if (temp->Trie[s[i]] == NULL) {

            // Initialize a node
            temp->Trie[s[i]] = new TrieNode();
        }

        // Update temp
        temp = temp->Trie[s[i]];
    }

    // Mark the last character of
    // the string to true
    temp->isEnd = true;
}

// Function to print suggestions of the string
void printSuggestions(TrieNode* root, string res)
{
    
    // If current character is
    // the last character of a string
    if (root->isEnd == true) {
        cout << res << endl;
    }

    // Iterate over all possible
    // characters of the string
    for (int i = 0; i < 256; i++) {

        // If current character
        // present in the Trie
        if (root->Trie[i] != NULL) {

            // Insert current character
            // into Trie
            res.push_back(i);
            printSuggestions(root->Trie[i], res);
            res.pop_back();
        }
    }
}

// Function to check if the string
// is present in Trie or not
bool checkPresent(TrieNode* root, string key)
{
    

    // Traverse the string
    for (int i = 0; i < key.length(); i++) {

        // If current character not
        // present in the Trie
        if (root->Trie[key[i]] == NULL) {
            cout << "There is no proper entry for entered word " << key << ". Here are some suggestions: " << endl;
            printSuggestions(root, key.substr(0, i));
            
            return false;
        }

        // Update root
        root = root->Trie[key[i]];
    }
    if (root->isEnd == true) {

        return true;
    }
    cout << "There is no proper entry for entered word " << key << ". Here are some suggestions: " << endl;
    printSuggestions(root, key);
    
    return false;
}


//Validate the input given to program
bool validation(string key) {
    string special_char = ".,!@#$%^&*()_+=?/\|<>-;";
    
    //Iterate over every character
    for (char c : key) {
        //Checking if input contains digit
        if (isdigit(c)) {
            return false;
        }

        //Checking if input contains special character
        for (char x : special_char) {
            if (x == c) return false;
        }
    }

    
    return true;
}


int main()
{

    vector<string> str;

    ifstream inputFile;
    inputFile.open("dataset.txt");

    // Open the file
    // Check if the file is open
    if (!inputFile.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1; 
    }


    // Read words from the file and insert into the vector
    string word;
    while (inputFile >> word) {
        str.push_back(word);
    }

    // Close the file
    inputFile.close();


    //Take user input
    string key = "";
    cout << "Enter the word to be search in the dictionary. "<<endl;
    cin >> key;

    //Convert the input to lowercase
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    
    //validate the input
    if (!validation(key)) {
        cout << "Invalid input. Only alphabets are allowed.";
        return 1;
    }

    

    // Initialize a Trie
    TrieNode* root = new TrieNode();

    // Insert strings to trie
    for (int i = 0; i < str.size(); i++) {
        InsertTrie(root, str[i]);
    }

    //Funtction to check if the input word is present in dictionary(trie) or not.
    if (checkPresent(root, key)) {
        cout << key << " is present in dictionary.";
    }

    return 0;
}