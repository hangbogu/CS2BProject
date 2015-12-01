#ifndef __FileSystem_v1__SoundFile__
#define __FileSystem_v1__SoundFile__
#include <iostream>
#include <iomanip>
#include "File.h"
using namespace std;

class SoundFile : public File {
    
private:
    int duration_;
    int bit_depth_;
    string num_of_channels_;
    int sampling_freq_HZ_;
    
public:
    SoundFile();
    SoundFile(string name, int size_KB, string file_path, bool read_only, FileFormat file_format,
              int duration, int bit_depth, string num_of_channels, int sampling_freq);
    virtual ~SoundFile();
    
    //Setter functions
    void set_duration( int );
    void set_bit_depth( int );
    void set_num_of_channels( string );
    void set_sampling_freq( int );
    
    //Getter functions
    int get_duration() const;
    int get_bit_depth() const;
    string get_num_of_channels() const;
    int get_sampling_freq() const;
    
    virtual void Display() const;
    virtual char get_type() const;
    virtual void Open() const;
    SoundFile * Trim(string end_time) const;
    SoundFile * Trim(string begin_time, string end_time) const;
};
#endif
