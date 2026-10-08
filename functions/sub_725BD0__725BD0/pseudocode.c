void __cdecl sub_725BD0(int a1, float a2, int a3, int a4)
{
  double v4; // st7
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  unsigned int v8; // edx
  int v9; // ecx
  double v10; // st5
  float *v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  double v15; // st6
  float v16; // [esp+0h] [ebp-Ch]
  float v17; // [esp+0h] [ebp-Ch]
  float v18; // [esp+0h] [ebp-Ch]
  float v19; // [esp+0h] [ebp-Ch]
  float v20; // [esp+0h] [ebp-Ch]
  float v21; // [esp+4h] [ebp-8h]
  float v22; // [esp+4h] [ebp-8h]
  float v23; // [esp+4h] [ebp-8h]
  float v24; // [esp+4h] [ebp-8h]
  float v25; // [esp+4h] [ebp-8h]
  float v26; // [esp+8h] [ebp-4h]
  float v27; // [esp+8h] [ebp-4h]
  float v28; // [esp+8h] [ebp-4h]
  float v29; // [esp+8h] [ebp-4h]
  float v30; // [esp+8h] [ebp-4h]

  v4 = a2; /*0x725bd0*/
  v5 = 0; /*0x725be3*/
  if ( a4 >= 4 ) /*0x725be8*/
  {
    v6 = a1 + 0x14; /*0x725bf4*/
    v7 = a3 - a1; /*0x725bf9*/
    v8 = ((unsigned int)(a4 - 4) >> 2) + 1; /*0x725c01*/
    v9 = a3 + 0x20; /*0x725c04*/
    v5 = 4 * v8; /*0x725c07*/
    do /*0x725cfd*/
    {
      v6 += 0x30; /*0x725c11*/
      v10 = *(float *)(v9 - 0x20) * v4; /*0x725c14*/
      v9 += 0x30; /*0x725c16*/
      --v8; /*0x725c19*/
      v16 = v10; /*0x725c1c*/
      v21 = *(float *)(v9 - 0x4C) * v4; /*0x725c25*/
      v26 = *(float *)(v9 - 0x48) * v4; /*0x725c2e*/
      *(float *)(v6 - 0x44) = *(float *)(v6 - 0x44) + v16; /*0x725c39*/
      *(float *)(v6 - 0x40) = *(float *)(v6 - 0x40) + v21; /*0x725c43*/
      *(float *)(v6 - 0x3C) = *(float *)(v6 - 0x3C) + v26; /*0x725c4d*/
      v17 = *(float *)(v9 - 0x44) * v4; /*0x725c55*/
      v22 = *(float *)(v6 + v7 - 0x34) * v4; /*0x725c5f*/
      v27 = *(float *)(v6 + v7 - 0x30) * v4; /*0x725c69*/
      *(float *)(v6 - 0x38) = *(float *)(v6 - 0x38) + v17; /*0x725c74*/
      *(float *)(v6 - 0x34) = v22 + *(float *)(v6 - 0x34); /*0x725c7e*/
      *(float *)(v6 - 0x30) = *(float *)(v6 - 0x30) + v27; /*0x725c88*/
      v18 = *(float *)(v9 - 0x38) * v4; /*0x725c90*/
      v23 = *(float *)(v9 - 0x34) * v4; /*0x725c99*/
      v28 = *(float *)(v9 - 0x30) * v4; /*0x725ca2*/
      *(float *)(v6 - 0x2C) = v18 + *(float *)(v6 - 0x2C); /*0x725cad*/
      *(float *)(v6 - 0x28) = *(float *)(v6 - 0x28) + v23; /*0x725cb7*/
      *(float *)(v6 - 0x24) = *(float *)(v6 - 0x24) + v28; /*0x725cc1*/
      v19 = *(float *)(v9 - 0x2C) * v4; /*0x725cc9*/
      v24 = *(float *)(v9 - 0x28) * v4; /*0x725cd2*/
      v29 = *(float *)(v9 - 0x24) * v4; /*0x725cdb*/
      *(float *)(v6 - 0x20) = *(float *)(v6 - 0x20) + v19; /*0x725ce6*/
      *(float *)(v6 - 0x1C) = *(float *)(v6 - 0x1C) + v24; /*0x725cf0*/
      *(float *)(v6 - 0x18) = v29 + *(float *)(v6 - 0x18); /*0x725cfa*/
    }
    while ( v8 ); /*0x725cfd*/
  }
  if ( v5 < a4 ) /*0x725d07*/
  {
    v11 = (float *)(0xC * v5 + a3); /*0x725d16*/
    v12 = a3 - a1; /*0x725d19*/
    v13 = 0xC * v5 + a1 + 8; /*0x725d1b*/
    v14 = a4 - v5; /*0x725d1f*/
    do /*0x725d64*/
    {
      v15 = *v11; /*0x725d21*/
      v11 += 3; /*0x725d23*/
      v13 += 0xC; /*0x725d28*/
      --v14; /*0x725d2b*/
      v20 = v15 * v4; /*0x725d2e*/
      v25 = *(float *)(v13 + v12 - 0x10) * v4; /*0x725d38*/
      v30 = *(float *)(v13 + v12 - 0xC) * v4; /*0x725d42*/
      *(float *)(v13 - 0x14) = v20 + *(float *)(v13 - 0x14); /*0x725d4d*/
      *(float *)(v13 - 0x10) = *(float *)(v13 - 0x10) + v25; /*0x725d57*/
      *(float *)(v13 - 0xC) = *(float *)(v13 - 0xC) + v30; /*0x725d61*/
    }
    while ( v14 ); /*0x725d64*/
  }
}
