int _getstream()
{
  _DWORD *v0; // edi
  int i; // esi
  char *v2; // eax
  int v3; // esi

  v0 = 0; /*0x98f3a9*/
  _lock(1); /*0x98f3b0*/
  for ( i = 0; i < dword_BABC00; ++i ) /*0x98f3b9*/
  {
    v2 = (char *)unk_BAABE4 + 4 * i; /*0x98f3cf*/
    if ( !*(_DWORD *)v2 ) /*0x98f3d4*/
    {
      v3 = 4 * i; /*0x98f426*/
      *(_DWORD *)((char *)unk_BAABE4 + v3) = unknown_libname_72(0x38); /*0x98f437*/
      if ( *(_DWORD *)((char *)unk_BAABE4 + v3) ) /*0x98f441*/
      {
        if ( __crtInitCritSecAndSpinCount( /*0x98f450*/
               0,
               (_RTL_CRITICAL_SECTION_0 *)(*(_DWORD *)((char *)unk_BAABE4 + v3) + 0x20),
               0xFA0u) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)unk_BAABE4 + v3) + 0x20)); /*0x98f47a*/
          v0 = *(_DWORD **)((char *)unk_BAABE4 + v3); /*0x98f485*/
        }
        else
        {
          free(*(void **)((char *)unk_BAABE4 + v3)); /*0x98f463*/
          *(_DWORD *)((char *)unk_BAABE4 + v3) = 0; /*0x98f46e*/
        }
      }
      break; /*0x98f471*/
    }
    if ( (*(_BYTE *)(*(_DWORD *)v2 + 0xC) & 0x83) == 0 ) /*0x98f3dc*/
    {
      if ( (unsigned int)(i - 3) <= 0x10 && !_mtinitlocknum(i + 0x10) ) /*0x98f3f2*/
        break; /*0x98f3f2*/
      _lock_file2(i, *((_RTL_CRITICAL_SECTION_0 **)unk_BAABE4 + i)); /*0x98f401*/
      if ( (*(_BYTE *)(*((_DWORD *)unk_BAABE4 + i) + 0xC) & 0x83) == 0 ) /*0x98f414*/
      {
        v0 = *((_DWORD **)unk_BAABE4 + i); /*0x98f422*/
        break; /*0x98f424*/
      }
      _unlock_file2(i, *((_RTL_CRITICAL_SECTION_0 **)unk_BAABE4 + i)); /*0x98f418*/
    }
  }
  if ( v0 ) /*0x98f48d*/
  {
    v0[1] = 0; /*0x98f48f*/
    v0[3] = 0; /*0x98f492*/
    v0[2] = 0; /*0x98f495*/
    *v0 = 0; /*0x98f498*/
    v0[7] = 0; /*0x98f49a*/
    v0[4] = 0xFFFFFFFF; /*0x98f49d*/
  }
  _unlock(1); /*0x98f4ba*/
  return _getstream_::_LN20_3((int)v0);
}
