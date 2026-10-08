void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 ) /*0x99a781*/
  {
    if ( *(_UNKNOWN **)(a1 + 0xC) != off_B30DC0 ) /*0x99a78c*/
      free(*(void **)(a1 + 0xC)); /*0x99a78f*/
    if ( *(_UNKNOWN **)(a1 + 0x10) != off_B30DC4 ) /*0x99a79e*/
      free(*(void **)(a1 + 0x10)); /*0x99a7a1*/
    if ( *(_UNKNOWN **)(a1 + 0x14) != off_B30DC8 ) /*0x99a7b0*/
      free(*(void **)(a1 + 0x14)); /*0x99a7b3*/
    if ( *(_UNKNOWN **)(a1 + 0x18) != off_B30DCC ) /*0x99a7c2*/
      free(*(void **)(a1 + 0x18)); /*0x99a7c5*/
    if ( *(_UNKNOWN **)(a1 + 0x1C) != off_B30DD0 ) /*0x99a7d4*/
      free(*(void **)(a1 + 0x1C)); /*0x99a7d7*/
    if ( *(_UNKNOWN **)(a1 + 0x20) != off_B30DD4 ) /*0x99a7e6*/
      free(*(void **)(a1 + 0x20)); /*0x99a7e9*/
    v1 = *(void **)(a1 + 0x24); /*0x99a7ef*/
    if ( v1 != off_B30DD8 ) /*0x99a7f8*/
      free(v1); /*0x99a7fb*/
  }
}
