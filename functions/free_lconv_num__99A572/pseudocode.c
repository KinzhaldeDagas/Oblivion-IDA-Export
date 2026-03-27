void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 )
  {
    if ( *(_UNKNOWN **)a1 != off_B30DB4 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_B30DB8 )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_B30DBC )
      free(v1);
  }
}
