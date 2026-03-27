int __cdecl sub_8D30B0(int a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  int result; // eax
  _DWORD v5[12]; // [esp+10h] [ebp-3050h] BYREF
  _BYTE v6[12292]; // [esp+40h] [ebp-3020h] BYREF
  int v7; // [esp+3044h] [ebp-1Ch]
  int v8; // [esp+3050h] [ebp-10h]

  v5[0] = v6;
  v2 = *a2;
  a2[0xA] = *a2 + 0x1B40;
  v3 = 0x3C * *(char *)(a1 + 8);
  v7 = 0x7F7FFFFF;
  v8 = 0;
  *((_BYTE *)a2 + 0xC) = *(_BYTE *)(v3 + v2 + 0x1A24);
  sub_8E6D10(a1, (int)a2, (int)v5);
  result = v5[0];
  if ( (_BYTE *)v5[0] != v6 )
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD *))(**(_DWORD **)(a1 + 0x10) + 0x14))(
             *(_DWORD *)(a1 + 0x10),
             *(_DWORD *)(a1 + 0x14),
             *(_DWORD *)(a1 + 0x18),
             a2,
             v5);
  return result;
}
