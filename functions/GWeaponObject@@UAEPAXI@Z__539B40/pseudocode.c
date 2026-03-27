Atmosphere *__thiscall WeaponObject::`scalar deleting destructor'(Atmosphere *this, char a2)
{
  WeaponObject::~WeaponObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
