int __cdecl sub_6D3660(signed int a1, int a2)
{
  int (__cdecl *v2)(int, int, int, signed int *, int); // eax
  int v4; // [esp-14h] [ebp-14h]

  v4 = *(_DWORD *)(a1 + 0x220); /*0x6d3678*/
  v2 = *(int (__cdecl **)(int, int, int, signed int *, int))(v4 + 8); /*0x6d3679*/
  a1 = 4; /*0x6d367c*/
  return v2(v4, a2, 4, &a1, 1); /*0x6d3689*/
}
