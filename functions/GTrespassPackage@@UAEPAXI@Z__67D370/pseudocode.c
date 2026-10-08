TESPackage *__thiscall TrespassPackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  this->__vftable = &TrespassPackage::`vftable'; /*0x67d373*/
  TESPackage::~TESPackage(this); /*0x67d379*/
  if ( (a2 & 1) != 0 ) /*0x67d383*/
    FormHeapFree((unsigned int)this); /*0x67d386*/
  return this; /*0x67d390*/
}
