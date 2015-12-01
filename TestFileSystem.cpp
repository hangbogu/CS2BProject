#include <iostream>
#include <vector>
#include <map>
#include "FileProcessingSystem.h"

using namespace std;

int main() {
    FileProcessingSystem * file_system = new FileProcessingSystem();

    try {
      file_system -> BuildFileSystem();
    }
    catch (exception e){
       cout << "Building file system failed: " << e.what();
       exit(-1);
    }

    file_system -> BrowseFiles();
    //file_system -> SortByKind(TextFile);
    
    string f_name;
    cout << endl << endl << "Enter file name to open: ";
    cin >> f_name;
    file_system->OpenFile(f_name);

    cout << "Enter a file name to search for it: ";
    cin >> f_name;
    
    file_system -> SearchFile(f_name);
    
    cout << "Now try deleting a file. Enter a file name to delete it: ";
    cin >> f_name;
    file_system->DeleteFile(f_name);
}