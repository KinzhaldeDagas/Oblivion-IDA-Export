int _alloc_osfhnd()
{
  int v0; // ebp
  int v1; // edi
  unsigned int v2; // esi
  unsigned int v4; // eax

  v1 = 0;
  if ( !_mtinitlocknum(0xB) )
    JUMPOUT(0x99D754);
  _lock(0xB);
  while ( 1 )
  {
    if ( v1 >= 0x40 )
      goto LABEL_18;
    v2 = dword_BAAAC0[v1];
    if ( !v2 )
    {
      v4 = unknown_libname_74();
      if ( v4 )
      {
        dword_BAAAC0[v1] = v4;
        uNumber += 0x20;
        while ( v4 < dword_BAAAC0[v1] + 0x500 )
        {
          *(_BYTE *)(v4 + 4) = 0;
          *(_DWORD *)v4 = 0xFFFFFFFF;
          *(_BYTE *)(v4 + 5) = 0xA;
          *(_DWORD *)(v4 + 8) = 0;
          v4 += 0x28;
        }
        *(_BYTE *)(dword_BAAAC0[(0x20 * v1) >> 5] + 4) = 1;
        __lock_fhandle(0x20 * v1);
      }
LABEL_18:
      _unlock(0xB);
      return _alloc_osfhnd_::_LN32_1(v0);
    }
    if ( v2 < dword_BAAAC0[v1] + 0x500 )
      break;
    ++v1;
  }
  if ( (*(_BYTE *)(v2 + 4) & 1) != 0 )
    JUMPOUT(0x99D68C);
  if ( *(_DWORD *)(v2 + 8) )
    return _alloc_osfhnd_::_LN36_3();
  _lock(0xA);
  if ( !*(_DWORD *)(v2 + 8) )
  {
    if ( __crtInitCritSecAndSpinCount(1, (_RTL_CRITICAL_SECTION_0 *)(v2 + 0xC), 0xFA0u) )
      ++*(_DWORD *)(v2 + 8);
  }
  _unlock(0xA);
  return _alloc_osfhnd_::_LN36_3();
}
