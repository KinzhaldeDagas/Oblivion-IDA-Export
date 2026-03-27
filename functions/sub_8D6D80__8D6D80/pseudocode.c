int __stdcall sub_8D6D80(int a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // edx

  a3[0xC0D] = 0x7F7FFFFF;
  a3[0xC10] = 0;
  *a3 = a3 + 0xC;
  v3 = *a2;
  a2[0xA] = *a2 + 0x1A50;
  *((_BYTE *)a2 + 0xC) = *(_BYTE *)(0x3C * *(char *)(a1 + 8) + v3 + 0x1A24);
  sub_8E6D10(a1, (int)a2, (int)a3);
  v4 = dword_BA7D98;
  result = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v6 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v6 <= result || v6 == result )
  {
    *(_DWORD *)(v4 + 4) = 1;
    v4 = dword_BA7D98;
  }
  if ( *(_DWORD *)(v4 + 4) != 1 && (_DWORD *)*a3 != a3 + 0xC )
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD *))(**(_DWORD **)(a1 + 0x10) + 0x14))(
             *(_DWORD *)(a1 + 0x10),
             *(_DWORD *)(a1 + 0x14),
             *(_DWORD *)(a1 + 0x18),
             a2,
             a3);
  return result;
}
