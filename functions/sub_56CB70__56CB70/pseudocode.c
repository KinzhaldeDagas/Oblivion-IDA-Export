char __stdcall sub_56CB70(int a1, __int16 a2, char a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // edx
  _WORD *v10; // edi
  double v11; // rt0
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  double v14; // rt1
  double v15; // st5
  double v16; // st7
  float *v17; // ecx
  double v18; // rt2
  double v19; // st5
  double v20; // st6
  double v21; // rtt
  double v22; // rt0
  double v23; // st5
  double v24; // st6
  double v25; // rt1
  double v26; // rt0
  double v27; // st5
  double v28; // st6
  double v29; // rt1
  char result; // al
  char v31; // [esp+13h] [ebp-Dh]
  int v32; // [esp+14h] [ebp-Ch]
  char v33; // [esp+18h] [ebp-8h]

  v6 = 0.0; /*0x56cb7e*/
  v7 = 1.0; /*0x56cb85*/
  v8 = dbl_A2FC80; /*0x56cb87*/
  v31 = 0; /*0x56cb9a*/
  v32 = 0; /*0x56cb9f*/
  v33 = 0; /*0x56cba3*/
  v9 = 0; /*0x56cba7*/
  v10 = (_WORD *)(a4 + 2 * a1); /*0x56cba9*/
  while ( 1 )
  {
    v12 = a3 ? *v10 : *(_WORD *)(a4 + 2 * (a1 + v9 + 2 * a1));
    v13 = a2 + v12; /*0x56cbce*/
    if ( a6 ) /*0x56cbd1*/
      v13 = *(_WORD *)(a6 + 2 * v13); /*0x56cbd6*/
    v14 = v8; /*0x56cbdd*/
    v15 = v6; /*0x56cbdd*/
    v16 = v14; /*0x56cbdd*/
    v17 = (float *)(a5 + 0xC * v13); /*0x56cbe6*/
    if ( v15 <= *v17 ) /*0x56cbf0*/
    {
      v18 = v15; /*0x56cbf9*/
      v19 = v7; /*0x56cbf9*/
      v20 = v18; /*0x56cbf9*/
      if ( v19 < *v17 ) /*0x56cc02*/
        BYTE1(v32) = 1; /*0x56cc04*/
      v21 = v19; /*0x56cc09*/
      v15 = v20; /*0x56cc09*/
      v7 = v21; /*0x56cc09*/
    }
    else
    {
      LOBYTE(v32) = 1; /*0x56cbf2*/
    }
    if ( v15 <= v17[1] ) /*0x56cc13*/
    {
      v22 = v15; /*0x56cc1c*/
      v23 = v7; /*0x56cc1c*/
      v24 = v22; /*0x56cc1c*/
      if ( v23 < v17[1] ) /*0x56cc26*/
        HIBYTE(v32) = 1; /*0x56cc28*/
      v25 = v23; /*0x56cc2d*/
      v15 = v24; /*0x56cc2d*/
      v7 = v25; /*0x56cc2d*/
    }
    else
    {
      BYTE2(v32) = 1; /*0x56cc15*/
    }
    if ( v17[2] > v16 ) /*0x56cc39*/
      v33 = 1; /*0x56cc3b*/
    if ( v15 < *v17 && v7 > *v17 && v15 < v17[1] ) /*0x56cc5e*/
    {
      v26 = v15; /*0x56cc60*/
      v27 = v7; /*0x56cc60*/
      v28 = v26; /*0x56cc60*/
      if ( v27 > v17[1] && v17[2] > v16 ) /*0x56cc76*/
        v31 = 1; /*0x56cc78*/
      v29 = v27; /*0x56cc7d*/
      v15 = v28; /*0x56cc7d*/
      v7 = v29; /*0x56cc7d*/
    }
    ++v9; /*0x56cc7f*/
    ++v10; /*0x56cc82*/
    if ( v9 >= 3 ) /*0x56cc88*/
      break; /*0x56cc88*/
    v11 = v15; /*0x56cbae*/
    v8 = v16; /*0x56cbae*/
    v6 = v11; /*0x56cbae*/
  }
  if ( (!(_BYTE)v32 || !BYTE1(v32)) && (!BYTE2(v32) || !HIBYTE(v32)) ) /*0x56ccb2*/
    return v31; /*0x56ccb2*/
  result = 1; /*0x56ccb9*/
  if ( !v33 ) /*0x56ccbb*/
    return v31; /*0x56ccbd*/
  return result; /*0x56cc9b*/
}
