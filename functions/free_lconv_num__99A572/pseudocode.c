void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 ) /*0x99a579*/
  {
    if ( *(_UNKNOWN **)a1 != off_B30DB4 ) /*0x99a583*/
      free(*(void **)a1); /*0x99a586*/
    if ( *(_UNKNOWN **)(a1 + 4) != off_B30DB8 ) /*0x99a595*/
      free(*(void **)(a1 + 4)); /*0x99a598*/
    v1 = *(void **)(a1 + 8); /*0x99a59e*/
    if ( v1 != off_B30DBC ) /*0x99a5a7*/
      free(v1); /*0x99a5aa*/
  }
}
