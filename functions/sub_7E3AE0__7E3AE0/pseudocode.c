NiObject *__thiscall sub_7E3AE0(NiObject *this, __int16 a2, int a3)
{
  void *v4; // eax
  void *v5; // edi
  int i; // eax
  int v7; // ecx

  NiObject_constr(this); /*0x7e3b0b*/
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable'; /*0x7e3b12*/
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x7e3b1c*/
  *((_WORD *)this + 0x12) = 0; /*0x7e3b23*/
  *((_WORD *)this + 0x15) = 1; /*0x7e3b27*/
  *((_WORD *)this + 0x13) = 0; /*0x7e3b2d*/
  *((_WORD *)this + 0x14) = 0; /*0x7e3b31*/
  *((_DWORD *)this + 8) = 0; /*0x7e3b35*/
  *((_WORD *)this + 6) = a2; /*0x7e3b41*/
  *((_DWORD *)this + 2) = 0; /*0x7e3b58*/
  *((_DWORD *)this + 4) = a3; /*0x7e3b5b*/
  v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a3);
  v5 = v4; /*0x7e3b68*/
  if ( v4 ) /*0x7e3b78*/
    sub_401080(v4, 0x1C, a3, (void *(__thiscall *)(void *))sub_53D910); /*0x7e3b83*/
  else
    v5 = 0; /*0x7e3b8a*/
  *((_DWORD *)this + 5) = v5; /*0x7e3b8c*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v7) = 0 ) /*0x7e3b91*/
    v7 = (unsigned __int16)i++; /*0x7e3b9a*/
  *((_WORD *)this + 0x13) = 0; /*0x7e3ba9*/
  *((_WORD *)this + 0x14) = 0; /*0x7e3bad*/
  *((_DWORD *)this + 6) = 0; /*0x7e3bb1*/
  return this; /*0x7e3bb6*/
}
