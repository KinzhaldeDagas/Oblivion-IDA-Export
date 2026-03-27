NiObject *__thiscall sub_4C14D0(NiObject *this, __int16 a2)
{
  int i; // eax
  int v4; // edx

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
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v4) = 0 )
    v4 = (unsigned __int16)i++;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
