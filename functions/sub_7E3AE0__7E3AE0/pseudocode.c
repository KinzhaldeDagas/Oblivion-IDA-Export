NiObject *__thiscall sub_7E3AE0(NiObject *this, __int16 a2, int a3)
{
  void *v4; // eax
  void *v5; // edi
  int i; // eax
  int v7; // ecx

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
  v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a3);
  v5 = v4;
  if ( v4 )
    sub_401080(v4, 0x1C, a3, (void *(__thiscall *)(void *))sub_53D910);
  else
    v5 = 0;
  *((_DWORD *)this + 5) = v5;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v7) = 0 )
    v7 = (unsigned __int16)i++;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
