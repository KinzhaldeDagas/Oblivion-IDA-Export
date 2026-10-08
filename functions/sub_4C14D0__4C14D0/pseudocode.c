NiObject *__thiscall sub_4C14D0(NiObject *this, __int16 a2)
{
  int i; // eax
  int v4; // edx

  NiObject_constr(this); /*0x4c14f5*/
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable'; /*0x4c1501*/
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x4c1507*/
  *((_WORD *)this + 0x12) = 0; /*0x4c150e*/
  *((_WORD *)this + 0x15) = 1; /*0x4c1512*/
  *((_WORD *)this + 0x13) = 0; /*0x4c1518*/
  *((_WORD *)this + 0x14) = 0; /*0x4c151c*/
  *((_DWORD *)this + 8) = 0; /*0x4c1520*/
  *((_WORD *)this + 6) = a2; /*0x4c1523*/
  *((_DWORD *)this + 2) = 0; /*0x4c1527*/
  *((_DWORD *)this + 4) = 0; /*0x4c152a*/
  *((_DWORD *)this + 5) = 0; /*0x4c152d*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v4) = 0 ) /*0x4c1532*/
    v4 = (unsigned __int16)i++; /*0x4c1543*/
  *((_WORD *)this + 0x13) = 0; /*0x4c1552*/
  *((_WORD *)this + 0x14) = 0; /*0x4c1556*/
  *((_DWORD *)this + 6) = 0; /*0x4c155a*/
  return this; /*0x4c155f*/
}
