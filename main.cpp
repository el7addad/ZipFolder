#include <QCoreApplication>
#include <ZipUtils.h>

int main(int argc, char *argv[])
{

    ZipUtils::ZipFolder(QDir("D:\\JsonFiles"), "D:\\Test.zip");

}
