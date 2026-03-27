void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 0xC) != off_B30DC0 )
      free(*(void **)(a1 + 0xC));
    if ( *(_UNKNOWN **)(a1 + 0x10) != off_B30DC4 )
      free(*(void **)(a1 + 0x10));
    if ( *(_UNKNOWN **)(a1 + 0x14) != off_B30DC8 )
      free(*(void **)(a1 + 0x14));
    if ( *(_UNKNOWN **)(a1 + 0x18) != off_B30DCC )
      free(*(void **)(a1 + 0x18));
    if ( *(_UNKNOWN **)(a1 + 0x1C) != off_B30DD0 )
      free(*(void **)(a1 + 0x1C));
    if ( *(_UNKNOWN **)(a1 + 0x20) != off_B30DD4 )
      free(*(void **)(a1 + 0x20));
    v1 = *(void **)(a1 + 0x24);
    if ( v1 != off_B30DD8 )
      free(v1);
  }
}
