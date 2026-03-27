void __thiscall NiAdditionalGeometryData::~NiAdditionalGeometryData(NiAdditionalGeometryData *this)
{
  unsigned int i; // edi
  unsigned int v3; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &NiAdditionalGeometryData::`vftable';
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); sub_726200((int)this, i++, 1) )
    ;
  if ( *((_DWORD *)this + 5) )
    FormHeapFree(*((_DWORD *)this + 5));
  v3 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable';
  FormHeapFree(v3);
  NiRefObject_destr(this);
}
