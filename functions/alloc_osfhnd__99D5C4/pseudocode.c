void _alloc_osfhnd()
{
  int v0; // ebp
  int v1; // edi
  unsigned int v2; // esi
  unsigned int v3; // eax

  v1 = 0; /*0x99d5d4*/
  if ( !_mtinitlocknum(0xB) ) /*0x99d5e3*/
    JUMPOUT(0x99D754); /*0x99d754*/
  _lock(0xB); /*0x99d5ef*/
  while ( 1 ) /*0x99d5f8*/
  {
    if ( v1 >= 0x40 ) /*0x99d5fe*/
      goto LABEL_18; /*0x99d5fe*/
    v2 = unk_BAAAC0[v1]; /*0x99d604*/
    if ( !v2 ) /*0x99d60d*/
    {
      v3 = unknown_libname_74(0x20, 0x28); /*0x99d6d6*/
      if ( v3 ) /*0x99d6e2*/
      {
        unk_BAAAC0[v1] = v3; /*0x99d6eb*/
        MEMORY[0xBAAAA0] += 0x20; /*0x99d6ed*/
        while ( v3 < unk_BAAAC0[v1] + 0x500 ) /*0x99d6fe*/
        {
          *(_BYTE *)(v3 + 4) = 0; /*0x99d700*/
          *(_DWORD *)v3 = 0xFFFFFFFF; /*0x99d704*/
          *(_BYTE *)(v3 + 5) = 0xA; /*0x99d707*/
          *(_DWORD *)(v3 + 8) = 0; /*0x99d70b*/
          v3 += 0x28; /*0x99d70f*/
        }
        *(_BYTE *)(unk_BAAAC0[(0x20 * v1) >> 5] + 4) = 1; /*0x99d731*/
        __lock_fhandle(0x20 * v1); /*0x99d737*/
      }
LABEL_18:
      _unlock(0xB); /*0x99d745*/
      _alloc_osfhnd_::_LN32_1(v0); /*0x99d762*/
      return; /*0x99d762*/
    }
    if ( v2 < unk_BAAAC0[v1] + 0x500 ) /*0x99d624*/
      break; /*0x99d624*/
    ++v1; /*0x99d6cc*/
  }
  if ( (*(_BYTE *)(v2 + 4) & 1) != 0 ) /*0x99d62e*/
    JUMPOUT(0x99D68C); /*0x99d68c*/
  if ( *(_DWORD *)(v2 + 8) ) /*0x99d630*/
  {
    _alloc_osfhnd_::_LN36_3(v0, v1, v2); /*0x99d634*/
  }
  else
  {
    _lock(0xA); /*0x99d638*/
    if ( !*(_DWORD *)(v2 + 8) ) /*0x99d644*/
    {
      if ( __crtInitCritSecAndSpinCount(1, (_RTL_CRITICAL_SECTION_0 *)(v2 + 0xC), 0xFA0u) ) /*0x99d653*/
        ++*(_DWORD *)(v2 + 8); /*0x99d663*/
    }
    _unlock(0xA); /*0x99d699*/
    _alloc_osfhnd_::_LN36_3(v0, v1, v2); /*0x99d69f*/
  }
}
