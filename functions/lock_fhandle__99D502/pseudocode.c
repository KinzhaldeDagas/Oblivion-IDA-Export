int __cdecl __lock_fhandle(int a1)
{
  int v1; // esi

  v1 = dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F);
  if ( *(_DWORD *)(v1 + 8) )
    return __lock_fhandle_::_LN12_10();
  _lock(0xA);
  if ( !*(_DWORD *)(v1 + 8) )
  {
    __crtInitCritSecAndSpinCount(0, (_RTL_CRITICAL_SECTION_0 *)(v1 + 0xC), 0xFA0u);
    ++*(_DWORD *)(v1 + 8);
  }
  _unlock(0xA);
  return __lock_fhandle_::_LN12_10();
}
