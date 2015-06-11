#ifndef PLAYER_H
#define PLAYER_H


#include <QObject>
#include <memory>
#include <vector>
#include "ClientSocket.h"
#include "places/BoardPlace.h"

class Player : public QObject, public std::enable_shared_from_this<Player>
{
    Q_OBJECT
public:
    explicit Player(const int& id,
                    QPointer<ClientSocket> socketInp, QObject *parent = 0);
    void testCommunication();
    QPointer<ClientSocket> getSocketPointer();
    int getPlayerId()const;
    void sendMessageToAll(const QString& inp);
    void sendMessageToThisPlayer(const QString& inp);
    void payMoney(const double& payment);
    void collectMoney(const double& income);
    void addPrisonFreeCard();
    void takeMoneyFromOthers(const double& amount, const QString& message2others);
    int getNumberOfHouses() const;
    int getNumberOfHotels() const;
    void askToBuyHouse(const int& placeId, const QString& question);
    void askToBuyHotel(const int& placeId, const QString& question);
    void askToBuyPlace(const QString& question, std::shared_ptr<BoardPlace> placePtr);
signals:

public slots:
   void handleDiceTest();

private:
QPointer<ClientSocket> socket;
const int playerId;
double money;
int prisonFreeCardsNumber;
QVector< std::shared_ptr<BoardPlace> > places;
};

#endif // PLAYER_H
