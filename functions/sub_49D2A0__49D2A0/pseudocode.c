NiTriShapeData *__stdcall sub_49D2A0(float a1, float a2, int a3, int a4, char a5, float a6)
{
  float *v6; // eax
  unsigned int v7; // edi
  bool v8; // zf
  double v9; // st7
  double v10; // rt0
  double v11; // st5
  double v12; // st3
  float *v13; // ebp
  UInt16 *v15; // ebx
  float *v16; // eax
  float *v17; // eax
  float *v18; // esi
  double v19; // st7
  double v20; // st7
  NiTriShapeData *v21; // eax
  NiTriShapeData *v22; // esi
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+1Ch] [ebp-18h]
  float v25; // [esp+38h] [ebp+4h]
  float v26; // [esp+38h] [ebp+4h]
  float v27; // [esp+38h] [ebp+4h]
  float v28; // [esp+38h] [ebp+4h]
  unsigned int v29; // [esp+38h] [ebp+4h]
  int v30; // [esp+48h] [ebp+14h]
  float v31; // [esp+4Ch] [ebp+18h]
  float v32; // [esp+4Ch] [ebp+18h]
  float v33; // [esp+4Ch] [ebp+18h]
  float v34; // [esp+4Ch] [ebp+18h]
  float v35; // [esp+4Ch] [ebp+18h]

  v6 = (float *)FormHeapAlloc(0x30u);
  v7 = (unsigned int)v6;
  if ( !v6 )
    return 0;
  v8 = (dword_B35260 & 1) == 0;
  v9 = a1;
  v10 = dbl_A2FAA0;
  v25 = a1 * v10;
  v11 = v25;
  *v6 = v25;
  v26 = a2 * v10;
  v12 = v26;
  v6[1] = v26;
  v6[2] = 0.0;
  v27 = -v9 * v10;
  v6[3] = v27;
  v24 = v12;
  v6[4] = v24;
  v6[5] = 0.0;
  v6[6] = v27;
  v28 = v10 * -a2;
  v6[7] = v28;
  v6[8] = 0.0;
  v23 = v11;
  v6[9] = v23;
  v6[0xA] = v28;
  v6[0xB] = 0.0;
  if ( v8 )
  {
    dword_B35260 |= 1u;
    flt_B35254 = 0.0;
    flt_B35258 = 0.0;
    flt_B3525C = 1.0;
  }
  v13 = (float *)FormHeapAlloc(0x20u);
  if ( !v13 )
  {
    FormHeapFree(v7);
    return 0;
  }
  v15 = (UInt16 *)FormHeapAlloc(0xCu);
  if ( !v15 )
  {
    FormHeapFree(v7);
    FormHeapFree((unsigned int)v13);
    return 0;
  }
  *v15 = 0;
  v15[1] = 1;
  v15[2] = 2;
  v15[3] = 0;
  v15[4] = 2;
  v15[5] = 3;
  v29 = 0;
  if ( a5 )
  {
    v16 = (float *)FormHeapAlloc(0x30u);
    v29 = (unsigned int)v16;
    if ( v16 )
    {
      *v16 = flt_B35254;
      v16[1] = flt_B35258;
      v16[2] = flt_B3525C;
      v16[3] = flt_B35254;
      v16[4] = flt_B35258;
      v16[5] = flt_B3525C;
      v16[6] = flt_B35254;
      v16[7] = flt_B35258;
      v16[8] = flt_B3525C;
      v16[9] = flt_B35254;
      v16[0xA] = flt_B35258;
      v16[0xB] = flt_B3525C;
    }
  }
  v30 = 0;
  if ( !LOBYTE(a6) )
    goto LABEL_24;
  v17 = (float *)FormHeapAlloc(0x40u);
  v18 = v17;
  if ( v17 )
    sub_401080(v17, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v18 = 0;
  v30 = (int)v18;
  if ( v18 )
  {
    if ( (dword_B35260 & 2) == 0 )
    {
      dword_B35260 |= 2u;
      sub_404850(&flt_B3524C, (int)"fAlpha:Water", flt_A3D65C);
      atexit(sub_A1A630);
    }
    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B3524C) <= 1.0 )
    {
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B3524C) < 0.0 )
        flt_B3524C = 0.0;
    }
    else
    {
      flt_B3524C = 1.0;
    }
    v31 = sub_404E30(&flt_B3524C);
    *v18 = 1.0;
    v18[1] = 1.0;
    v18[2] = 1.0;
    v18[3] = v31;
    v32 = sub_404E30(&flt_B3524C);
    v18[4] = 1.0;
    v18[5] = 1.0;
    v18[6] = 1.0;
    v18[7] = v32;
    v33 = sub_404E30(&flt_B3524C);
    v18[8] = 1.0;
    v18[9] = 1.0;
    v18[0xA] = 1.0;
    v18[0xB] = v33;
    v34 = sub_404E30(&flt_B3524C);
    v19 = 1.0;
    v18[0xC] = 1.0;
    v18[0xD] = 1.0;
    v18[0xE] = 1.0;
    v18[0xF] = v34;
  }
  else
  {
LABEL_24:
    v19 = 1.0;
  }
  v35 = v19;
  if ( a4 != 1 )
  {
    v20 = (double)a4;
    if ( a4 < 0 )
      v20 = v20 + flt_A2FC78;
    v35 = v20;
  }
  *v13 = v35;
  v13[1] = v35;
  v13[2] = 0.0;
  v13[3] = v35;
  v13[4] = 0.0;
  v13[5] = 0.0;
  v13[6] = v35;
  v13[7] = 0.0;
  v21 = (NiTriShapeData *)FormHeapAlloc(0x58u);
  if ( !v21 )
  {
    v22 = 0;
    goto LABEL_31;
  }
  v22 = sub_71FB40(v21, 4, v7, v29, v30, (int)v13, 1, 0, 2, v15);
  if ( !v22 )
  {
LABEL_31:
    FormHeapFree(v7);
    FormHeapFree(v29);
    FormHeapFree((unsigned int)v13);
    FormHeapFree((unsigned int)v15);
    FormHeapFree(v30);
  }
  return v22;
}
