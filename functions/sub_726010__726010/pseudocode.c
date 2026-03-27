NiObject *__thiscall sub_726010(NiObject *this)
{
  int i; // eax
  int v3; // edx

  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiAdditionalGeometryData::`vftable';
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable';
  *((_WORD *)this + 0x12) = 0;
  *((_WORD *)this + 0x15) = 1;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_WORD *)this + 6) = 0;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x13); *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v3) = 0 )
    v3 = (unsigned __int16)i++;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
