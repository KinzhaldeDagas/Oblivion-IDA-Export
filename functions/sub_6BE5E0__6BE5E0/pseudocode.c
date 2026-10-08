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

  v3 = 0; /*0x6be5ee*/
  v4 = a1 + 0x2C; /*0x6be5f0*/
  v11 = 0; /*0x6be5f7*/
  v12 = a1 + 0x2C; /*0x6be5fb*/
  v5 = (unsigned __int8 *)(a1 + 0x2C); /*0x6be5ff*/
  v14 = (_DWORD *)(a2 + 0x30); /*0x6be601*/
  v6 = (_DWORD *)(a1 + 0x20); /*0x6be605*/
  v7 = a2 - a1; /*0x6be608*/
  while ( 1 ) /*0x6be614*/
  {
    v8 = v6[0xFFFFFFFD]; /*0x6be614*/
    if ( v8 != *(_DWORD *)((char *)v6 + v7 - 0xC) /*0x6be633*/
      || *v6 != *(_DWORD *)((char *)v6 + v7)
      || *(_BYTE *)(v4 + v3) != *(_BYTE *)(v3 + a2 + 0x2C) )
    {
      return 0; /*0x6be69a*/
    }
    if ( v8 ) /*0x6be637*/
    {
      v9 = 0; /*0x6be642*/
      v13 = *(unsigned __int8 (__cdecl **)(int, int))(4 * *v6 + 0xB3D4A0); /*0x6be646*/
      while ( v13(v6[4] + v9 * *v5, *v14 + v9 * v5[v7]) ) /*0x6be671*/
      {
        if ( (unsigned int)++v9 >= v6[0xFFFFFFFD] ) /*0x6be679*/
        {
          v3 = v11; /*0x6be67b*/
          goto LABEL_11; /*0x6be67b*/
        }
      }
      return 0; /*0x6be671*/
    }
LABEL_11:
    ++v14; /*0x6be67f*/
    ++v3; /*0x6be684*/
    ++v6; /*0x6be687*/
    ++v5; /*0x6be68a*/
    v11 = v3; /*0x6be690*/
    if ( v3 >= 3 ) /*0x6be694*/
      return 1; /*0x6be6a3*/
    v4 = v12; /*0x6be610*/
  }
}
