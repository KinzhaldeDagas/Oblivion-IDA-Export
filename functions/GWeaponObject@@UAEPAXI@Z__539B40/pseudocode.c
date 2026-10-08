Atmosphere *__thiscall WeaponObject::`scalar deleting destructor'(Atmosphere *this, char a2)
{
  WeaponObject::~WeaponObject(this); /*0x539b43*/
  if ( (a2 & 1) != 0 ) /*0x539b4d*/
    FormHeapFree((unsigned int)this); /*0x539b50*/
  return this; /*0x539b5a*/
}
