NiAVObject *__stdcall sub_575000(char *Source, float a2, float a3, float a4, float a5, char *a6, float i)
{
  float *v7; // edi
  int v8; // ebp
  float *v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  _WORD *v12; // ecx
  double v13; // st6
  double v14; // st5
  double v15; // st7
  double v16; // st3
  double v17; // rt0
  double v18; // st5
  double v19; // st6
  float v20; // edx
  float v21; // eax
  unsigned int v22; // eax
  char *v23; // eax
  float v24; // ecx
  int (__thiscall *v25)(_DWORD); // edx
  double v26; // st7
  int (__thiscall *v27)(_DWORD); // eax
  double v28; // st7
  float v29; // ecx
  int (__thiscall *v30)(_DWORD); // edx
  double v31; // st7
  int (__thiscall *v32)(_DWORD); // edx
  double v33; // st7
  NiAVObject *v34; // eax
  NiAVObject *v35; // esi
  NiTexturingProperty *v36; // eax
  NiTexturingProperty *v37; // edi
  BSStringT v39; // [esp-Ch] [ebp-58h] BYREF
  int *v40; // [esp-4h] [ebp-50h]
  float v41; // [esp+0h] [ebp-4Ch]
  unsigned int v42[6]; // [esp+4h] [ebp-48h] BYREF
  int v43; // [esp+1Ch] [ebp-30h] BYREF
  _WORD *v44; // [esp+20h] [ebp-2Ch]
  double v45; // [esp+24h] [ebp-28h]
  double v46; // [esp+2Ch] [ebp-20h]
  double v47; // [esp+34h] [ebp-18h]
  float v48; // [esp+3Ch] [ebp-10h]
  int v49; // [esp+48h] [ebp-4h]
  float v50; // [esp+58h] [ebp+Ch]
  char *v51; // [esp+58h] [ebp+Ch]
  int v52; // [esp+58h] [ebp+Ch]
  float v53; // [esp+58h] [ebp+Ch]
  int v54; // [esp+58h] [ebp+Ch]
  float v55; // [esp+58h] [ebp+Ch]
  int v56; // [esp+58h] [ebp+Ch]
  float v57; // [esp+58h] [ebp+Ch]
  float v58; // [esp+5Ch] [ebp+10h]
  float v59; // [esp+5Ch] [ebp+10h]
  float v60; // [esp+5Ch] [ebp+10h]
  float v61; // [esp+60h] [ebp+14h]
  float v62; // [esp+60h] [ebp+14h]
  float v63; // [esp+60h] [ebp+14h]
  float v64; // [esp+60h] [ebp+14h]
  float v65; // [esp+60h] [ebp+14h]
  float v66; // [esp+60h] [ebp+14h]

  v49 = 1;
  v7 = (float *)FormHeapAlloc(0x30u);
  v8 = FormHeapAlloc(0x30u);
  v9 = (float *)FormHeapAlloc(0x20u);
  v10 = (_DWORD *)FormHeapAlloc(0x40u);
  v11 = v10;
  v44 = v10;
  if ( v10 )
    sub_401080(v10, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v11 = 0;
  LOBYTE(v49) = 0;
  v12 = (_WORD *)FormHeapAlloc(0xCu);
  v13 = a4;
  v14 = (double)SLODWORD(i);
  *v7 = a3;
  v7[1] = a4;
  v46 = v14;
  v44 = v12;
  i = v14 + a5;
  v48 = i;
  v15 = i;
  v7[2] = i;
  v7[3] = a3;
  v58 = v13;
  v7[4] = v58;
  v16 = (double)(int)a6;
  v7[5] = a5;
  v47 = v16;
  v17 = a5;
  i = a3 + v16;
  v18 = i;
  v7[6] = i;
  v59 = v13;
  v7[7] = v59;
  v61 = v15;
  v7[8] = v61;
  v50 = v18;
  v7[9] = v50;
  v60 = v13;
  v7[0xA] = v60;
  v62 = v17;
  v7[0xB] = v62;
  v19 = flt_A30634;
  v63 = flt_A30634;
  *(float *)v8 = 0.0;
  *(float *)(v8 + 4) = 0.0;
  *(float *)(v8 + 8) = v63;
  v64 = v19;
  *(float *)(v8 + 0xC) = 0.0;
  v20 = v64;
  *(float *)(v8 + 0x10) = 0.0;
  v65 = v19;
  *(float *)(v8 + 0x14) = v20;
  *(float *)(v8 + 0x18) = 0.0;
  v21 = v65;
  *(float *)(v8 + 0x1C) = 0.0;
  v66 = v19;
  *(float *)(v8 + 0x20) = v21;
  *(float *)(v8 + 0x24) = 0.0;
  *(float *)(v8 + 0x28) = 0.0;
  *(float *)(v8 + 0x2C) = v66;
  *v9 = 0.0;
  v9[1] = 0.0;
  v9[2] = 0.0;
  v9[3] = 1.0;
  v9[4] = 1.0;
  v9[5] = 0.0;
  v9[6] = 1.0;
  v9[7] = 1.0;
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    if ( LOWORD(a2) == 0xFFFF )
    {
      a6 = Source + 1;
      v22 = strlen(Source);
    }
    else
    {
      v22 = LOWORD(a2);
    }
    if ( LODWORD(i) >= v22 )
      break;
    v23 = &Source[Source != 0 ? LODWORD(i) : 0];
    if ( *v23 == 0x2F )
      *v23 = 0x5C;
  }
  *(float *)&v43 = 1.0;
  i = 0.0;
  if ( Source )
  {
    if ( *Source )
    {
      i = COERCE_FLOAT(v42);
      v42[0] = 0;
      v41 = 0.0;
      v40 = &v43;
      LOBYTE(v49) = 2;
      v39.m_data = 0;
      v39.m_dataLen = 0;
      v39.m_bufLen = 0;
      BSStringT_Set(&v39, "(BookIMG)", 0);
      LOBYTE(v49) = 0;
      i = *(float *)sub_591360((int *)&a6, Source, (int)v39.m_data, *(int *)&v39.m_dataLen, (int)v40, v41, v42[0]);
      if ( a6 )
      {
        v51 = a6;
        if ( !InterlockedDecrement((volatile LONG *)a6 + 1) )
          (**(void (__thiscall ***)(char *, int))v51)(v51, 1);
      }
      if ( i != 0.0 )
      {
        *v9 = 0.0;
        v24 = i;
        v9[1] = 0.0;
        v25 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v24) + 0x50);
        v45 = *(float *)&v43 * v46;
        v52 = v25(LODWORD(v24));
        v26 = (double)v52;
        if ( v52 < 0 )
          v26 = v26 + flt_A2FC78;
        v53 = v45 / v26;
        *(float *)&v45 = 0.0;
        *((float *)&v45 + 1) = v53;
        v9[2] = 0.0;
        v9[3] = *((float *)&v45 + 1);
        v27 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(i) + 0x4C);
        v45 = *(float *)&v43 * v47;
        v54 = v27(LODWORD(i));
        v28 = (double)v54;
        if ( v54 < 0 )
          v28 = v28 + flt_A2FC78;
        v55 = v45 / v28;
        v9[4] = v55;
        v29 = i;
        v9[5] = 0.0;
        v30 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v29) + 0x50);
        v46 = *(float *)&v43 * v46;
        v56 = v30(LODWORD(v29));
        v31 = (double)v56;
        if ( v56 < 0 )
          v31 = v31 + flt_A2FC78;
        v32 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(i) + 0x4C);
        v57 = v46 / v31;
        v47 = *(float *)&v43 * v47;
        LODWORD(v45) = v32(LODWORD(i));
        v33 = (double)SLODWORD(v45);
        if ( SLODWORD(v45) < 0 )
          v33 = v33 + flt_A2FC78;
        *(float *)&v45 = v47 / v33;
        *((float *)&v45 + 1) = v57;
        *((double *)v9 + 3) = v45;
      }
      v12 = v44;
    }
  }
  *v11 = dword_B25AE0;
  v11[1] = dword_B25AE4;
  v11[2] = dword_B25AE8;
  v11[3] = dword_B25AEC;
  v11[4] = dword_B25AE0;
  v11[5] = dword_B25AE4;
  v11[6] = dword_B25AE8;
  v11[7] = dword_B25AEC;
  v11[8] = dword_B25AE0;
  v11[9] = dword_B25AE4;
  v11[0xA] = dword_B25AE8;
  v11[0xB] = dword_B25AEC;
  v11[0xC] = dword_B25AE0;
  v11[0xD] = dword_B25AE4;
  v11[0xE] = dword_B25AE8;
  v11[0xF] = dword_B25AEC;
  v42[0] = 0xD0;
  *v12 = 0;
  v12[1] = 1;
  v12[2] = 2;
  v12[3] = 2;
  v12[4] = 1;
  v12[5] = 3;
  v34 = (NiAVObject *)FormHeapAlloc(v42[0]);
  LOBYTE(v49) = 3;
  if ( v34 )
    v35 = sub_4A1780(v34, 4, (int)v7, v8, (int)v11, (int)v9, 1, 0, 2, (int)v44, 0, 0, 0, 0);
  else
    v35 = 0;
  LOBYTE(v49) = 0;
  v36 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  LOBYTE(v49) = 4;
  if ( v36 )
    v37 = NiTexturingProperty::NiTexturingProperty(v36);
  else
    v37 = 0;
  LOBYTE(v49) = 0;
  NiTexturingProperty::SetUnk08(v37, (NiRenderedTexture *)LODWORD(i));
  sub_405870(v37, 0);
  sub_405680((NiNode *)v35, (BSShaderProperty *)v37);
  NiAVObject_InitializePropertyState(v35);
  FormHeapFree((unsigned int)Source);
  return v35;
}
