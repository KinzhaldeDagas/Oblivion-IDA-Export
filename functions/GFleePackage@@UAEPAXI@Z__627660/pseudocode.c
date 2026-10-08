TESPackage *__thiscall FleePackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  FleePackage::~FleePackage(this); /*0x627663*/
  if ( (a2 & 1) != 0 ) /*0x62766d*/
    FormHeapFree((unsigned int)this); /*0x627670*/
  return this; /*0x62767a*/
}
