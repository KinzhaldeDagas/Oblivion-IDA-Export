int __usercall unknown_libname_67_::unknown_libname_69@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>)
{
  int v3; // eax
  void *v5; // [esp+0h] [ebp-4h]

  _freea(v5); /*0x98993e*/
  if ( *(_DWORD *)(a2 - 0xC) != a1 ) /*0x989963*/
    free(*(void **)(a2 - 0xC)); /*0x989968*/
  v3 = *(_DWORD *)(a2 - 0x10); /*0x98996e*/
  if ( v3 != a1 && *(_DWORD *)(a2 + 0x18) != v3 ) /*0x989978*/
    free(*(void **)(a2 - 0x10)); /*0x98997b*/
  return a3; /*0x989989*/
}
