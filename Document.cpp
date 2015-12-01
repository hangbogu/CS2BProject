#include "Document.h"

Document::Document() : File() {};

Document::Document(string name, int size, FileFormat format, string path, bool read_only) : 
   File(name, size, format, path, read_only) {};

Document::~Document() {};