TESPackage *__thiscall sub_6068D0(TESPackage *this, int a2)
{
  _DWORD *v3; // eax

  TESPackage::TESPackage(this);
  this->__vftable = (TESPackageVtbl *)&AlarmPackage::`vftable';
  v3 = (_DWORD *)FormHeapAlloc(8u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 0xF) = v3;
  if ( a2 )
    BSSimpleList_PushFront(v3, a2);
  return this;
}
