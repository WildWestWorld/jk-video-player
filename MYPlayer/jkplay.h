#ifndef JKPLAY_H
#define JKPLAY_H

#include <QObject>

class JKPlay : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString  backGround READ backGround WRITE setBackGround NOTIFY backGroundChanged)

public:
    explicit JKPlay(QObject *parent = nullptr);
    QString  backGround() const;
    void setBackGround(QString url);
signals:

};

#endif // JKPLAY_H
