NiObject *__thiscall sub_726010(NiObject *this)
{
  int i; // eax
  int v3; // edx

  NiObject_constr(this); /*0x726035*/
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable'; /*0x72603c*/
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x726042*/
  *((_WORD *)this + 0x12) = 0; /*0x726049*/
  *((_WORD *)this + 0x15) = 1; /*0x72604d*/
  *((_WORD *)this + 0x13) = 0; /*0x726053*/
  *((_WORD *)this + 0x14) = 0; /*0x726057*/
  *((_DWORD *)this + 8) = 0; /*0x72605b*/
  *((_DWORD *)this + 2) = 0; /*0x72605e*/
  *((_DWORD *)this + 4) = 0; /*0x726061*/
  *((_DWORD *)this + 5) = 0; /*0x726064*/
  *((_WORD *)this + 6) = 0; /*0x726067*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v3) = 0 ) /*0x72606d*/
    v3 = (unsigned __int16)i++; /*0x726076*/
  *((_WORD *)this + 0x13) = 0; /*0x726085*/
  *((_WORD *)this + 0x14) = 0; /*0x726089*/
  *((_DWORD *)this + 6) = 0; /*0x72608d*/
  return this; /*0x726092*/
}
