#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray original;
    original.fill('X', 1000);

    QByteArray compressed = qCompress(original);
    QByteArray decompressed = qUncompress(compressed);

    qInfo() << "Original: " << original.length();
    qInfo() << "Compressed: " << compressed.length();
    qInfo() << "Decompressed: " << decompressed.length();

    return a.exec();
}
