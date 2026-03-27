void __stdcall _freefls(int a1)
{
  volatile LONG *v1; // edi

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 0x24) )
      free(*(void **)(a1 + 0x24));
    if ( *(_DWORD *)(a1 + 0x2C) )
      free(*(void **)(a1 + 0x2C));
    if ( *(_DWORD *)(a1 + 0x34) )
      free(*(void **)(a1 + 0x34));
    if ( *(_DWORD *)(a1 + 0x3C) )
      free(*(void **)(a1 + 0x3C));
    if ( *(_DWORD *)(a1 + 0x44) )
      free(*(void **)(a1 + 0x44));
    if ( *(_DWORD *)(a1 + 0x48) )
      free(*(void **)(a1 + 0x48));
    if ( *(_UNKNOWN **)(a1 + 0x5C) != &unk_B312C8 )
      free(*(void **)(a1 + 0x5C));
    _lock(0xD);
    v1 = *(volatile LONG **)(a1 + 0x68);
    if ( v1 )
    {
      if ( !InterlockedDecrement(*(volatile LONG **)(a1 + 0x68)) && v1 != &dword_B31390 )
        free((void *)v1);
    }
    _unlock(0xD);
    _freefls(a1);
  }
}
