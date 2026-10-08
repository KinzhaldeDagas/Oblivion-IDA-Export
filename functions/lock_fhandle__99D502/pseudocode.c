int __cdecl __lock_fhandle(int a1)
{
  int v1; // ebp
  int v2; // esi

  v2 = unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F); /*0x99d51e*/
  if ( *(_DWORD *)(v2 + 8) ) /*0x99d52e*/
    return __lock_fhandle_::_LN12_10(0, v1, a1); /*0x99d531*/
  _lock(0xA); /*0x99d535*/
  if ( !*(_DWORD *)(v2 + 8) ) /*0x99d53e*/
  {
    __crtInitCritSecAndSpinCount(0, (_RTL_CRITICAL_SECTION_0 *)(v2 + 0xC), 0xFA0u); /*0x99d54c*/
    ++*(_DWORD *)(v2 + 8); /*0x99d55a*/
  }
  _unlock(0xA); /*0x99d59b*/
  return __lock_fhandle_::_LN12_10(0, v1, a1);
}
