#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
    ifstream file("myfile.txt");
    string line;

    if(file_is.open())
    {
        while(getline(file,line))
        {
            cout << "line" << endl;
        }

    //Token indentify

   cout << "token identification" << endl;
   {

      while(getline(file,line))
      {
          cout << "line" << endl;

          stringstream ss(line);

          while(ss >> line)
          {
              cout << "token word" << endl;
          }

          cout << endl;
      }

      file.close();
    }

     else
       {
          cout << "file not found!" << endl;
       }

    return 0;

}

int main() {
    int a = 10;
    float b = 20;
    return 0;
}




