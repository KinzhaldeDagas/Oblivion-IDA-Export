NiCollisionData *__thiscall NiCollisionData::`scalar deleting destructor'(NiCollisionData *this, char a2)
{
  NiCollisionData::~NiCollisionData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
