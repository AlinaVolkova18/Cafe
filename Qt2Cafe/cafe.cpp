#include "cafe.h"

Cafe::Cafe(QString ID, QString Name, QString Address, QString Type, QString Time, QObject *parent): QObject(parent)
{
    id = ID;
    name = Name;
    address = Address;
    type = Type;
    time = Time;
}

void Cafe::SetID(QString ID)
{
    id = ID;
}
void Cafe::SetName(QString Name)
{
    name = Name;
}
void Cafe::SetAddress(QString Address)
{
    address = Address;
}
void Cafe::SetType(QString Type)
{
    type = Type;
}
void Cafe::SetTime(QString Time)
{
    time = Time;
}
QString Cafe::ID()
{
    return id;
}
QString Cafe::Name()
{
    return name;
}
QString Cafe::Address()
{
    return address;
}
QString Cafe::Type()
{
    return type;
}
QString Cafe::Time()
{
    return time;
}
 Cafe::~Cafe()
{
}
