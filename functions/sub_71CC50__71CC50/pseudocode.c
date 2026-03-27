_WORD *__cdecl sub_71CC50(int a1, int a2, int a3, _WORD *a4, int a5, __int16 *a6, unsigned __int8 *a7)
{
  int v7; // ebp
  char v8; // dl
  unsigned int v9; // edi
  unsigned int v10; // esi
  char v11; // cl
  _BYTE *v12; // eax
  int v13; // esi
  unsigned __int8 v14; // bl
  _WORD *result; // eax
  int v16; // edi
  int v18; // edx
  char v19; // [esp+12h] [ebp-232h]
  char v20; // [esp+13h] [ebp-231h]
  __int16 v21; // [esp+18h] [ebp-22Ch]
  char v22; // [esp+1Ch] [ebp-228h]
  char v23; // [esp+20h] [ebp-224h]
  __int16 v24; // [esp+24h] [ebp-220h]
  char v25; // [esp+28h] [ebp-21Ch]
  __int16 v26; // [esp+2Ch] [ebp-218h]
  unsigned int v27; // [esp+30h] [ebp-214h]
  _WORD v28[258]; // [esp+3Ch] [ebp-208h]

  v7 = *(_DWORD *)(a5 + 0x14);
  v23 = *((_BYTE *)a6 + 0x12);
  v24 = a6[4];
  v20 = *((_BYTE *)a6 + 0x15);
  v8 = *((_BYTE *)a6 + 0x16);
  v22 = *((_BYTE *)a6 + 0x11);
  v26 = a6[2];
  v19 = *((_BYTE *)a6 + 0x14);
  v25 = *((_BYTE *)a6 + 0x10);
  v21 = *a6;
  v9 = 0;
  v10 = 0xFFu >> *((_BYTE *)a6 + 0x17);
  v11 = *((_BYTE *)a6 + 0x13);
  *(_DWORD *)v28 = (unsigned __int16)a6[6];
  v27 = v10;
  v12 = (_BYTE *)(v7 + 1);
  while ( 1 )
  {
    v13 = *(_DWORD *)v28 & (v10 << v11);
    v28[v9 + 2] = v13
                | v26 & ((unsigned __int8)(*v12 >> v20) << v22)
                | v21 & ((unsigned __int8)(v12[0xFFFFFFFF] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[1] >> v8) << v23);
    v28[v9 + 3] = v13
                | v21 & ((unsigned __int8)(v12[3] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[5] >> v8) << v23)
                | v26 & ((unsigned __int8)(v12[4] >> v20) << v22);
    v9 += 4;
    v28[v9] = v13
            | v21 & ((unsigned __int8)(v12[7] >> v19) << v25)
            | v24 & ((unsigned __int8)(v12[9] >> v8) << v23)
            | v26 & ((unsigned __int8)(v12[8] >> v20) << v22);
    v14 = v12[0xC];
    v12 += 0x10;
    v28[v9 + 1] = v13
                | v21 & ((unsigned __int8)(v12[0xFFFFFFFB] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[0xFFFFFFFD] >> v8) << v23)
                | v26 & ((unsigned __int8)(v14 >> v20) << v22);
    if ( v9 >= 0x100 )
      break;
    v10 = v27;
  }
  result = a4;
  if ( a2 )
  {
    v16 = a2;
    do
    {
      if ( a1 )
      {
        v18 = a1;
        do
        {
          *result++ = v28[*a7++ + 2];
          --v18;
        }
        while ( v18 );
      }
      --v16;
    }
    while ( v16 );
  }
  return result;
}
