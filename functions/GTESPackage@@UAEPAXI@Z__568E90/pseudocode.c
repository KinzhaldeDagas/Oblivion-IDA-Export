TESPackage *__thiscall TESPackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  TESPackage::~TESPackage(this); /*0x568e93*/
  if ( (a2 & 1) != 0 ) /*0x568e9d*/
    FormHeapFree((unsigned int)this); /*0x568ea0*/
  return this; /*0x568eaa*/
}
