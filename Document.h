#ifndef __FileSystem_v1__Document__
#define __FileSystem_v1__Document__
#include <iostream>
#include "File.h"
using namespace std;

class Document : public File {
public:
    Document();
    Document(string name, int size, FileFormat format, string path, bool read_only);
    virtual ~Document();
    virtual Document* MergeWith (const Document*) const = 0;
    virtual string get_plain_text() const = 0;
};
#endif