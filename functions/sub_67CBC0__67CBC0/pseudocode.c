float *__thiscall sub_67CBC0(float *this)
{
  _DWORD *v2; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // eax

  v2 = (_DWORD *)FormHeapAlloc(8u); /*0x67cbe6*/
  if ( v2 ) /*0x67cbf0*/
  {
    *v2 = 0; /*0x67cbf2*/
    v2[1] = 0; /*0x67cbf8*/
  }
  else
  {
    v2 = 0; /*0x67cc01*/
  }
  *(this + 8) = 0.0; /*0x67cc07*/
  *(_DWORD *)this = v2; /*0x67cc0a*/
  *(this + 1) = 0.0; /*0x67cc0c*/
  v3 = (TESPackage *)FormHeapAlloc(0x54u); /*0x67cc13*/
  if ( v3 ) /*0x67cc29*/
    v4 = sub_67C260(v3, (int)this); /*0x67cc2e*/
  else
    v4 = 0; /*0x67cc35*/
  *((_DWORD *)this + 2) = v4; /*0x67cc37*/
  v4->members.procedureArrayIndex = 0xF; /*0x67cc3a*/
  return this; /*0x67cc43*/
}
