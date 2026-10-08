NiAVObject *__stdcall sub_575000(char *Source, float a2, float a3, float a4, float a5, volatile LONG *a6, float i)
{
  NiPoint3 *v7; // edi
  int v8; // ebp
  float *v9; // ebx
  UInt16 *v10; // eax
  UInt16 *v11; // esi
  UInt16 *v12; // ecx
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
  float *v40; // [esp-4h] [ebp-50h]
  float v41; // [esp+0h] [ebp-4Ch]
  unsigned int v42[6]; // [esp+4h] [ebp-48h] BYREF
  int v43; // [esp+1Ch] [ebp-30h] BYREF
  UInt16 *v44; // [esp+20h] [ebp-2Ch]
  double v45; // [esp+24h] [ebp-28h]
  double v46; // [esp+2Ch] [ebp-20h]
  double v47; // [esp+34h] [ebp-18h]
  float v48; // [esp+3Ch] [ebp-10h]
  int v49; // [esp+48h] [ebp-4h]
  float v50; // [esp+58h] [ebp+Ch]
  volatile LONG *v51; // [esp+58h] [ebp+Ch]
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

  v49 = 1; /*0x575029*/
  v7 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x575038*/
  v8 = FormHeapAlloc(0x30u); /*0x575041*/
  v9 = (float *)FormHeapAlloc(0x20u); /*0x57504a*/
  v10 = (UInt16 *)FormHeapAlloc(0x40u); /*0x57504c*/
  v11 = v10; /*0x575051*/
  v44 = v10; /*0x575056*/
  if ( v10 ) /*0x575061*/
    sub_401080(v10, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x57506d*/
  else
    v11 = 0; /*0x575074*/
  LOBYTE(v49) = 0; /*0x575078*/
  v12 = (UInt16 *)FormHeapAlloc(0xCu); /*0x57508a*/
  v13 = a4; /*0x57508c*/
  v14 = (double)SLODWORD(i); /*0x57509c*/
  v7->x = a3; /*0x5750a0*/
  v7->y = a4; /*0x5750a2*/
  v46 = v14; /*0x5750a8*/
  v44 = v12; /*0x5750ac*/
  i = v14 + a5; /*0x5750ba*/
  v48 = i; /*0x5750c2*/
  v15 = i; /*0x5750ca*/
  v7->z = i; /*0x5750cc*/
  v7[1].x = a3; /*0x5750d9*/
  v58 = v13; /*0x5750dc*/
  v7[1].y = v58; /*0x5750e6*/
  v16 = (double)(int)a6; /*0x5750f1*/
  v7[1].z = a5; /*0x5750f5*/
  v47 = v16; /*0x5750f8*/
  v17 = a5; /*0x5750fe*/
  i = a3 + v16; /*0x575100*/
  v18 = i; /*0x575110*/
  v7[2].x = i; /*0x575112*/
  v59 = v13; /*0x575115*/
  v7[2].y = v59; /*0x57511f*/
  v61 = v15; /*0x575122*/
  v7[2].z = v61; /*0x57512a*/
  v50 = v18; /*0x57512d*/
  v7[3].x = v50; /*0x575137*/
  v60 = v13; /*0x57513a*/
  v7[3].y = v60; /*0x575142*/
  v62 = v17; /*0x575145*/
  v7[3].z = v62; /*0x57514f*/
  v19 = kTerrainLODQuadRayDirectionZ; /*0x57515e*/
  v63 = kTerrainLODQuadRayDirectionZ; /*0x575168*/
  *(float *)v8 = 0.0; /*0x57516c*/
  *(float *)(v8 + 4) = 0.0; /*0x575179*/
  *(float *)(v8 + 8) = v63; /*0x575186*/
  v64 = v19; /*0x575189*/
  *(float *)(v8 + 0xC) = 0.0; /*0x575193*/
  v20 = v64; /*0x57519a*/
  *(float *)(v8 + 0x10) = 0.0; /*0x5751a2*/
  v65 = v19; /*0x5751ab*/
  *(float *)(v8 + 0x14) = v20; /*0x5751af*/
  *(float *)(v8 + 0x18) = 0.0; /*0x5751bc*/
  v21 = v65; /*0x5751c3*/
  *(float *)(v8 + 0x1C) = 0.0; /*0x5751c9*/
  v66 = v19; /*0x5751cc*/
  *(float *)(v8 + 0x20) = v21; /*0x5751d4*/
  *(float *)(v8 + 0x24) = 0.0; /*0x5751e3*/
  *(float *)(v8 + 0x28) = 0.0; /*0x5751ea*/
  *(float *)(v8 + 0x2C) = v66; /*0x5751f7*/
  *v9 = 0.0; /*0x575202*/
  v9[1] = 0.0; /*0x57520c*/
  v9[2] = 0.0; /*0x575219*/
  v9[3] = 1.0; /*0x575226*/
  v9[4] = 1.0; /*0x575231*/
  v9[5] = 0.0; /*0x575238*/
  v9[6] = 1.0; /*0x57523f*/
  v9[7] = 1.0; /*0x575242*/
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    if ( LOWORD(a2) == 0xFFFF ) /*0x575256*/
    {
      a6 = (volatile LONG *)(Source + 1); /*0x57525f*/
      v22 = strlen(Source); /*0x57526c*/
    }
    else
    {
      v22 = LOWORD(a2); /*0x575272*/
    }
    if ( LODWORD(i) >= v22 ) /*0x57527f*/
      break; /*0x57527f*/
    v23 = &Source[Source != 0 ? LODWORD(i) : 0];
    if ( *v23 == 0x2F ) /*0x575290*/
      *v23 = 0x5C; /*0x575292*/
  }
  *(float *)&v43 = 1.0; /*0x57529e*/
  i = 0.0; /*0x5752a4*/
  if ( Source ) /*0x5752a8*/
  {
    if ( *Source ) /*0x5752ae*/
    {
      i = COERCE_FLOAT(v42); /*0x5752b9*/
      v42[0] = 0; /*0x5752bd*/
      v41 = 0.0; /*0x5752c0*/
      v40 = (float *)&v43; /*0x5752c7*/
      LOBYTE(v49) = 2; /*0x5752d7*/
      v39.m_data = 0; /*0x5752dc*/
      v39.m_dataLen = 0; /*0x5752de*/
      v39.m_bufLen = 0; /*0x5752e2*/
      BSStringT_Set(&v39, "(BookIMG)", 0); /*0x5752e6*/
      LOBYTE(v49) = 0; /*0x5752f5*/
      i = *(float *)sub_591360((int *)&a6, Source, (unsigned int)v39.m_data, *(int *)&v39.m_dataLen, v40, v41, v42[0]); /*0x575301*/
      if ( a6 ) /*0x57530e*/
      {
        v51 = a6; /*0x575310*/
        if ( !InterlockedDecrement(a6 + 1) ) /*0x575318*/
          (**(void (__thiscall ***)(volatile LONG *, int))v51)(v51, 1); /*0x575330*/
      }
      if ( i != 0.0 ) /*0x575337*/
      {
        *v9 = 0.0; /*0x57534f*/
        v24 = i; /*0x575351*/
        v9[1] = 0.0; /*0x575355*/
        v25 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v24) + 0x50); /*0x575362*/
        v45 = *(float *)&v43 * v46; /*0x575365*/
        v52 = v25(LODWORD(v24)); /*0x57536d*/
        v26 = (double)v52; /*0x575371*/
        if ( v52 < 0 ) /*0x575375*/
          v26 = v26 + flt_A2FC78; /*0x575377*/
        v53 = v45 / v26; /*0x575381*/
        *(float *)&v45 = 0.0; /*0x575387*/
        *((float *)&v45 + 1) = v53; /*0x575393*/
        v9[2] = 0.0; /*0x575397*/
        v9[3] = *((float *)&v45 + 1); /*0x57539e*/
        v27 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(i) + 0x4C); /*0x5753af*/
        v45 = *(float *)&v43 * v47; /*0x5753b2*/
        v54 = v27(LODWORD(i)); /*0x5753ba*/
        v28 = (double)v54; /*0x5753be*/
        if ( v54 < 0 ) /*0x5753c2*/
          v28 = v28 + flt_A2FC78; /*0x5753c4*/
        v55 = v45 / v28; /*0x5753ce*/
        v9[4] = v55; /*0x5753dc*/
        v29 = i; /*0x5753df*/
        v9[5] = 0.0; /*0x5753e7*/
        v30 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v29) + 0x50); /*0x5753f4*/
        v46 = *(float *)&v43 * v46; /*0x5753f7*/
        v56 = v30(LODWORD(v29)); /*0x5753ff*/
        v31 = (double)v56; /*0x575403*/
        if ( v56 < 0 ) /*0x575407*/
          v31 = v31 + flt_A2FC78; /*0x575409*/
        v32 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(i) + 0x4C); /*0x575419*/
        v57 = v46 / v31; /*0x57541c*/
        v47 = *(float *)&v43 * v47; /*0x575428*/
        LODWORD(v45) = v32(LODWORD(i)); /*0x575430*/
        v33 = (double)SLODWORD(v45); /*0x575434*/
        if ( SLODWORD(v45) < 0 ) /*0x575438*/
          v33 = v33 + flt_A2FC78; /*0x57543a*/
        *(float *)&v45 = v47 / v33; /*0x575444*/
        *((float *)&v45 + 1) = v57; /*0x575450*/
        *((double *)v9 + 3) = v45; /*0x575454*/
      }
      v12 = v44; /*0x57545e*/
    }
  }
  *(_DWORD *)v11 = dword_B25AE0; /*0x57546c*/
  *((_DWORD *)v11 + 1) = dword_B25AE4; /*0x575473*/
  *((_DWORD *)v11 + 2) = dword_B25AE8; /*0x57547c*/
  *((_DWORD *)v11 + 3) = dword_B25AEC; /*0x575484*/
  *((_DWORD *)v11 + 4) = dword_B25AE0; /*0x57548d*/
  *((_DWORD *)v11 + 5) = dword_B25AE4; /*0x575495*/
  *((_DWORD *)v11 + 6) = dword_B25AE8; /*0x57549e*/
  *((_DWORD *)v11 + 7) = dword_B25AEC; /*0x5754a6*/
  *((_DWORD *)v11 + 8) = dword_B25AE0; /*0x5754af*/
  *((_DWORD *)v11 + 9) = dword_B25AE4; /*0x5754b7*/
  *((_DWORD *)v11 + 0xA) = dword_B25AE8; /*0x5754c0*/
  *((_DWORD *)v11 + 0xB) = dword_B25AEC; /*0x5754c8*/
  *((_DWORD *)v11 + 0xC) = dword_B25AE0; /*0x5754d1*/
  *((_DWORD *)v11 + 0xD) = dword_B25AE4; /*0x5754d9*/
  *((_DWORD *)v11 + 0xE) = dword_B25AE8; /*0x5754e2*/
  *((_DWORD *)v11 + 0xF) = dword_B25AEC; /*0x5754ea*/
  v42[0] = 0xD0; /*0x5754f7*/
  *v12 = 0; /*0x5754fc*/
  v12[1] = 1; /*0x575501*/
  v12[2] = 2; /*0x575505*/
  v12[3] = 2; /*0x575509*/
  v12[4] = 1; /*0x57550d*/
  v12[5] = 3; /*0x575511*/
  v34 = (NiAVObject *)FormHeapAlloc(v42[0]); /*0x575517*/
  LOBYTE(v49) = 3; /*0x575525*/
  if ( v34 ) /*0x57552a*/
    v35 = sub_4A1780(v34, 4u, v7, (NiPoint3 *)v8, (NiColorAlpha *)v11, v9, 1, 0, 2u, v44, 0, 0, 0, 0); /*0x57554c*/
  else
    v35 = 0; /*0x575550*/
  LOBYTE(v49) = 0; /*0x575554*/
  v36 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x575559*/
  LOBYTE(v49) = 4; /*0x575567*/
  if ( v36 ) /*0x57556c*/
    v37 = NiTexturingProperty::NiTexturingProperty(v36); /*0x575575*/
  else
    v37 = 0; /*0x575579*/
  LOBYTE(v49) = 0; /*0x575582*/
  OB_NiTexturingProperty_SetBaseTexture_010201A0(v37, (NiTexture *)LODWORD(i)); /*0x575587*/
  OB_NiTexturingProperty_SetClampMode_010201A0(v37, 0); /*0x575590*/
  sub_405680((NiNode *)v35, (BSShaderProperty *)v37); /*0x575598*/
  NiAVObject_InitializePropertyState(v35); /*0x57559f*/
  FormHeapFree((unsigned int)Source); /*0x5755a9*/
  return v35; /*0x5755b3*/
}
