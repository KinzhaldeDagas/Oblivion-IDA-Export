// Verified: record-copy helper for the 12-byte OblivionTESRegionSoundRecord; first field maps to a live form; remaining fields are copied without interpretation.
_DWORD *__thiscall TESRegionSoundRecord_CopyFrom(_BYTE *this, _BYTE *a2)
{
  unsigned int v3; // eax

  sub_4A34E0(this, a2); /*0x4a508e*/
  *(_DWORD *)this = &TESRegionDataSound::`vftable'; /*0x4a5095*/
  *((_DWORD *)this + 3) = 0; /*0x4a509f*/
  *((_DWORD *)this + 4) = 0; /*0x4a50a2*/
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a50ac*/
  if ( v3 <= 2 && v3 != *((_DWORD *)this + 2) ) /*0x4a50b6*/
    *((_DWORD *)this + 2) = v3; /*0x4a50b8*/
  return this; /*0x4a50bd*/
}
