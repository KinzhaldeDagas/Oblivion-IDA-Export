NiObject *__thiscall sub_53D930(NiObject *this, __int16 a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  int i; // eax
  int v8; // ecx

  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable';
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable';
  *((_WORD *)this + 0x12) = 0;
  *((_WORD *)this + 0x15) = 1;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_WORD *)this + 6) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = a3;
  v5 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a3);
  v6 = v5;
  if ( v5 )
    sub_401080(v5, 0x1C, a3, (void *(__thiscall *)(void *))sub_53D910);
  else
    v6 = 0;
  *((_DWORD *)this + 5) = v6;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v8) = 0 )
    v8 = (unsigned __int16)i++;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 6) = a4;
  return this;
}
