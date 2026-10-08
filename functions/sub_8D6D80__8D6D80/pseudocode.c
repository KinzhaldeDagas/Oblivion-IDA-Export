int __stdcall sub_8D6D80(int a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // edx

  a3[0xC0D] = 0x7F7FFFFF; /*0x8d6d90*/
  a3[0xC10] = 0; /*0x8d6d9a*/
  *a3 = a3 + 0xC; /*0x8d6da7*/
  v3 = *a2; /*0x8d6da9*/
  a2[0xA] = *a2 + 0x1A50; /*0x8d6db1*/
  *((_BYTE *)a2 + 0xC) = *(_BYTE *)(0x3C * *(char *)(a1 + 8) + v3 + 0x1A24); /*0x8d6dc5*/
  sub_8E6D10(a1, (int)a2, (int)a3); /*0x8d6dc8*/
  v4 = unk_BA7D98; /*0x8d6dcd*/
  result = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d6dd9*/
  v6 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d6ddb*/
  if ( v6 <= result || v6 == result ) /*0x8d6de7*/
  {
    *(_DWORD *)(v4 + 4) = 1; /*0x8d6ded*/
    v4 = unk_BA7D98; /*0x8d6df4*/
  }
  if ( *(_DWORD *)(v4 + 4) != 1 && (_DWORD *)*a3 != a3 + 0xC ) /*0x8d6e02*/
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD *))(**(_DWORD **)(a1 + 0x10) + 0x14))( /*0x8d6e13*/
             *(_DWORD *)(a1 + 0x10),
             *(_DWORD *)(a1 + 0x14),
             *(_DWORD *)(a1 + 0x18),
             a2,
             a3);
  return result; /*0x8d6e16*/
}
