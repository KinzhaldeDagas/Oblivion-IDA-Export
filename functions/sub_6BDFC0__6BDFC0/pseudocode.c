int __cdecl sub_6BDFC0(signed int a1, int a2)
{
  int v2; // esi
  signed int v3; // edi
  int (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  int v6; // [esp-1Ch] [ebp-24h]

  v2 = a2;
  v3 = a1;
  sub_6D3660(a1, a2);
  LOBYTE(a2) = *(_BYTE *)(v2 + 4) != 0;
  v6 = *(_DWORD *)(v3 + 0x220);
  v4 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v6 + 8);
  a1 = 1;
  return v4(v6, &a2, 1, &a1, 1);
}
