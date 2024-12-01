#include "users.h"

Users::Users(QObject *parent)
    : QObject{parent}
{

}

void Users::getUsers(int x)
{
    QString s = QString::number(x);
    QString site_url="https://reqres.in/api/users/"+s;
    qDebug()<<site_url;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getUsersSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

void Users::getUsersSlot(QNetworkReply *reply)
{
    qDebug()<<"SLOT";
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    getManager->deleteLater();
}
