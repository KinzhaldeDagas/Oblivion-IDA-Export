int __cdecl __init_time(int a1)
{
  void **v1; // esi
  int v3; // edi

  if ( *(_DWORD *)(a1 + 0x20) ) /*0x99a507*/
  {
    v1 = (void **)unknown_libname_74(1, 0xB8); /*0x99a520*/
    if ( !v1 ) /*0x99a526*/
      return 1; /*0x99a52a*/
    if ( _get_lc_time(a1, (int)v1) ) /*0x99a52e*/
    {
      _free_lc_time(v1); /*0x99a538*/
      free(v1); /*0x99a53e*/
      return 1; /*0x99a545*/
    }
    v1[0x2D] = (void *)1; /*0x99a547*/
  }
  else
  {
    v1 = (void **)off_B31EF0; /*0x99a54f*/
  }
  v3 = a1 + 0xD4; /*0x99a551*/
  if ( *(_UNKNOWN ***)(a1 + 0xD4) != off_B31EF0 ) /*0x99a55b*/
    InterlockedDecrement((volatile LONG *)(*(_DWORD *)v3 + 0xB4)); /*0x99a563*/
  *(_DWORD *)v3 = v1; /*0x99a569*/
  return 0; /*0x99a56d*/
}
