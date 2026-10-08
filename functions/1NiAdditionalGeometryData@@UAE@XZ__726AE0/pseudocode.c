void __thiscall NiAdditionalGeometryData::~NiAdditionalGeometryData(NiAdditionalGeometryData *this)
{
  unsigned int i; // edi
  unsigned int v3; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &NiAdditionalGeometryData::`vftable'; /*0x726b09*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); OB_NiAdditionalGeometryData_RemoveDataBlock(this, i++, 1) ) /*0x726b0f*/
    ; /*0x726b25*/
  if ( *((_DWORD *)this + 5) ) /*0x726b35*/
    FormHeapFree(*((_DWORD *)this + 5)); /*0x726b3d*/
  v3 = *((_DWORD *)this + 8); /*0x726b48*/
  *((_DWORD *)this + 7) = &NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x726b49*/
  FormHeapFree(v3); /*0x726b50*/
  NiRefObject_destr(this); /*0x726b62*/
}
