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

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71cc81*/
  v23 = *((_BYTE *)a6 + 0x12); /*0x71cc88*/
  v24 = a6[4]; /*0x71cc90*/
  v20 = *((_BYTE *)a6 + 0x15); /*0x71cc98*/
  v8 = *((_BYTE *)a6 + 0x16); /*0x71cca0*/
  v22 = *((_BYTE *)a6 + 0x11); /*0x71cca3*/
  v26 = a6[2]; /*0x71ccab*/
  v19 = *((_BYTE *)a6 + 0x14); /*0x71ccb3*/
  v25 = *((_BYTE *)a6 + 0x10); /*0x71ccbb*/
  v21 = *a6; /*0x71ccc2*/
  v9 = 0; /*0x71cccf*/
  v10 = 0xFFu >> *((_BYTE *)a6 + 0x17); /*0x71ccd1*/
  v11 = *((_BYTE *)a6 + 0x13); /*0x71ccd3*/
  *(_DWORD *)v28 = (unsigned __int16)a6[6]; /*0x71ccdb*/
  v27 = v10; /*0x71ccdf*/
  v12 = (_BYTE *)(v7 + 1); /*0x71cce7*/
  while ( 1 ) /*0x71cd0a*/
  {
    v13 = *(_DWORD *)v28 & (v10 << v11); /*0x71cd0a*/
    v28[v9 + 2] = v13 /*0x71cd6c*/
                | v26 & ((unsigned __int8)(*v12 >> v20) << v22)
                | v21 & ((unsigned __int8)(v12[0xFFFFFFFF] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[1] >> v8) << v23);
    v28[v9 + 3] = v13 /*0x71cdda*/
                | v21 & ((unsigned __int8)(v12[3] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[5] >> v8) << v23)
                | v26 & ((unsigned __int8)(v12[4] >> v20) << v22);
    v9 += 4; /*0x71ce2f*/
    v28[v9] = v13 /*0x71ce4d*/
            | v21 & ((unsigned __int8)(v12[7] >> v19) << v25)
            | v24 & ((unsigned __int8)(v12[9] >> v8) << v23)
            | v26 & ((unsigned __int8)(v12[8] >> v20) << v22);
    v14 = v12[0xC]; /*0x71ce52*/
    v12 += 0x10; /*0x71ce60*/
    v28[v9 + 1] = v13 /*0x71cec7*/
                | v21 & ((unsigned __int8)(v12[0xFFFFFFFB] >> v19) << v25)
                | v24 & ((unsigned __int8)(v12[0xFFFFFFFD] >> v8) << v23)
                | v26 & ((unsigned __int8)(v14 >> v20) << v22);
    if ( v9 >= 0x100 ) /*0x71cecc*/
      break; /*0x71cecc*/
    v10 = v27; /*0x71ccf0*/
  }
  result = a4; /*0x71cedb*/
  if ( a2 ) /*0x71cedf*/
  {
    v16 = a2; /*0x71cee8*/
    do /*0x71cf19*/
    {
      if ( a1 ) /*0x71cef3*/
      {
        v18 = a1; /*0x71cef5*/
        do /*0x71cf14*/
        {
          *result++ = v28[*a7++ + 2]; /*0x71cf08*/
          --v18; /*0x71cf11*/
        }
        while ( v18 ); /*0x71cf14*/
      }
      --v16; /*0x71cf16*/
    }
    while ( v16 ); /*0x71cf19*/
  }
  return result; /*0x71cf1b*/
}
