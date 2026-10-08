NiTriShapeData *__stdcall sub_49D2A0(float a1, float a2, int a3, int a4, char a5, float a6)
{
  float *v6; // eax
  NiPoint3 *v7; // edi
  bool v8; // zf
  double v9; // st7
  double v10; // rt0
  double v11; // st5
  double v12; // st3
  float *v13; // ebp
  UInt16 *v15; // ebx
  NiPoint3 *v16; // eax
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
  NiPoint3 *v29; // [esp+38h] [ebp+4h]
  NiColorAlpha *v30; // [esp+48h] [ebp+14h]
  float v31; // [esp+4Ch] [ebp+18h]
  float v32; // [esp+4Ch] [ebp+18h]
  float v33; // [esp+4Ch] [ebp+18h]
  float v34; // [esp+4Ch] [ebp+18h]
  float v35; // [esp+4Ch] [ebp+18h]

  v6 = (float *)FormHeapAlloc(0x30u); /*0x49d2c9*/
  v7 = (NiPoint3 *)v6; /*0x49d2ce*/
  if ( !v6 ) /*0x49d2d7*/
    return 0; /*0x49d2d7*/
  v8 = (MEMORY[0xB33E90][0x13D0] & 1) == 0; /*0x49d2dd*/
  v9 = a1; /*0x49d2e4*/
  v10 = dbl_A2FAA0; /*0x49d2f2*/
  v25 = a1 * v10; /*0x49d2f4*/
  v11 = v25; /*0x49d2f8*/
  *v6 = v25; /*0x49d308*/
  v26 = a2 * v10; /*0x49d30e*/
  v12 = v26; /*0x49d312*/
  v6[1] = v26; /*0x49d320*/
  v6[2] = 0.0; /*0x49d32f*/
  v27 = -v9 * v10; /*0x49d334*/
  v6[3] = v27; /*0x49d346*/
  v24 = v12; /*0x49d349*/
  v6[4] = v24; /*0x49d353*/
  v6[5] = 0.0; /*0x49d360*/
  v6[6] = v27; /*0x49d36b*/
  v28 = v10 * -a2; /*0x49d374*/
  v6[7] = v28; /*0x49d386*/
  v6[8] = 0.0; /*0x49d393*/
  v23 = v11; /*0x49d396*/
  v6[9] = v23; /*0x49d3a0*/
  v6[0xA] = v28; /*0x49d3ab*/
  v6[0xB] = 0.0; /*0x49d3b6*/
  if ( v8 ) /*0x49d3b9*/
  {
    *(_DWORD *)&MEMORY[0xB33E90][0x13D0] |= 1u; /*0x49d3bb*/
    *(float *)&MEMORY[0xB33E90][0x13C4] = 0.0; /*0x49d3c2*/
    *(float *)&MEMORY[0xB33E90][0x13C8] = 0.0; /*0x49d3c8*/
    *(float *)&MEMORY[0xB33E90][0x13CC] = 1.0; /*0x49d3d0*/
  }
  v13 = (float *)FormHeapAlloc(0x20u); /*0x49d3e1*/
  if ( !v13 ) /*0x49d3e8*/
  {
    FormHeapFree((unsigned int)v7); /*0x49d3eb*/
    return 0; /*0x49d3f5*/
  }
  v15 = (UInt16 *)FormHeapAlloc(0xCu); /*0x49d401*/
  if ( !v15 ) /*0x49d408*/
  {
    FormHeapFree((unsigned int)v7); /*0x49d40b*/
    FormHeapFree((unsigned int)v13); /*0x49d411*/
    return 0; /*0x49d41b*/
  }
  *v15 = 0; /*0x49d42a*/
  v15[1] = 1; /*0x49d42d*/
  v15[2] = 2; /*0x49d433*/
  v15[3] = 0; /*0x49d437*/
  v15[4] = 2; /*0x49d43b*/
  v15[5] = 3; /*0x49d43f*/
  v29 = 0; /*0x49d445*/
  if ( a5 ) /*0x49d449*/
  {
    v16 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x49d44d*/
    v29 = v16; /*0x49d457*/
    if ( v16 ) /*0x49d45b*/
    {
      v16->x = *(float *)&MEMORY[0xB33E90][0x13C4]; /*0x49d463*/
      v16->y = *(float *)&MEMORY[0xB33E90][0x13C8]; /*0x49d46b*/
      v16->z = *(float *)&MEMORY[0xB33E90][0x13CC]; /*0x49d474*/
      v16[1].x = *(float *)&MEMORY[0xB33E90][0x13C4]; /*0x49d47d*/
      v16[1].y = *(float *)&MEMORY[0xB33E90][0x13C8]; /*0x49d486*/
      v16[1].z = *(float *)&MEMORY[0xB33E90][0x13CC]; /*0x49d48f*/
      v16[2].x = *(float *)&MEMORY[0xB33E90][0x13C4]; /*0x49d498*/
      v16[2].y = *(float *)&MEMORY[0xB33E90][0x13C8]; /*0x49d4a1*/
      v16[2].z = *(float *)&MEMORY[0xB33E90][0x13CC]; /*0x49d4aa*/
      v16[3].x = *(float *)&MEMORY[0xB33E90][0x13C4]; /*0x49d4b3*/
      v16[3].y = *(float *)&MEMORY[0xB33E90][0x13C8]; /*0x49d4bc*/
      v16[3].z = *(float *)&MEMORY[0xB33E90][0x13CC]; /*0x49d4c5*/
    }
  }
  v30 = 0; /*0x49d4cd*/
  if ( !LOBYTE(a6) ) /*0x49d4d1*/
    goto LABEL_24; /*0x49d4d1*/
  v17 = (float *)FormHeapAlloc(0x40u); /*0x49d4d9*/
  v18 = v17; /*0x49d4de*/
  if ( v17 ) /*0x49d4f1*/
    sub_401080(v17, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x49d4fd*/
  else
    v18 = 0; /*0x49d504*/
  v30 = (NiColorAlpha *)v18; /*0x49d510*/
  if ( v18 ) /*0x49d514*/
  {
    if ( (MEMORY[0xB33E90][0x13D0] & 2) == 0 ) /*0x49d521*/
    {
      *(_DWORD *)&MEMORY[0xB33E90][0x13D0] |= 2u; /*0x49d523*/
      sub_404850((float *)&MEMORY[0xB33E90][0x13BC], (int)"fAlpha:Water", kHeadBodyNormalMatchRadius); /*0x49d546*/
      atexit(sub_A1A630); /*0x49d550*/
    }
    if ( *GameSetting_GetSafeFloatPointer((float *)&MEMORY[0xB33E90][0x13BC]) <= 1.0 ) /*0x49d573*/
    {
      if ( *GameSetting_GetSafeFloatPointer((float *)&MEMORY[0xB33E90][0x13BC]) < 0.0 ) /*0x49d592*/
        *(float *)&MEMORY[0xB33E90][0x13BC] = 0.0; /*0x49d594*/
    }
    else
    {
      *(float *)&MEMORY[0xB33E90][0x13BC] = 1.0; /*0x49d575*/
    }
    v31 = sub_404E30(&MEMORY[0xB33E90][0x13BC]); /*0x49d5a8*/
    *v18 = 1.0; /*0x49d5ca*/
    v18[1] = 1.0; /*0x49d5d4*/
    v18[2] = 1.0; /*0x49d5d7*/
    v18[3] = v31; /*0x49d5df*/
    v32 = sub_404E30(&MEMORY[0xB33E90][0x13BC]); /*0x49d5e7*/
    v18[4] = 1.0; /*0x49d609*/
    v18[5] = 1.0; /*0x49d614*/
    v18[6] = 1.0; /*0x49d617*/
    v18[7] = v32; /*0x49d61a*/
    v33 = sub_404E30(&MEMORY[0xB33E90][0x13BC]); /*0x49d627*/
    v18[8] = 1.0; /*0x49d649*/
    v18[9] = 1.0; /*0x49d654*/
    v18[0xA] = 1.0; /*0x49d657*/
    v18[0xB] = v33; /*0x49d65f*/
    v34 = sub_404E30(&MEMORY[0xB33E90][0x13BC]); /*0x49d667*/
    v19 = 1.0; /*0x49d66b*/
    v18[0xC] = 1.0; /*0x49d689*/
    v18[0xD] = 1.0; /*0x49d694*/
    v18[0xE] = 1.0; /*0x49d697*/
    v18[0xF] = v34; /*0x49d69a*/
  }
  else
  {
LABEL_24:
    v19 = 1.0; /*0x49d69f*/
  }
  v35 = v19; /*0x49d6a5*/
  if ( a4 != 1 ) /*0x49d6ac*/
  {
    v20 = (double)a4; /*0x49d6b4*/
    if ( a4 < 0 ) /*0x49d6b8*/
      v20 = v20 + flt_A2FC78; /*0x49d6ba*/
    v35 = v20; /*0x49d6c0*/
  }
  *v13 = v35; /*0x49d6dc*/
  v13[1] = v35; /*0x49d6e3*/
  v13[2] = 0.0; /*0x49d6f0*/
  v13[3] = v35; /*0x49d6fd*/
  v13[4] = 0.0; /*0x49d712*/
  v13[5] = 0.0; /*0x49d719*/
  v13[6] = v35; /*0x49d724*/
  v13[7] = 0.0; /*0x49d727*/
  v21 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x49d72a*/
  if ( !v21 ) /*0x49d740*/
  {
    v22 = 0; /*0x49d7a5*/
    goto LABEL_31; /*0x49d7a7*/
  }
  v22 = NiTriShapeData_ConstructWithData(v21, 4u, v7, v29, v30, v13, 1, 0, 2u, v15); /*0x49d75e*/
  if ( !v22 ) /*0x49d762*/
  {
LABEL_31:
    FormHeapFree((unsigned int)v7); /*0x49d764*/
    FormHeapFree((unsigned int)v29); /*0x49d76f*/
    FormHeapFree((unsigned int)v13); /*0x49d775*/
    FormHeapFree((unsigned int)v15); /*0x49d77b*/
    FormHeapFree((unsigned int)v30); /*0x49d785*/
  }
  return v22; /*0x49d78f*/
}
