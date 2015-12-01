#include "TextFile.h"

TextFile::TextFile() : Document() {};
TextFile::TextFile(string name, int size, FileFormat format, string path, bool read_only) : Document(name, size, format, path, read_only){}
TextFile::~TextFile() {};

int TextFile::WordCount() const {/* to be implemented */
    return 0;
};

void TextFile::InputContent()
{

}

TextFile& TextFile::operator<< (const string &text) {
    /* to be implemented!!! */
    return *this;
}

Document* TextFile::MergeWith(const Document*) const {
    /* to be implemented!!! */
    return NULL;
}

string TextFile::get_plain_text() const {
    /* to be implemented!!! */
    return "";
}

char TextFile::get_type() const {
  return 'T';
}
