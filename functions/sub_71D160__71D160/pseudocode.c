_WORD *__cdecl sub_71D160(int a1, int a2, int a3, _WORD *a4, int a5, __int16 *a6, unsigned __int8 *a7)
{
  char v7; // dl
  char v8; // di
  unsigned int v9; // esi
  _BYTE *v10; // eax
  _WORD *result; // eax
  int v12; // edi
  int v14; // edx
  char v15; // [esp+11h] [ebp-22Bh]
  char v16; // [esp+12h] [ebp-22Ah]
  char v17; // [esp+13h] [ebp-229h]
  char v18; // [esp+18h] [ebp-224h]
  __int16 v19; // [esp+1Ch] [ebp-220h]
  __int16 v20; // [esp+20h] [ebp-21Ch]
  __int16 v21; // [esp+24h] [ebp-218h]
  __int16 v22; // [esp+28h] [ebp-214h]
  char v23; // [esp+2Ch] [ebp-210h]
  char v24; // [esp+30h] [ebp-20Ch]
  __int16 v25[256]; // [esp+38h] [ebp-204h]

  v20 = a6[6];
  v15 = *((_BYTE *)a6 + 0x16);
  v7 = *((_BYTE *)a6 + 0x17);
  v24 = *((_BYTE *)a6 + 0x12);
  v19 = a6[4];
  v16 = *((_BYTE *)a6 + 0x15);
  v18 = *((_BYTE *)a6 + 0x11);
  v21 = a6[2];
  v8 = *((_BYTE *)a6 + 0x13);
  v17 = *((_BYTE *)a6 + 0x14);
  v22 = *a6;
  v9 = 0;
  v23 = *((_BYTE *)a6 + 0x10);
  v10 = (_BYTE *)(*(_DWORD *)(a5 + 0x14) + 2);
  do
  {
    v25[v9] = v19 & ((unsigned __int8)(*v10 >> v15) << v24)
            | v20 & ((unsigned __int8)(v10[1] >> v7) << v8)
            | v21 & ((unsigned __int8)(v10[0xFFFFFFFF] >> v16) << v18)
            | v22 & ((unsigned __int8)(v10[0xFFFFFFFE] >> v17) << v23);
    v25[v9 + 1] = v20 & ((unsigned __int8)(v10[5] >> v7) << v8)
                | v19 & ((unsigned __int8)(v10[4] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[3] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[2] >> v17) << v23);
    v25[v9 + 2] = v20 & ((unsigned __int8)(v10[9] >> v7) << v8)
                | v19 & ((unsigned __int8)(v10[8] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[7] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[6] >> v17) << v23);
    v25[v9 + 3] = v20 & ((unsigned __int8)(v10[0xD] >> v7) << v8)
                | v19 & ((unsigned __int8)(v10[0xC] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[0xB] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[0xA] >> v17) << v23);
    v9 += 4;
    v10 += 0x10;
  }
  while ( v9 < 0x100 );
  result = a4;
  if ( a2 )
  {
    v12 = a2;
    do
    {
      if ( a1 )
      {
        v14 = a1;
        do
        {
          *result++ = v25[*a7++];
          --v14;
        }
        while ( v14 );
      }
      --v12;
    }
    while ( v12 );
  }
  return result;
}
