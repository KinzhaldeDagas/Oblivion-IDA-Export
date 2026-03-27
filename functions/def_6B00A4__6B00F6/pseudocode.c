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

  if ( a8 <= (double)a5 )
  {
    v23 = a8;
    v10 = a5;
    v11 = a8;
  }
  else
  {
    v10 = a5;
    v11 = a8;
    v23 = a5;
  }
  if ( v10 <= v11 )
    v17 = v11;
  else
    v17 = v10;
  if ( v10 < v11 )
    v11 = v10;
  v20 = v11;
  v12 = dbl_A2FAA0;
  v28 = (v17 - v20) * v12 + v23;
  if ( a9 <= (double)a6 )
  {
    v18 = a9;
    v13 = a6;
    v14 = a9;
  }
  else
  {
    v13 = a6;
    v14 = a9;
    v18 = a6;
  }
  if ( v13 <= v14 )
    v24 = v14;
  else
    v24 = v13;
  if ( v13 < v14 )
    v14 = v13;
  v21 = v14;
  v29 = (v24 - v21) * v12 + v18;
  if ( a10 <= (double)a7 )
  {
    v19 = a10;
    v15 = a7;
    v16 = a10;
  }
  else
  {
    v15 = a7;
    v16 = a10;
    v19 = a7;
  }
  if ( v15 <= v16 )
    v25 = v16;
  else
    v25 = v15;
  if ( v15 < v16 )
    v16 = v15;
  v22 = v16;
  v30 = v12 * (v25 - v22) + v19;
  if ( a2 )
  {
    sub_6B7360(a2, v28, v29, v30);
    sub_6B7280(a2, flt_A52A74);
    v26 = Rand5(flt_A57F50) + dbl_A2F928;
    sub_6B7310(a2, v26);
    sub_6B7190(a2, 0);
  }
  if ( a1 )
  {
    sub_6B7360(a1, v28, v29, v30);
    sub_6B7280(a1, flt_A52A74);
    v27 = Rand5(flt_A57F50) + dbl_A2F928;
    sub_6B7310(a1, v27);
    sub_6B7190(a1, 0);
  }
  if ( a2 )
  {
    sub_6B73E0(a2);
    FormHeapFree((unsigned int)a2);
  }
  if ( a1 )
  {
    sub_6B73E0(a1);
    FormHeapFree((unsigned int)a1);
  }
}
