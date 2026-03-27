void __thiscall sub_956E90(_DWORD *this, int a2, signed int *a3, int a4)
{
  double v4; // st7
  int v5; // ecx
  int v6; // edi
  signed int v7; // esi
  int v8; // edi
  int v9; // edx
  double v11; // st6
  float *v12; // ebx
  unsigned __int8 v13; // c0
  unsigned __int8 v14; // c2
  float *v15; // ebp
  double v16; // st5
  double v17; // rt0
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // rt1
  double v23; // st6
  float v24; // [esp+4h] [ebp-Ch] BYREF
  float v25; // [esp+8h] [ebp-8h]
  float v26; // [esp+Ch] [ebp-4h]

  if ( a2 )
  {
    v4 = *(float *)&SrcStr;
    v5 = *(this + 0xD);
    v6 = *(_DWORD *)(a2 + 0xB8);
    v7 = 0;
    v24 = *(float *)(a2 + 0x10) - *(float *)(a2 + 0xC);
    if ( v6 == v5 )
      v24 = v24 * flt_AA3560;
    if ( v24 > (double)*(float *)&SrcStr )
    {
      v7 = 0;
      v4 = v24;
    }
    v25 = *(float *)(a2 + 0x18) - *(float *)(a2 + 0x14);
    if ( v6 == v5 + 0x20 )
      v25 = v25 * flt_AA3560;
    if ( v25 > v4 )
    {
      v7 = 1;
      v4 = v25;
    }
    v26 = *(float *)(a2 + 0x20) - *(float *)(a2 + 0x1C);
    if ( v6 == v5 + 0x40 )
      v26 = v26 * flt_AA3560;
    if ( v26 > v4 )
    {
      v7 = 2;
      v4 = v26;
    }
    v8 = (v7 + 1) % 3;
    v9 = (v7 + 2) % 3;
    v11 = fConstant_1 / v4;
    *a3 = v7;
    *(_DWORD *)a4 = 0;
    v12 = &v24 + v8;
    v15 = &v24 + v9;
    if ( v13 | v14 )
    {
      v16 = v4 - *v15;
      a3[1] = v9;
      *(float *)(a4 + 4) = v16 * v11 * (v16 * v11) * (v16 * v11) * flt_A45FF4 * flt_A43328;
      a3[2] = v8;
      v17 = v11;
      v18 = v4;
      v19 = v17;
      v20 = v18 - *v12;
    }
    else
    {
      v21 = v4 - *v12;
      a3[1] = v8;
      *(float *)(a4 + 4) = v21 * v11 * (v21 * v11) * (v21 * v11) * flt_A45FF4 * flt_A43328;
      a3[2] = v9;
      v22 = v11;
      v23 = v4;
      v19 = v22;
      v20 = v23 - *v15;
    }
    *(float *)(a4 + 8) = v19 * v20 * (v19 * v20) * (v19 * v20) * flt_A45FF4 * flt_A43328;
  }
  else
  {
    *a3 = 0;
    a3[1] = 1;
    a3[2] = 2;
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 8) = 0;
  }
}
