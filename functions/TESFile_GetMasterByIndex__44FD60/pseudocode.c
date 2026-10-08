// Oblivion TESFile_GetMasterByIndex returns masterFiles[slot-1] for a one-based MAST index, bounded by masterCount. FormID owner-byte resolution can therefore select distinct alias slots for duplicate filenames.
_DWORD *__thiscall TESFile_GetMasterByIndex(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // eax

  result = this; /*0x44fd60*/
  if ( a2 > *(this + 0xFC) ) /*0x44fd6c*/
    return 0; /*0x44fd6c*/
  if ( !a2 ) /*0x44fd70*/
    return result; /*0x44fd70*/
  v3 = *(this + 0xFD); /*0x44fd72*/
  if ( v3 ) /*0x44fd7a*/
    return *(_DWORD **)(v3 + 4 * a2 - 4); /*0x44fd7c*/
  else
    return 0; /*0x44fd83*/
}
