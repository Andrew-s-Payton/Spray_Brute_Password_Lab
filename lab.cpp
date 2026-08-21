#include <iostream>
#include <unordered_map>
#include <bitset>

/* Sources: 
    - https://stackoverflow.com/questions/10184178/fastest-way-to-convert-string-to-binary
    - 
*/

using namespace std;

class User {
    private:
        string username;
        string id;
        // TODO: Use hashing algorithm to turn plaintext to hash 
        string password;
};

class Lab {
    public:
        void StartProgram();
        void EnterSession();
        void ExitSession();
        void SHA256(string salt, string password);
};

void Lab::SHA256(string salt, string password) {
    // Combine the password with the salt to prevent the same passwords producing the same two hashes
    string SHAFull = salt + password;
    
    for (int i = 0; i < SHAFull.size(); i++) {
        bitset<8> toBit(SHAFull.c_str()[i]);
        cout << toBit << endl;
    }
}

int main() {
    Lab L;
    L.SHA256("eidjdh", "password123");
    return 0;
}