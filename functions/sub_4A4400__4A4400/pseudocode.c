// Verified: clears TESRegionDataList nodes and destroys each payload only when ownsData at +8 is nonzero.
int __thiscall sub_4A4400(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi

  for ( result = BSSimpleList_Count(this); result; result = BSSimpleList_Count(this) ) /*0x4a440a*/
  {
    v3 = (_DWORD *)*(this + 1); /*0x4a4410*/
    v4 = (void (__thiscall ***)(_DWORD, int))*this; /*0x4a4415*/
    if ( v3 ) /*0x4a4417*/
    {
      *(this + 1) = v3[1]; /*0x4a441c*/
      *this = *v3; /*0x4a4422*/
      FormHeapFree((unsigned int)v3); /*0x4a4424*/
    }
    else
    {
      *this = 0; /*0x4a442e*/
    }
    if ( *((_BYTE *)this + 8) ) /*0x4a4434*/
    {
      if ( v4 ) /*0x4a443c*/
        (**v4)(v4, 1); /*0x4a4446*/
    }
  }
  return result; /*0x4a4454*/
}
