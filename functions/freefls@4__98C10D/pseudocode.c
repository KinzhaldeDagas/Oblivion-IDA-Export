void __stdcall _freefls(int a1)
{
  int v1; // ebp
  volatile LONG *v2; // edi

  if ( a1 ) /*0x98c11e*/
  {
    if ( *(_DWORD *)(a1 + 0x24) ) /*0x98c124*/
      free(*(void **)(a1 + 0x24)); /*0x98c12c*/
    if ( *(_DWORD *)(a1 + 0x2C) ) /*0x98c132*/
      free(*(void **)(a1 + 0x2C)); /*0x98c13a*/
    if ( *(_DWORD *)(a1 + 0x34) ) /*0x98c140*/
      free(*(void **)(a1 + 0x34)); /*0x98c148*/
    if ( *(_DWORD *)(a1 + 0x3C) ) /*0x98c14e*/
      free(*(void **)(a1 + 0x3C)); /*0x98c156*/
    if ( *(_DWORD *)(a1 + 0x44) ) /*0x98c15c*/
      free(*(void **)(a1 + 0x44)); /*0x98c164*/
    if ( *(_DWORD *)(a1 + 0x48) ) /*0x98c16a*/
      free(*(void **)(a1 + 0x48)); /*0x98c172*/
    if ( *(_UNKNOWN **)(a1 + 0x5C) != &unk_B312C8 ) /*0x98c180*/
      free(*(void **)(a1 + 0x5C)); /*0x98c183*/
    _lock(0xD); /*0x98c18b*/
    v2 = *(volatile LONG **)(a1 + 0x68); /*0x98c195*/
    if ( v2 ) /*0x98c19a*/
    {
      if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 0x68)) && v2 != &dword_B31390 ) /*0x98c1ad*/
        free((void *)v2); /*0x98c1b0*/
    }
    _unlock(0xD); /*0x98c21b*/
    _freefls(v1, a1, a1); /*0x98c221*/
  }
}
