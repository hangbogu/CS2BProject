#include "HTMLFile.h"

HTMLFile::HTMLFile() : Document() {};

HTMLFile::HTMLFile(string name, int size, FileFormat format, string path, bool read_only) :
   Document(name, size, format, path, read_only) {};

HTMLFile::~HTMLFile() {};

void HTMLFile::Open() const {
    /* to be implemented */
}

Document* HTMLFile::MergeWith (const Document* doc) const {
    /* to be implemented */
    return NULL;
}

string HTMLFile::get_plain_text() const {
    /* to be implemented */
    return "";
}

char HTMLFile::get_type() const {
   return 'H';
}
