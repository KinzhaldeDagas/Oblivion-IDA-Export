TESPackage *__thiscall TESPackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  TESPackage::~TESPackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
