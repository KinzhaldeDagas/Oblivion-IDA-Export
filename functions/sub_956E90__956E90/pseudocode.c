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

  if ( a2 ) /*0x956e9c*/
  {
    v4 = *(float *)&SrcStr; /*0x956ea2*/
    v5 = *(this + 0xD); /*0x956ea8*/
    v6 = *(_DWORD *)(a2 + 0xB8); /*0x956eb3*/
    v7 = 0; /*0x956eb9*/
    v24 = *(float *)(a2 + 0x10) - *(float *)(a2 + 0xC); /*0x956ebd*/
    if ( v6 == v5 ) /*0x956ec1*/
      v24 = v24 * flt_AA3560; /*0x956ecd*/
    if ( v24 > (double)*(float *)&SrcStr ) /*0x956ee0*/
    {
      v7 = 0; /*0x956ee4*/
      v4 = v24; /*0x956ee6*/
    }
    v25 = *(float *)(a2 + 0x18) - *(float *)(a2 + 0x14); /*0x956ef5*/
    if ( v6 == v5 + 0x20 ) /*0x956ef9*/
      v25 = v25 * flt_AA3560; /*0x956f05*/
    if ( v25 > v4 ) /*0x956f14*/
    {
      v7 = 1; /*0x956f18*/
      v4 = v25; /*0x956f1d*/
    }
    v26 = *(float *)(a2 + 0x20) - *(float *)(a2 + 0x1C); /*0x956f2c*/
    if ( v6 == v5 + 0x40 ) /*0x956f30*/
      v26 = v26 * flt_AA3560; /*0x956f3c*/
    if ( v26 > v4 ) /*0x956f4b*/
    {
      v7 = 2; /*0x956f4f*/
      v4 = v26; /*0x956f54*/
    }
    v8 = (v7 + 1) % 3; /*0x956f67*/
    v9 = (v7 + 2) % 3; /*0x956f6e*/
    v11 = fConstant_1 / v4; /*0x956f7a*/
    *a3 = v7; /*0x956f80*/
    *(_DWORD *)a4 = 0; /*0x956f86*/
    v12 = &v24 + v8; /*0x956f88*/
    v15 = &v24 + v9; /*0x956f93*/
    if ( v13 | v14 ) /*0x956f90*/
    {
      v16 = v4 - *v15; /*0x956f99*/
      a3[1] = v9; /*0x956f9c*/
      *(float *)(a4 + 4) = v16 * v11 * (v16 * v11) * (v16 * v11) * flt_A45FF4 * flt_A43328; /*0x956fb3*/
      a3[2] = v8; /*0x956fb6*/
      v17 = v11; /*0x956fbb*/
      v18 = v4; /*0x956fbb*/
      v19 = v17; /*0x956fbb*/
      v20 = v18 - *v12; /*0x956fbd*/
    }
    else
    {
      v21 = v4 - *v12; /*0x956fe2*/
      a3[1] = v8; /*0x956fe4*/
      *(float *)(a4 + 4) = v21 * v11 * (v21 * v11) * (v21 * v11) * flt_A45FF4 * flt_A43328; /*0x956ffb*/
      a3[2] = v9; /*0x956ffe*/
      v22 = v11; /*0x957003*/
      v23 = v4; /*0x957003*/
      v19 = v22; /*0x957003*/
      v20 = v23 - *v15; /*0x957005*/
    }
    *(float *)(a4 + 8) = v19 * v20 * (v19 * v20) * (v19 * v20) * flt_A45FF4 * flt_A43328; /*0x956fd5*/
  }
  else
  {
    *a3 = 0; /*0x95700e*/
    a3[1] = 1; /*0x957010*/
    a3[2] = 2; /*0x957017*/
    *(_DWORD *)a4 = 0; /*0x957022*/
    *(_DWORD *)(a4 + 4) = 0; /*0x957024*/
    *(_DWORD *)(a4 + 8) = 0; /*0x957027*/
  }
}
