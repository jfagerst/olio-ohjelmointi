#ifndef USERS_H
#define USERS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>

class Users : public QObject
{
    Q_OBJECT
private:
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
public:
    explicit Users(QObject *parent = nullptr);
    void getUsers(int);

signals:

private slots:
    void getUsersSlot(QNetworkReply *reply);
};

#endif // USERS_H
