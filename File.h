//Modified by Matthew

#ifndef __FileSystem_v1__File__
#define __FileSystem_v1__File__
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

enum FileFormat {
    txt,
    png,
    mp3,
    html,
    unknown
};

class File {
private:
    string name_;
    int size_KB_;
    string file_path_;
    bool read_only_;
    FileFormat file_format_;

public:
    File();
    File(string , int, FileFormat, string, bool);
    virtual ~File();
    void Open() const;
    bool operator== (const File&) const;
    virtual void Display() const = 0;

    virtual char get_type() const = 0;

    void set_name(string);
    string get_name() const;
    void set_size_KB(int);
    int get_size_KB() const;

    void set_file_path(string);
    string get_file_path() const;
    void set_read_only(bool);
    bool get_read_only() const;
    void set_format(FileFormat);
    FileFormat get_format() const;
};
#endif
