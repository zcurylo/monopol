
QT += network



HEADERS += \
    ClientSocket.h \
    PlayerFactory.h \
    Player.h \
    GameBoard.h \
    ChanceQueue.h \
    Pawn.h \
    Token.h \
    visitors/Visitor.h \
    visitors/PawnVisitor.h \
    visitors/PlayerVisitor.h \
    places/BoardPlace.h \
    places/ChancePlace.h \
    places/CityPlace.h \
    places/CornerPlace.h \
    places/CounterPlace.h \
    places/RailwayPlace.h

SOURCES += \
    ClientSocket.cpp \
    main.cpp \
    PlayerFactory.cpp \
    Player.cpp \
    GameBoard.cpp \
    ChanceQueue.cpp \
    Pawn.cpp \
    Token.cpp \
    visitors/Visitor.cpp \
    visitors/PawnVisitor.cpp \
    visitors/PlayerVisitor.cpp \
    places/BoardPlace.cpp \
    places/ChancePlace.cpp \
    places/CityPlace.cpp \
    places/CornerPlace.cpp \
    places/CounterPlace.cpp \
    places/RailwayPlace.cpp



QMAKE_CXXFLAGS += -std=c++11