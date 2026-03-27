int _getstream()
{
  _DWORD *v0; // edi
  int i; // esi
  char *v2; // eax
  int v3; // esi

  v0 = 0;
  _lock(1);
  for ( i = 0; i < dword_BABC00; ++i )
  {
    v2 = (char *)dword_BAABE4 + 4 * i;
    if ( !*(_DWORD *)v2 )
    {
      v3 = 4 * i;
      *(_DWORD *)((char *)dword_BAABE4 + v3) = unknown_libname_72();
      if ( *(_DWORD *)((char *)dword_BAABE4 + v3) )
      {
        if ( __crtInitCritSecAndSpinCount(
               0,
               (_RTL_CRITICAL_SECTION_0 *)(*(_DWORD *)((char *)dword_BAABE4 + v3) + 0x20),
               0xFA0u) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_BAABE4 + v3) + 0x20));
          v0 = *(_DWORD **)((char *)dword_BAABE4 + v3);
        }
        else
        {
          free(*(void **)((char *)dword_BAABE4 + v3));
          *(_DWORD *)((char *)dword_BAABE4 + v3) = 0;
        }
      }
      break;
    }
    if ( (*(_BYTE *)(*(_DWORD *)v2 + 0xC) & 0x83) == 0 )
    {
      if ( (unsigned int)(i - 3) <= 0x10 && !_mtinitlocknum(i + 0x10) )
        break;
      _lock_file2(i, *((_RTL_CRITICAL_SECTION_0 **)dword_BAABE4 + i));
      if ( (*(_BYTE *)(*((_DWORD *)dword_BAABE4 + i) + 0xC) & 0x83) == 0 )
      {
        v0 = *((_DWORD **)dword_BAABE4 + i);
        break;
      }
      _unlock_file2(i, *((_RTL_CRITICAL_SECTION_0 **)dword_BAABE4 + i));
    }
  }
  if ( v0 )
  {
    v0[1] = 0;
    v0[3] = 0;
    v0[2] = 0;
    *v0 = 0;
    v0[7] = 0;
    v0[4] = 0xFFFFFFFF;
  }
  _unlock(1);
  return _getstream_::_LN20_3();
}
