TESPackage *__thiscall sub_606860(TESPackage *this)
{
  _DWORD *v2; // eax

  TESPackage::TESPackage(this);
  this->__vftable = (TESPackageVtbl *)&AlarmPackage::`vftable';
  v2 = (_DWORD *)FormHeapAlloc(8u);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 0xF) = v2;
  return this;
}
