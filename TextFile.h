#ifndef __FileSystem_v1__TextFile__
#define __FileSystem_v1__TextFile__
#include <iostream>
#include <vector>
#include "Document.h"

using namespace std;

class TextFile : public Document {
private:
    vector<string> text_lines_;
public:
    TextFile( );
    TextFile(string name, int size, FileFormat format, string path, bool read_only);
    virtual ~TextFile( );
    int WordCount() const;
    void InputContent();
    TextFile& operator<< (const string &text);
    virtual Document* MergeWith (const Document*) const;
    virtual string get_plain_text() const;
    virtual void Display() const;
    virtual char get_type() const;
};
#endif
