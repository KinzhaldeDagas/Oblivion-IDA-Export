int __cdecl sub_6BDFC0(signed int a1, int a2)
{
  int v2; // esi
  signed int v3; // edi
  int (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  int v6; // [esp-1Ch] [ebp-24h]

  v2 = a2; /*0x6bdfc1*/
  v3 = a1; /*0x6bdfc6*/
  sub_6D3660(a1, a2); /*0x6bdfcc*/
  LOBYTE(a2) = *(_BYTE *)(v2 + 4) != 0; /*0x6bdfdf*/
  v6 = *(_DWORD *)(v3 + 0x220); /*0x6bdff0*/
  v4 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v6 + 8); /*0x6bdff1*/
  a1 = 1; /*0x6bdff4*/
  return v4(v6, &a2, 1, &a1, 1); /*0x6be001*/
}
