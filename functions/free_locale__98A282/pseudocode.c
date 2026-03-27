int __cdecl _free_locale(int a1)
{
  volatile LONG *v1; // eax

  if ( !a1 )
    JUMPOUT(0x98A306);
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 4)) && *(volatile LONG **)(a1 + 4) != &dword_B31390 )
      free(*(void **)(a1 + 4));
  }
  if ( !*(_DWORD *)a1 )
    return _free_locale_::_LN12_4();
  _lock(0xC);
  __removelocaleref(*(volatile LONG **)a1);
  v1 = *(volatile LONG **)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( !*v1 && v1 != (volatile LONG *)&unk_B318C0 )
      __freetlocinfo(*(char **)a1);
  }
  _unlock(0xC);
  return _free_locale_::_LN12_4();
}
