int __cdecl flsall(int a1)
{
  int v1; // ebp
  int v2; // ecx

  _lock(1);
  if ( dword_BABC00 <= 0 )
  {
    _unlock(1);
    return flsall_::_LN21_0(v1);
  }
  else if ( *(_DWORD *)dword_BAABE4 && (*(_BYTE *)(*(_DWORD *)dword_BAABE4 + 0xC) & 0x83) != 0 )
  {
    _lock_file2(0, *(_DWORD *)dword_BAABE4);
    v2 = *(_DWORD *)(*(_DWORD *)dword_BAABE4 + 0xC);
    if ( (v2 & 0x83) != 0 && (a1 == 1 || !a1 && (v2 & 2) != 0) )
      _fflush_nolock(*(FILE **)dword_BAABE4);
    _unlock_file2(0, *(_DWORD *)dword_BAABE4);
    return flsall_::_LN25();
  }
  else
  {
    return flsall_::_LN25();
  }
}
