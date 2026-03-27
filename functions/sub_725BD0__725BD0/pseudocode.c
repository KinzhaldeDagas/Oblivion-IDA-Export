void __cdecl sub_725BD0(int a1, float a2, int a3, unsigned int a4)
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

  v4 = a2;
  v5 = 0;
  if ( (int)a4 >= 4 )
  {
    v6 = a1 + 0x14;
    v7 = a3 - a1;
    v8 = ((a4 - 4) >> 2) + 1;
    v9 = a3 + 0x20;
    v5 = 4 * v8;
    do
    {
      v6 += 0x30;
      v10 = *(float *)(v9 - 0x20) * v4;
      v9 += 0x30;
      --v8;
      v16 = v10;
      v21 = *(float *)(v9 - 0x4C) * v4;
      v26 = *(float *)(v9 - 0x48) * v4;
      *(float *)(v6 - 0x44) = *(float *)(v6 - 0x44) + v16;
      *(float *)(v6 - 0x40) = *(float *)(v6 - 0x40) + v21;
      *(float *)(v6 - 0x3C) = *(float *)(v6 - 0x3C) + v26;
      v17 = *(float *)(v9 - 0x44) * v4;
      v22 = *(float *)(v6 + v7 - 0x34) * v4;
      v27 = *(float *)(v6 + v7 - 0x30) * v4;
      *(float *)(v6 - 0x38) = *(float *)(v6 - 0x38) + v17;
      *(float *)(v6 - 0x34) = v22 + *(float *)(v6 - 0x34);
      *(float *)(v6 - 0x30) = *(float *)(v6 - 0x30) + v27;
      v18 = *(float *)(v9 - 0x38) * v4;
      v23 = *(float *)(v9 - 0x34) * v4;
      v28 = *(float *)(v9 - 0x30) * v4;
      *(float *)(v6 - 0x2C) = v18 + *(float *)(v6 - 0x2C);
      *(float *)(v6 - 0x28) = *(float *)(v6 - 0x28) + v23;
      *(float *)(v6 - 0x24) = *(float *)(v6 - 0x24) + v28;
      v19 = *(float *)(v9 - 0x2C) * v4;
      v24 = *(float *)(v9 - 0x28) * v4;
      v29 = *(float *)(v9 - 0x24) * v4;
      *(float *)(v6 - 0x20) = *(float *)(v6 - 0x20) + v19;
      *(float *)(v6 - 0x1C) = *(float *)(v6 - 0x1C) + v24;
      *(float *)(v6 - 0x18) = v29 + *(float *)(v6 - 0x18);
    }
    while ( v8 );
  }
  if ( v5 < a4 )
  {
    v11 = (float *)(0xC * v5 + a3);
    v12 = a3 - a1;
    v13 = 0xC * v5 + a1 + 8;
    v14 = a4 - v5;
    do
    {
      v15 = *v11;
      v11 += 3;
      v13 += 0xC;
      --v14;
      v20 = v15 * v4;
      v25 = *(float *)(v13 + v12 - 0x10) * v4;
      v30 = *(float *)(v13 + v12 - 0xC) * v4;
      *(float *)(v13 - 0x14) = v20 + *(float *)(v13 - 0x14);
      *(float *)(v13 - 0x10) = *(float *)(v13 - 0x10) + v25;
      *(float *)(v13 - 0xC) = *(float *)(v13 - 0xC) + v30;
    }
    while ( v14 );
  }
}
