
#include<gamemanager.h>



GameManager* game;
using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(NULL));


    game =new GameManager;
    game->show();
    game->create_menu();


    return a.exec();
}
