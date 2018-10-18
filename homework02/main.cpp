#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile>

namespace SK {
enum SortKind{
    col01    =   0x00000001<<0,         //!< 第1列
    col02    =   0x00000001<<1,         //!< 第2列
    col03    =   0x00000001<<2,         //!< 第3列
    col04    =   0x00000001<<3,         //!< 第4列
    col05    =   0x00000001<<4,         //!< 第5列
    col06    =   0x00000001<<5,         //!< 第6列
    col07    =   0x00000001<<6,         //!< 第7列
    col08    =   0x00000001<<7,         //!< 第8列
    col09    =   0x00000001<<8,         //!< 第9列
    col10    =   0x00000001<<9,         //!< 第10列
    col11    =   0x00000001<<10,        //!< 第11列
    col12    =   0x00000001<<11,        //!< 第12列
    col13    =   0x00000001<<12,        //!< 第13列
    col14    =   0x00000001<<13,        //!< 第14列
    col15    =   0x00000001<<14,        //!< 第15列
    col16    =   0x00000001<<15,        //!< 第16列
    col17    =   0x00000001<<16,        //!< 第17列
    col18    =   0x00000001<<17,        //!< 第18列
    col19    =   0x00000001<<18,        //!< 第19列
    col20    =   0x00000001<<19,        //!< 第20列
    col21    =   0x00000001<<20,        //!< 第21列
    col22    =   0x00000001<<21,        //!< 第22列
    col23    =   0x00000001<<22,        //!< 第23列
    col24    =   0x00000001<<23,        //!< 第24列
    col25    =   0x00000001<<24,        //!< 第25列
    col26    =   0x00000001<<25,        //!< 第26列
    col27    =   0x00000001<<26,        //!< 第27列
    col28    =   0x00000001<<27,        //!< 第28列
    col29    =   0x00000001<<28,        //!< 第29列
    col30    =   0x00000001<<29,        //!< 第30列
    col31    =   0x00000001<<30,        //!< 第31列
    col32    =   0x00000001<<31,        //!< 第32列
};
}


typedef struct{
    QStringList stud;  //
} studData;

QDebug operator<< (QDebug d, const studData &data) {
     for(int i=0;i<data.stud.size();i++)
     {
             d.noquote().nospace()<<QString(data.stud.at(i))<<" ";
         }
    return d;
}

// 比较类，用于std::sort第三个参数
class myCmp {
public:
    myCmp(int selectedColumn) { this->currentColumn = selectedColumn; }
    bool operator() (const studData& d1,const studData& d2);
private:
    int currentColumn;
};

bool myCmp::operator()(const studData &d1, const studData &d2)
{
    bool result = false;
    quint32 sortedColumn = 0x00000001<<currentColumn;
    switch (sortedColumn) {
           case SK::col01:result=d1.stud.at(1)>d2.stud.at(1);    break;
           case SK::col02:result=d1.stud.at(2)>d2.stud.at(2);    break;
           case SK::col03:result=d1.stud.at(3)>d2.stud.at(3);    break;
           case SK::col04:result=d1.stud.at(4)>d2.stud.at(4);    break;
           case SK::col05:result=d1.stud.at(5)>d2.stud.at(5);    break;
           case SK::col06:result=d1.stud.at(6)>d2.stud.at(6);    break;
           case SK::col07:result=d1.stud.at(7)>d2.stud.at(7);    break;
           case SK::col08:result=d1.stud.at(8)>d2.stud.at(8);    break;
           case SK::col09:result=d1.stud.at(9)>d2.stud.at(9);    break;
           case SK::col10:result=d1.stud.at(10)>d2.stud.at(10);  break;
           case SK::col11:result=d1.stud.at(11)>d2.stud.at(11);  break;
           case SK::col12:result=d1.stud.at(12)>d2.stud.at(12);  break;
           case SK::col13:result=d1.stud.at(13)>d2.stud.at(13);  break;
           case SK::col14:result=d1.stud.at(14)>d2.stud.at(14);  break;
           case SK::col15:result=d1.stud.at(15)>d2.stud.at(15);  break;
           case SK::col16:result=d1.stud.at(16)>d2.stud.at(16);  break;
           case SK::col17:result=d1.stud.at(17)>d2.stud.at(17);  break;
           case SK::col18:result=d1.stud.at(18)>d2.stud.at(18);  break;
           case SK::col19:result=d1.stud.at(19)>d2.stud.at(19);  break;
           case SK::col20:result=d1.stud.at(20)>d2.stud.at(20);  break;
           case SK::col21:result=d1.stud.at(21)>d2.stud.at(21);  break;
           case SK::col22:result=d1.stud.at(22)>d2.stud.at(22);  break;
           case SK::col23:result=d1.stud.at(23)>d2.stud.at(23);  break;
           case SK::col24:result=d1.stud.at(24)>d2.stud.at(24);  break;
           case SK::col25:result=d1.stud.at(25)>d2.stud.at(25);  break;
           case SK::col26:result=d1.stud.at(26)>d2.stud.at(26);  break;
           case SK::col27:result=d1.stud.at(27)>d2.stud.at(27);  break;
           case SK::col28:result=d1.stud.at(28)>d2.stud.at(28);  break;
           case SK::col29:result=d1.stud.at(29)>d2.stud.at(29);  break;
           case SK::col30:result=d1.stud.at(30)>d2.stud.at(30);  break;
           case SK::col31:result=d1.stud.at(31)>d2.stud.at(31);  break;
           case SK::col32:result=d1.stud.at(32)>d2.stud.at(32);  break;
           default:;break;
    }
    return result;

}


class ScoreSorter
{
public:
    ScoreSorter(QString dataFile);
    void readFile();
        void doSort();
    private:
        QString tempFile;
        QList<studData> data;
        studData list;
        void out_file(quint8 lie);
}

ScoreSorter::ScoreSorter(QString dataFile)
{
         this->tempFile=dataFile;
}


void ScoreSorter::readFile()
{
    //打开文件
    QFile file(this->datafile);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<QString("打开 %1 失败").arg(this->datafile);
    }

    QString titile(file.readLine()); //读取整行，作为字符串返回
    this->txttitle.stud = titile.split(" ", QString::SkipEmptyParts);

    if((this->txttitle.stud).last() == "\n")
        this->txttitle.stud.removeLast();

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);


        getdata.stud = str.split(" ", QString::SkipEmptyParts);  //读取成绩数据

        if((getdata.stud).last() == "\n")
            getdata.stud.removeLast();

        if(getdata.stud.size()==0) continue;
            this->infor.append(getdata);

    }
}



//排序函数
void ScoreSorter::doSort()
{
    for(int i=1; i<this->txttitle.stud.size(); i++)
    {
        myCmp mycmp(i-1);
        std::sort(this->infor.begin() , this->infor.end() , mycmp );

        qDebug()<<"排序后输出，当前排序第 "<< i+1 <<" 列：";
        qDebug()<< "   "<<(this->txttitle);    //输出表头
        for(int i=0;i<this->infor.size();i++)  qDebug() << this->infor.at(i);  //重载输出
        qDebug()<<"--------------------------------------------------------------------\n";

        this->printfile(i+1); //调用函数数据写入
    }
}


void ScoreSorter::printfile(quint8 currentColumn)
{
    QFile file("sorted_"+this->datafile);
    file.open(QIODevice::ReadWrite | QIODevice::Append);
    QTextStream stream(&file);
    stream.setCodec("UTF-8");  //用UTF8编码输入
    stream<<QString("排序后输出，当前排序第").toUtf8()<<line <<QString(" 列：").toUtf8()<<"\n";
    //输出表头
    for(int j=0;j<this->txttitle.stud.size();j++)
    {
        stream<<"   "<<this->txttitle.stud.at(j);
    }
        stream<<"\r\n";
    //输出数据
    for(int i=0;i<this->infor.size();i++)
    {
        for(int j=0;j<this->txttitle.stud.size();j++)
        stream<<this->infor.at(i).stud.at(j)<<"\t";
        stream<<"\r\n";
    }


    stream<<"----------------------------------------------------------------"<<"\r\n\r\n";
    file.close();
}

int main
{
    //QCoreApplication a(argc, argv);

    QString datafile = "data.txt";// 如果排序后文件已存在，则删除之
    QFile f("sorted_"+datafile);
    if (f.exists())
    {
        f.remove();
    }

    ScoreSorter s(datafile);
    s.readFile();
    s.doSort();
    return 0;
}
