bhkNiCollisionObject *__thiscall bhkNiCollisionObject::`scalar deleting destructor'(
        bhkNiCollisionObject *this,
        char a2)
{
  bhkNiCollisionObject::~bhkNiCollisionObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
