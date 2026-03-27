int __cdecl sub_6F8430(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  rsize_t v5; // [esp-4h] [ebp-3Ch]
  int v6; // [esp+10h] [ebp-28h] BYREF
  unsigned int v7; // [esp+14h] [ebp-24h]
  int v8; // [esp+24h] [ebp-14h]
  unsigned int v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = 0xF;
  v8 = 0;
  LOBYTE(v7) = 0;
  sub_414420((int)&v6, a2, 0, 0xFFFFFFFF);
  LODWORD(v5) = 0xFFFFFFFF;
  v10 = 0;
  v3 = sub_6F6AF0(&v6, a3, 0, v5);
  *(_DWORD *)(a1 + 0x18) = 0xF;
  *(_DWORD *)(a1 + 0x14) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  sub_414420(a1, v3, 0, 0xFFFFFFFF);
  if ( v9 >= 0x10 )
    FormHeapFree(v7);
  return a1;
}
