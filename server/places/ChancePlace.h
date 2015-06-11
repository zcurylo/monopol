#ifndef CHANCEPLACE_H
#define CHANCEPLACE_H

#include <memory>
#include "BoardPlace.h"

class ChancePlace : public BoardPlace
{
public:
    ChancePlace(const int& inp, const QString& name);

private:
    virtual std::unique_ptr<Visitor> createVisitor(int playerId) const;
    virtual int implementGetNumberOfBuildHouses() const;
    virtual int implementGetNumberOfBuildHotels() const;
    virtual void implementBuildHouse();
    virtual void implementBuildHotel();
};

#endif // CHANCEPLACE_H
