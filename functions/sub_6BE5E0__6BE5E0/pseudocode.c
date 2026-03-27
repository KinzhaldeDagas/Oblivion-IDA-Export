char __cdecl sub_6BE5E0(int a1, int a2)
{
  unsigned int v3; // eax
  int v4; // esi
  unsigned __int8 *v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // esi
  unsigned int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  unsigned __int8 (__cdecl *v13)(int, int); // [esp+18h] [ebp-4h]
  _DWORD *v14; // [esp+20h] [ebp+4h]

  v3 = 0;
  v4 = a1 + 0x2C;
  v11 = 0;
  v12 = a1 + 0x2C;
  v5 = (unsigned __int8 *)(a1 + 0x2C);
  v14 = (_DWORD *)(a2 + 0x30);
  v6 = (_DWORD *)(a1 + 0x20);
  v7 = a2 - a1;
  while ( 1 )
  {
    v8 = v6[0xFFFFFFFD];
    if ( v8 != *(_DWORD *)((char *)v6 + v7 - 0xC)
      || *v6 != *(_DWORD *)((char *)v6 + v7)
      || *(_BYTE *)(v4 + v3) != *(_BYTE *)(v3 + a2 + 0x2C) )
    {
      return 0;
    }
    if ( v8 )
    {
      v9 = 0;
      v13 = *(unsigned __int8 (__cdecl **)(int, int))(4 * *v6 + 0xB3D4A0);
      while ( v13(v6[4] + v9 * *v5, *v14 + v9 * v5[v7]) )
      {
        if ( (unsigned int)++v9 >= v6[0xFFFFFFFD] )
        {
          v3 = v11;
          goto LABEL_11;
        }
      }
      return 0;
    }
LABEL_11:
    ++v14;
    ++v3;
    ++v6;
    ++v5;
    v11 = v3;
    if ( v3 >= 3 )
      return 1;
    v4 = v12;
  }
}
