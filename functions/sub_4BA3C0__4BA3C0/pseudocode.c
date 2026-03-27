volatile LONG **__thiscall sub_4BA3C0(float *this, volatile LONG **a2, char a3)
{
  float *v4; // eax
  double v5; // st6
  float *v6; // ecx
  double v7; // st5
  double v8; // st7
  double v9; // st4
  double v10; // st7
  double v11; // rt0
  double v12; // st5
  float v13; // edx
  float v14; // eax
  float *v15; // edi
  float *v16; // ebp
  float *v17; // eax
  float *v18; // esi
  UInt16 *v19; // ebx
  NiTriShapeData *v20; // eax
  volatile LONG *v21; // eax
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+14h] [ebp-20h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+18h] [ebp-1Ch]
  float v29; // [esp+18h] [ebp-1Ch]
  float v30; // [esp+1Ch] [ebp-18h]
  float v31; // [esp+1Ch] [ebp-18h]
  int v32; // [esp+24h] [ebp-10h]

  v4 = (float *)FormHeapAlloc(0x30u);
  v5 = *(this + 0x1F);
  v6 = v4;
  v32 = (int)v4;
  if ( v5 <= 0.0 )
    v5 = flt_A451D0;
  v23 = dbl_A2FAA0 * v5;
  v7 = v23;
  v24 = -v23;
  v8 = v24;
  *v4 = v24;
  v4[1] = 0.0;
  v25 = v7;
  v4[2] = 0.0;
  v4[9] = v25;
  v9 = v8;
  v10 = 0.0;
  v4[0xA] = 0.0;
  v26 = v9;
  v4[0xB] = 0.0;
  v4[3] = v26;
  if ( a3 )
  {
    v11 = v7;
    v28 = 0.0;
    v12 = v5;
    v5 = 0.0;
    v30 = v12;
    v10 = v12;
    v27 = v11;
  }
  else
  {
    v28 = v5;
    v30 = 0.0;
    v27 = v7;
  }
  v13 = v28;
  v29 = v5;
  v14 = v30;
  v6[4] = v13;
  v31 = v10;
  v6[6] = v27;
  v6[5] = v14;
  v6[7] = v29;
  v6[8] = v31;
  v15 = (float *)FormHeapAlloc(0x30u);
  *v15 = 0.0;
  v15[1] = 1.0;
  v15[2] = 0.0;
  v15[3] = 0.0;
  v15[4] = 1.0;
  v15[5] = 0.0;
  v15[6] = 0.0;
  v15[7] = 1.0;
  v15[8] = 0.0;
  v15[9] = 0.0;
  v15[0xA] = 1.0;
  v15[0xB] = 0.0;
  v16 = (float *)FormHeapAlloc(0x20u);
  *v16 = 1.0;
  v16[1] = 1.0;
  v16[2] = 1.0;
  v16[3] = 0.0;
  v16[4] = 0.0;
  v16[5] = 0.0;
  v16[6] = 0.0;
  v16[7] = 1.0;
  v17 = (float *)FormHeapAlloc(0x40u);
  v18 = v17;
  if ( v17 )
    sub_401080(v17, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v18 = 0;
  *v18 = 1.0;
  v18[1] = 1.0;
  v18[2] = 1.0;
  v18[3] = 0.0;
  v18[4] = 1.0;
  v18[5] = 1.0;
  v18[6] = 1.0;
  v18[8] = 1.0;
  v18[7] = 0.0;
  v18[9] = 1.0;
  v18[0xA] = 1.0;
  v18[0xC] = 1.0;
  v18[0xB] = 0.0;
  v18[0xD] = 1.0;
  v18[0xE] = 1.0;
  v18[0xF] = 0.0;
  v19 = (UInt16 *)FormHeapAlloc(0xCu);
  *v19 = 0;
  v19[1] = 2;
  v19[2] = 1;
  v19[3] = 0;
  v19[4] = 3;
  v19[5] = 2;
  v20 = (NiTriShapeData *)FormHeapAlloc(0x58u);
  if ( v20 )
    v21 = (volatile LONG *)sub_71FB40(v20, 4, v32, (int)v15, (int)v18, (int)v16, 1, 0, 2, v19);
  else
    v21 = 0;
  *a2 = v21;
  if ( v21 )
    InterlockedIncrement(v21 + 1);
  return a2;
}
