bhkNiCollisionObject *__thiscall sub_88EBA0(bhkNiCollisionObject *this, char a2)
{
  *(_DWORD *)this = &bhkBlendCollisionObject::`vftable';
  --dword_BA7A1C;
  bhkNiCollisionObject::~bhkNiCollisionObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
