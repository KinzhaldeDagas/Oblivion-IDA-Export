TESPackage *__thiscall SpectatorPackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  this->__vftable = (TESPackageVtbl *)&SpectatorPackage::`vftable';
  TESPackage::~TESPackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
