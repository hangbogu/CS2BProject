#ifndef __FileSystem_v1__FileProcessingSystem__
#define __FileSystem_v1__FileProcessingSystem__
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "File.h"
#include "HTMLFile.h"
#include "ImageFile.h"
#include "TextFile.h"
#include "SoundFile.h"
using namespace std;

class FileProcessingSystem
{
private:
    map<string, vector<File*>> file_map;
    FileFormat convertStrToFormat(const string) const;
    
public:
    FileProcessingSystem(void);
    ~FileProcessingSystem(void);
    
    void BuildFileSystem (void);
    void BrowseFiles (void) const;
    File *SearchFile (string name) const;
    void DeleteFile (File* file);
    void DeleteFile (string file_name);
    void OpenFile(string name) const ;
    template<class T> void ShowAllFilesOfAKind (const T& type);
    void SortByName ( );  //TODO:
    void NumberOfFilesByKind ( ) const; 
};
#endif
