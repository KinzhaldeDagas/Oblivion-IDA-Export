UInt32 __thiscall TESForm_RemoveFromGlobalLists(TESForm *this)
{
  UInt32 result; // eax
  UInt32 v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  result = (unsigned int)this->member.flags >> 0xE; /*0x46b2c6*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x46b2cb*/
  {
    NiTMap_RemoveAt(&TESForm_FormIDMap, this->member.refID); /*0x46b2d6*/
    v3 = dword_B06158; /*0x46b2db*/
    result = 0; /*0x46b2e1*/
    if ( dword_B06158 ) /*0x46b2db*/
    {
      v4 = dword_B06150; /*0x46b2e7*/
      while ( *(TESForm **)(v4 + 4 * result) != this ) /*0x46b2f3*/
      {
        if ( ++result >= v3 ) /*0x46b2fa*/
          goto LABEL_12; /*0x46b2fa*/
      }
      if ( result < v3 ) /*0x46b300*/
      {
        v5 = *(_DWORD *)(v4 + 4 * result); /*0x46b302*/
        *(_DWORD *)(v4 + 4 * result) = 0; /*0x46b307*/
        if ( v5 ) /*0x46b30e*/
          --dword_B0615C; /*0x46b310*/
        v6 = dword_B06158 - 1; /*0x46b31d*/
        if ( result == v6 ) /*0x46b322*/
          dword_B06158 = v6; /*0x46b324*/
      }
    }
LABEL_12:
    if ( g_TESDataHandler ) /*0x46b32a*/
      return TESDataHandler_ReleaseFormID(g_TESDataHandler, this->member.refID); /*0x46b338*/
  }
  return result; /*0x46b33d*/
}
