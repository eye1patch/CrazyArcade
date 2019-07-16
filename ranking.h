#ifndef RANKING_H
#define RANKING_H

#include<qstandarditemmodel.h>
#include <QWidget>
#include<QDialog>
#include<qmediaplayer.h>

namespace Ui {
class Ranking;
}

class Ranking : public QDialog
{
    Q_OBJECT

public:
    explicit Ranking(QDialog *parent = nullptr);
    ~Ranking();
    int readFile();
    QList<QString>stu_lines;
    QStandardItemModel*model;
    void setHeaderItem();
    void DoQurry();
    void Display(int row,QStringList vessel);
    void heroeslist();
    void closeEvent(QCloseEvent *event){toolplayer->stop();this->close(); }
    QMediaPlayer*toolplayer;
private:
    Ui::Ranking *ui;
};

#endif // RANKING_H
