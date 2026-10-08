// positive sp value has been detected, the output may be wrong!
void __usercall def_6B00A4(
        int *a1@<edi>,
        int *a2@<esi>,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st5
  double v14; // st6
  double v15; // st5
  double v16; // st6
  float v17; // [esp-Ch] [ebp-18h]
  float v18; // [esp-Ch] [ebp-18h]
  float v19; // [esp-Ch] [ebp-18h]
  float v20; // [esp-8h] [ebp-14h]
  float v21; // [esp-8h] [ebp-14h]
  float v22; // [esp-8h] [ebp-14h]
  float v23; // [esp-4h] [ebp-10h]
  float v24; // [esp-4h] [ebp-10h]
  float v25; // [esp-4h] [ebp-10h]
  float v26; // [esp-4h] [ebp-10h]
  float v27; // [esp-4h] [ebp-10h]
  float v28; // [esp+0h] [ebp-Ch]
  float v29; // [esp+4h] [ebp-8h]
  float v30; // [esp+8h] [ebp-4h]

  if ( a8 <= (double)a5 ) /*0x6b0105*/
  {
    v23 = a8; /*0x6b010f*/
    v10 = a5; /*0x6b0113*/
    v11 = a8; /*0x6b0113*/
  }
  else
  {
    v10 = a5; /*0x6b0107*/
    v11 = a8; /*0x6b0107*/
    v23 = a5; /*0x6b0109*/
  }
  if ( v10 <= v11 ) /*0x6b011c*/
    v17 = v11; /*0x6b0126*/
  else
    v17 = v10; /*0x6b011e*/
  if ( v10 < v11 ) /*0x6b0133*/
    v11 = v10; /*0x6b0135*/
  v20 = v11; /*0x6b013b*/
  v12 = dbl_A2FAA0; /*0x6b0155*/
  v28 = (v17 - v20) * v12 + v23; /*0x6b0157*/
  if ( a9 <= (double)a6 ) /*0x6b016a*/
  {
    v18 = a9; /*0x6b0174*/
    v13 = a6; /*0x6b0178*/
    v14 = a9; /*0x6b0178*/
  }
  else
  {
    v13 = a6; /*0x6b016c*/
    v14 = a9; /*0x6b016c*/
    v18 = a6; /*0x6b016e*/
  }
  if ( v13 <= v14 ) /*0x6b0181*/
    v24 = v14; /*0x6b018b*/
  else
    v24 = v13; /*0x6b0183*/
  if ( v13 < v14 ) /*0x6b0198*/
    v14 = v13; /*0x6b019a*/
  v21 = v14; /*0x6b01a0*/
  v29 = (v24 - v21) * v12 + v18; /*0x6b01b2*/
  if ( a10 <= (double)a7 ) /*0x6b01c5*/
  {
    v19 = a10; /*0x6b01cf*/
    v15 = a7; /*0x6b01d3*/
    v16 = a10; /*0x6b01d3*/
  }
  else
  {
    v15 = a7; /*0x6b01c7*/
    v16 = a10; /*0x6b01c7*/
    v19 = a7; /*0x6b01c9*/
  }
  if ( v15 <= v16 ) /*0x6b01dc*/
    v25 = v16; /*0x6b01e6*/
  else
    v25 = v15; /*0x6b01de*/
  if ( v15 < v16 ) /*0x6b01f3*/
    v16 = v15; /*0x6b01f5*/
  v22 = v16; /*0x6b01fd*/
  v30 = v12 * (v25 - v22) + v19; /*0x6b020f*/
  if ( a2 ) /*0x6b0213*/
  {
    sub_6B7360(a2, v28, v29, v30); /*0x6b0231*/
    sub_6B7280(a2, flt_A52A74); /*0x6b0242*/
    v26 = Rand5(flt_A57F50) + dbl_A2F928; /*0x6b025e*/
    sub_6B7310(a2, v26); /*0x6b0269*/
    sub_6B7190(a2, 0); /*0x6b0272*/
  }
  if ( a1 ) /*0x6b0279*/
  {
    sub_6B7360(a1, v28, v29, v30); /*0x6b0297*/
    sub_6B7280(a1, flt_A52A74); /*0x6b02a8*/
    v27 = Rand5(flt_A57F50) + dbl_A2F928; /*0x6b02c4*/
    sub_6B7310(a1, v27); /*0x6b02cf*/
    sub_6B7190(a1, 0); /*0x6b02d8*/
  }
  if ( a2 ) /*0x6b02df*/
  {
    sub_6B73E0(a2); /*0x6b02e3*/
    FormHeapFree((unsigned int)a2); /*0x6b02e9*/
  }
  if ( a1 ) /*0x6b02f3*/
  {
    sub_6B73E0(a1); /*0x6b02f7*/
    FormHeapFree((unsigned int)a1); /*0x6b02fd*/
  }
}
