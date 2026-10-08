TESPackage *__thiscall SpectatorPackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  this->__vftable = (TESPackageVtbl *)&SpectatorPackage::`vftable'; /*0x67c2e3*/
  TESPackage::~TESPackage(this); /*0x67c2e9*/
  if ( (a2 & 1) != 0 ) /*0x67c2f3*/
    FormHeapFree((unsigned int)this); /*0x67c2f6*/
  return this; /*0x67c300*/
}
