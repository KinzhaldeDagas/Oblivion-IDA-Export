int __cdecl __init_time(int a1)
{
  void **v1; // esi
  int v3; // edi

  if ( *(_DWORD *)(a1 + 0x20) )
  {
    v1 = (void **)unknown_libname_74();
    if ( !v1 )
      return 1;
    if ( _get_lc_time(a1, (int)v1) )
    {
      _free_lc_time(v1);
      free(v1);
      return 1;
    }
    v1[0x2D] = (void *)1;
  }
  else
  {
    v1 = (void **)off_B31EF0;
  }
  v3 = a1 + 0xD4;
  if ( *(_UNKNOWN ***)(a1 + 0xD4) != off_B31EF0 )
    InterlockedDecrement((volatile LONG *)(*(_DWORD *)v3 + 0xB4));
  *(_DWORD *)v3 = v1;
  return 0;
}
