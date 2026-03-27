float *__thiscall sub_67CBC0(float *this)
{
  _DWORD *v2; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // eax

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
  *(this + 8) = 0.0;
  *(_DWORD *)this = v2;
  *(this + 1) = 0.0;
  v3 = (TESPackage *)FormHeapAlloc(0x54u);
  if ( v3 )
    v4 = sub_67C260(v3, (int)this);
  else
    v4 = 0;
  *((_DWORD *)this + 2) = v4;
  v4->members.procedureArrayIndex = 0xF;
  return this;
}
