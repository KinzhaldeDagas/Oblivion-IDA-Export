NiObject *__thiscall sub_53D930(NiObject *this, __int16 a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  int i; // eax
  int v8; // ecx

  NiObject_constr(this); /*0x53d95b*/
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable'; /*0x53d962*/
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x53d96c*/
  *((_WORD *)this + 0x12) = 0; /*0x53d973*/
  *((_WORD *)this + 0x15) = 1; /*0x53d977*/
  *((_WORD *)this + 0x13) = 0; /*0x53d97d*/
  *((_WORD *)this + 0x14) = 0; /*0x53d981*/
  *((_DWORD *)this + 8) = 0; /*0x53d985*/
  *((_WORD *)this + 6) = a2; /*0x53d991*/
  *((_DWORD *)this + 2) = 0; /*0x53d9a8*/
  *((_DWORD *)this + 4) = a3; /*0x53d9ab*/
  v5 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a3);
  v6 = v5; /*0x53d9b8*/
  if ( v5 ) /*0x53d9c8*/
    sub_401080(v5, 0x1C, a3, (void *(__thiscall *)(void *))sub_53D910); /*0x53d9d3*/
  else
    v6 = 0; /*0x53d9da*/
  *((_DWORD *)this + 5) = v6; /*0x53d9dc*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v8) = 0 ) /*0x53d9e1*/
    v8 = (unsigned __int16)i++; /*0x53d9ea*/
  *((_WORD *)this + 0x13) = 0; /*0x53d9fd*/
  *((_WORD *)this + 0x14) = 0; /*0x53da01*/
  *((_DWORD *)this + 6) = a4; /*0x53da05*/
  return this; /*0x53da0a*/
}
