#ifndef IDATA_H
#define IDATA_H

#include <QFile>
#include <QDataStream>
#include <string>
#include <memory>

class idata{
public:
    idata();
    virtual ~idata();

    idata * current_data;

    std::size_t * dataSize;
    void i_global_file(QFile * file, const char * iFileName, std::size_t * filesize);
    enum{ ibrushfile, ientityfile, imiscfile, itexturefile, ishaderfile, imodelfile, imapfile, ibmpfile }iFileType;
    void i_data(QDataStream * data, idata * i);
    void i_globaltype(idata * data, enum * _type);

    bool iFlush_Data(idata * data){
        data->dataSize == NULL;
        return NULL;
    };

};

#endif // IDATA_H
