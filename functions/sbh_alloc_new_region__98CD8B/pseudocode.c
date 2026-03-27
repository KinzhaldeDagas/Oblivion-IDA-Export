char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax
  SIZE_T v6; // [esp-4h] [ebp-Ch]
  DWORD v7; // [esp+0h] [ebp-8h]

  v0 = dword_BAABC4;
  if ( dword_BAABC4 == dword_BAABD4 )
  {
    LODWORD(v6) = 0x14 * (dword_BAABD4 + 0x10);
    v1 = HeapReAlloc(hHeap, 0, lpMem, v6);
    if ( !v1 )
      return 0;
    dword_BAABD4 += 0x10;
    v0 = dword_BAABC4;
    lpMem = v1;
  }
  v3 = (char *)lpMem + 0x14 * v0;
  LODWORD(v6) = 0x41C4;
  v4 = HeapAlloc(hHeap, 8u, v6);
  *((_DWORD *)v3 + 4) = v4;
  if ( !v4 )
    return 0;
  v5 = VirtualAlloc(0, 0x200000100000uLL, 4u, v7);
  *((_DWORD *)v3 + 3) = v5;
  if ( !v5 )
  {
    HeapFree(hHeap, 0, *((LPVOID *)v3 + 4));
    return 0;
  }
  *((_DWORD *)v3 + 2) = 0xFFFFFFFF;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  ++dword_BAABC4;
  **((_DWORD **)v3 + 4) = 0xFFFFFFFF;
  return v3;
}
