int __usercall unknown_libname_67_::unknown_libname_69@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>)
{
  int v3; // eax
  void *v5; // [esp+0h] [ebp-4h]

  _freea(v5);
  if ( *(_DWORD *)(a2 - 0xC) != a1 )
    free(*(void **)(a2 - 0xC));
  v3 = *(_DWORD *)(a2 - 0x10);
  if ( v3 != a1 && *(_DWORD *)(a2 + 0x18) != v3 )
    free(*(void **)(a2 - 0x10));
  return a3;
}
