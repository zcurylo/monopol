/****************************************************************************
** Meta object code from reading C++ file 'centralWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/centralWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_centralWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      32,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   39,   14,   14, 0x0a,
      71,   63,   14,   14, 0x0a,
      99,   95,   14,   14, 0x0a,
     121,   95,   14,   14, 0x0a,
     141,   95,   14,   14, 0x0a,
     165,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_centralWidget[] = {
    "centralWidget\0\0flag\0pause(bool)\0dice()\0"
    "round\0displayRound(int)\0message\0"
    "displayMessage(QString)\0inp\0"
    "displayWealth(double)\0displayCash(double)\0"
    "displayPrisonCards(int)\0handleDice()\0"
};

void centralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        centralWidget *_t = static_cast<centralWidget *>(_o);
        switch (_id) {
        case 0: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dice(); break;
        case 2: _t->displayRound((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->displayWealth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->displayCash((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->displayPrisonCards((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handleDice(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData centralWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject centralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_centralWidget,
      qt_meta_data_centralWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &centralWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *centralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *centralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_centralWidget))
        return static_cast<void*>(const_cast< centralWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int centralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void centralWidget::pause(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void centralWidget::dice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
