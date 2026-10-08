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

  v20 = a6[6]; /*0x71d198*/
  v15 = *((_BYTE *)a6 + 0x16); /*0x71d1a0*/
  v7 = *((_BYTE *)a6 + 0x17); /*0x71d1a8*/
  v24 = *((_BYTE *)a6 + 0x12); /*0x71d1ab*/
  v19 = a6[4]; /*0x71d1b3*/
  v16 = *((_BYTE *)a6 + 0x15); /*0x71d1bb*/
  v18 = *((_BYTE *)a6 + 0x11); /*0x71d1c3*/
  v21 = a6[2]; /*0x71d1cb*/
  v8 = *((_BYTE *)a6 + 0x13); /*0x71d1d3*/
  v17 = *((_BYTE *)a6 + 0x14); /*0x71d1d7*/
  v22 = *a6; /*0x71d1e2*/
  v9 = 0; /*0x71d1e6*/
  v23 = *((_BYTE *)a6 + 0x10); /*0x71d1e8*/
  v10 = (_BYTE *)(*(_DWORD *)(a5 + 0x14) + 2); /*0x71d1ec*/
  do /*0x71d433*/
  {
    v25[v9] = v19 & ((unsigned __int8)(*v10 >> v15) << v24) /*0x71d27f*/
            | v20 & ((unsigned __int8)(v10[1] >> v7) << v8)
            | v21 & ((unsigned __int8)(v10[0xFFFFFFFF] >> v16) << v18)
            | v22 & ((unsigned __int8)(v10[0xFFFFFFFE] >> v17) << v23);
    v25[v9 + 1] = v20 & ((unsigned __int8)(v10[5] >> v7) << v8) /*0x71d306*/
                | v19 & ((unsigned __int8)(v10[4] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[3] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[2] >> v17) << v23);
    v25[v9 + 2] = v20 & ((unsigned __int8)(v10[9] >> v7) << v8) /*0x71d397*/
                | v19 & ((unsigned __int8)(v10[8] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[7] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[6] >> v17) << v23);
    v25[v9 + 3] = v20 & ((unsigned __int8)(v10[0xD] >> v7) << v8) /*0x71d41e*/
                | v19 & ((unsigned __int8)(v10[0xC] >> v15) << v24)
                | v21 & ((unsigned __int8)(v10[0xB] >> v16) << v18)
                | v22 & ((unsigned __int8)(v10[0xA] >> v17) << v23);
    v9 += 4; /*0x71d423*/
    v10 += 0x10; /*0x71d42a*/
  }
  while ( v9 < 0x100 ); /*0x71d433*/
  result = a4; /*0x71d442*/
  if ( a2 ) /*0x71d446*/
  {
    v12 = a2; /*0x71d44f*/
    do /*0x71d479*/
    {
      if ( a1 ) /*0x71d45a*/
      {
        v14 = a1; /*0x71d45c*/
        do /*0x71d474*/
        {
          *result++ = v25[*a7++]; /*0x71d468*/
          --v14; /*0x71d471*/
        }
        while ( v14 ); /*0x71d474*/
      }
      --v12; /*0x71d476*/
    }
    while ( v12 ); /*0x71d479*/
  }
  return result; /*0x71d47b*/
}
