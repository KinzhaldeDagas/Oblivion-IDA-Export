void __cdecl sub_6BC600(int a1, int a2)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  float *v5; // eax
  float v6; // [esp+0h] [ebp-6Ch]
  float v7; // [esp+4h] [ebp-68h]
  float v8; // [esp+8h] [ebp-64h]
  float v9; // [esp+Ch] [ebp-60h]
  float v10; // [esp+10h] [ebp-5Ch]
  float v11; // [esp+14h] [ebp-58h]
  float v12; // [esp+18h] [ebp-54h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15; // [esp+24h] [ebp-48h]
  float v16; // [esp+28h] [ebp-44h]
  float v17; // [esp+2Ch] [ebp-40h]
  float v18; // [esp+30h] [ebp-3Ch]
  float v19; // [esp+34h] [ebp-38h]
  float v20; // [esp+38h] [ebp-34h]
  float v21; // [esp+3Ch] [ebp-30h]
  float v22; // [esp+40h] [ebp-2Ch]
  float v23; // [esp+44h] [ebp-28h]
  float v24; // [esp+48h] [ebp-24h]
  float v25; // [esp+4Ch] [ebp-20h]
  float v26; // [esp+50h] [ebp-1Ch]
  float v27; // [esp+54h] [ebp-18h]
  float v28; // [esp+58h] [ebp-14h]
  float v29; // [esp+5Ch] [ebp-10h]
  float v30; // [esp+60h] [ebp-Ch]
  float v31; // [esp+64h] [ebp-8h]
  float v32; // [esp+68h] [ebp-4h]

  v2 = a2 - 1; /*0x6bc607*/
  if ( a2 != 1 ) /*0x6bc60a*/
  {
    v3 = dbl_A3D0C0; /*0x6bc614*/
    v4 = dbl_A30E48; /*0x6bc61a*/
    v5 = (float *)(a1 + 0x4C); /*0x6bc620*/
    do /*0x6bc769*/
    {
      v6 = v5[0xFFFFFFF4] * v3; /*0x6bc628*/
      v7 = v5[0xFFFFFFF5] * v3; /*0x6bc630*/
      v8 = v5[0xFFFFFFF6] * v3; /*0x6bc639*/
      v15 = v5[1] + v6; /*0x6bc643*/
      v16 = v5[2] + v7; /*0x6bc64e*/
      v17 = v5[3] + v8; /*0x6bc659*/
      v9 = v5[0xFFFFFFFE] - v5[0xFFFFFFEE]; /*0x6bc663*/
      v10 = v5[0xFFFFFFFF] - v5[0xFFFFFFEF]; /*0x6bc66d*/
      v11 = *v5 - v5[0xFFFFFFF0]; /*0x6bc676*/
      v12 = v9 * v4; /*0x6bc680*/
      v13 = v10 * v4; /*0x6bc68a*/
      v14 = v11 * v4; /*0x6bc694*/
      v18 = v12 - v15; /*0x6bc6a0*/
      v5[0xFFFFFFF7] = v18; /*0x6bc6ac*/
      v19 = v13 - v16; /*0x6bc6b3*/
      v5[0xFFFFFFF8] = v19; /*0x6bc6bf*/
      v20 = v14 - v17; /*0x6bc6c6*/
      v5[0xFFFFFFF9] = v20; /*0x6bc6ce*/
      v21 = v5[0xFFFFFFFE] - v5[0xFFFFFFEE]; /*0x6bc6d7*/
      v22 = v5[0xFFFFFFFF] - v5[0xFFFFFFEF]; /*0x6bc6e1*/
      v23 = *v5 - v5[0xFFFFFFF0]; /*0x6bc6ea*/
      v27 = v21 * v3; /*0x6bc6f4*/
      v28 = v22 * v3; /*0x6bc6fe*/
      v29 = v23 * v3; /*0x6bc708*/
      v24 = v5[1] + v5[0xFFFFFFF4]; /*0x6bc712*/
      v25 = v5[2] + v5[0xFFFFFFF5]; /*0x6bc71c*/
      v26 = v5[3] + v5[0xFFFFFFF6]; /*0x6bc726*/
      v30 = v24 - v27; /*0x6bc732*/
      v5[0xFFFFFFFA] = v30; /*0x6bc742*/
      v5 += 0x10; /*0x6bc745*/
      --v2; /*0x6bc748*/
      v31 = v25 - v28; /*0x6bc74b*/
      v5[0xFFFFFFEB] = v31; /*0x6bc757*/
      v32 = v26 - v29; /*0x6bc75e*/
      v5[0xFFFFFFEC] = v32; /*0x6bc766*/
    }
    while ( v2 ); /*0x6bc769*/
  }
}
