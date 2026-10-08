// Verified: mode byte at +0xC controls ownership and shared region-data cache lifetime. Owning lists reset cache on first owner and increment the manager/list refcount.
_DWORD *__thiscall TESRegionList_constr(_DWORD *this, char a2)
{
  unsigned int i; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  *(this + 1) = 0; /*0x4a62dc*/
  *(this + 2) = 0; /*0x4a62df*/
  *this = &TESRegionList::`vftable'; /*0x4a62e2*/
  *((_BYTE *)this + 0xC) = a2; /*0x4a62e8*/
  if ( a2 ) /*0x4a62eb*/
  {
    if ( !g_OblivionRegionDataManagerRefCount ) /*0x4a62ed*/
    {
      for ( i = 0; i < 0x10; i += 2 ) /*0x4a62f6*/
      {
        v4 = (void (__thiscall ***)(_DWORD, int))g_OblivionRegionDataCache[i]; /*0x4a6300*/
        if ( v4 ) /*0x4a6308*/
        {
          g_OblivionRegionDataCache[i] = 0; /*0x4a630a*/
          (**v4)(v4, 1); /*0x4a6316*/
        }
        v5 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB35424][i]; /*0x4a6318*/
        if ( v5 ) /*0x4a6320*/
        {
          MEMORY[0xB35424][i] = 0; /*0x4a6322*/
          (**v5)(v5, 1); /*0x4a632e*/
        }
      }
    }
    ++g_OblivionRegionDataManagerRefCount; /*0x4a6339*/
  }
  return this; /*0x4a6342*/
}
