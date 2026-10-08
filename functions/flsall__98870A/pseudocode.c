void __cdecl flsall(int a1)
{
  int v1; // ebp
  int v2; // ecx

  _lock(1); /*0x988720*/
  if ( unk_BABC00 <= 0 ) /*0x988734*/
  {
    _unlock(1); /*0x9887dd*/
    flsall_::_LN21_0(v1); /*0x9887e3*/
  }
  else
  {
    if ( *(_DWORD *)unk_BAABE4 ) /*0x988742*/
    {
      if ( (*(_BYTE *)(*(_DWORD *)unk_BAABE4 + 0xC) & 0x83) != 0 ) /*0x98874c*/
      {
        _lock_file2(0, *(_RTL_CRITICAL_SECTION_0 **)unk_BAABE4); /*0x988750*/
        v2 = *(_DWORD *)(*(_DWORD *)unk_BAABE4 + 0xC); /*0x988765*/
        if ( (v2 & 0x83) != 0 && (a1 == 1 || !a1 && (v2 & 2) != 0) ) /*0x98878b*/
          _fflush_nolock(*(FILE **)unk_BAABE4); /*0x98878e*/
        _unlock_file2(0, *(_RTL_CRITICAL_SECTION_0 **)unk_BAABE4); /*0x9887b5*/
      }
    }
    flsall_::_LN25(); /*0x988744*/
  }
}
