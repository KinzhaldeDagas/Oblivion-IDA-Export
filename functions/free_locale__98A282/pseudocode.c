void __cdecl _free_locale(int a1)
{
  volatile LONG *v1; // eax

  if ( !a1 ) /*0x98a295*/
    JUMPOUT(0x98A306); /*0x98a306*/
  if ( *(_DWORD *)(a1 + 4) ) /*0x98a297*/
  {
    if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 4)) && *(volatile LONG **)(a1 + 4) != &dword_B31390 ) /*0x98a2b1*/
      free(*(void **)(a1 + 4)); /*0x98a2b4*/
  }
  if ( *(_DWORD *)a1 ) /*0x98a2ba*/
  {
    _lock(0xC); /*0x98a2c0*/
    __removelocaleref(*(volatile LONG **)a1); /*0x98a2cb*/
    v1 = *(volatile LONG **)a1; /*0x98a2d1*/
    if ( *(_DWORD *)a1 ) /*0x98a2d1*/
    {
      if ( !*v1 && v1 != (volatile LONG *)&unk_B318C0 ) /*0x98a2e0*/
        __freetlocinfo(*(char **)a1); /*0x98a2e3*/
    }
    _unlock(0xC); /*0x98a311*/
    _free_locale_::_LN12_4((_DWORD *)a1); /*0x98a317*/
  }
  else
  {
    _free_locale_::_LN12_4((_DWORD *)a1); /*0x98a2bc*/
  }
}
