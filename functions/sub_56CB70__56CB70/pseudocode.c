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

  v6 = 0.0;
  v7 = 1.0;
  v8 = dbl_A2FC80;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v9 = 0;
  v10 = (_WORD *)(a4 + 2 * a1);
  while ( 1 )
  {
    v12 = a3 ? *v10 : *(_WORD *)(a4 + 2 * (a1 + v9 + 2 * a1));
    v13 = a2 + v12;
    if ( a6 )
      v13 = *(_WORD *)(a6 + 2 * v13);
    v14 = v8;
    v15 = v6;
    v16 = v14;
    v17 = (float *)(a5 + 0xC * v13);
    if ( v15 <= *v17 )
    {
      v18 = v15;
      v19 = v7;
      v20 = v18;
      if ( v19 < *v17 )
        BYTE1(v32) = 1;
      v21 = v19;
      v15 = v20;
      v7 = v21;
    }
    else
    {
      LOBYTE(v32) = 1;
    }
    if ( v15 <= v17[1] )
    {
      v22 = v15;
      v23 = v7;
      v24 = v22;
      if ( v23 < v17[1] )
        HIBYTE(v32) = 1;
      v25 = v23;
      v15 = v24;
      v7 = v25;
    }
    else
    {
      BYTE2(v32) = 1;
    }
    if ( v17[2] > v16 )
      v33 = 1;
    if ( v15 < *v17 && v7 > *v17 && v15 < v17[1] )
    {
      v26 = v15;
      v27 = v7;
      v28 = v26;
      if ( v27 > v17[1] && v17[2] > v16 )
        v31 = 1;
      v29 = v27;
      v15 = v28;
      v7 = v29;
    }
    ++v9;
    ++v10;
    if ( v9 >= 3 )
      break;
    v11 = v15;
    v8 = v16;
    v6 = v11;
  }
  if ( (!(_BYTE)v32 || !BYTE1(v32)) && (!BYTE2(v32) || !HIBYTE(v32)) )
    return v31;
  result = 1;
  if ( !v33 )
    return v31;
  return result;
}
