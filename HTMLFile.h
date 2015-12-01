#ifndef __FileSystem_v1__HTMLFile__
#define __FileSystem_v1__HTMLFile__
#include <iostream>
#include"Document.h"
using namespace std;

class HTMLFile : public Document {
private:
    string content_;
public:
    HTMLFile();
    HTMLFile(string name, int size, FileFormat format, string path, bool read_only);
    virtual ~HTMLFile();

    virtual void Open() const;
    virtual Document* MergeWith (const Document*) const;
    virtual char get_type() const;
    virtual string get_plain_text() const;
    virtual void Display() const;
};
#endif
