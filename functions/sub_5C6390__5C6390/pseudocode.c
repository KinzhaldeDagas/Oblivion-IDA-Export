void __thiscall sub_5C6390(_DWORD *this, int arg0)
{
  _DWORD *v2; // ebp
  PlayerCharacter *v3; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  int v5; // ebx
  int v6; // esi
  char *v7; // eax
  const char *v8; // eax
  _DWORD *v9; // esi
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // edi
  double v14; // st7
  int v15; // eax
  _DWORD *v16; // ecx
  double v17; // st7
  _DWORD *v18; // esi
  double v19; // st7
  double v20; // st7
  int v21; // eax
  char *v22; // eax
  float v23; // edi
  int v24; // eax
  float v25; // esi
  int v26; // ecx
  int v27; // eax
  int v28; // ebp
  NiObject *v29; // eax
  NiObject *v30; // esi
  NiObject *(__thiscall *Unk_02)(NiObject *); // eax
  char *v32; // eax
  float v33; // eax
  bool v34; // zf
  Tile *v35; // esi
  BSStringT a2; // [esp+0h] [ebp-168h] BYREF
  int a3; // [esp+8h] [ebp-160h]
  float v38; // [esp+20h] [ebp-148h]
  float v39; // [esp+24h] [ebp-144h]
  int v40; // [esp+28h] [ebp-140h]
  float v41; // [esp+2Ch] [ebp-13Ch]
  double Float; // [esp+30h] [ebp-138h]
  _DWORD *v43; // [esp+38h] [ebp-130h]
  int v44[24]; // [esp+3Ch] [ebp-12Ch] BYREF
  unsigned __int8 a1[96]; // [esp+9Ch] [ebp-CCh] BYREF
  int v46[24]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v47; // [esp+164h] [ebp-4h]

  v2 = this; /*0x5c63bd*/
  v43 = this; /*0x5c63bf*/
  ArrayConstructor( /*0x5c63d9*/
    (char *)a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v47 = 0; /*0x5c63f3*/
  ArrayConstructor( /*0x5c63fa*/
    (char *)v44,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v3 = reference; /*0x5c63ff*/
  GetBaseForm = reference->vtbl->super.super.super.GetBaseForm; /*0x5c6407*/
  LOBYTE(v47) = 1; /*0x5c640d*/
  *(float *)&a3 = 0.0; /*0x5c641a*/
  v5 = (int)GetBaseForm((TESObjectREFR *)v3); /*0x5c641d*/
  v6 = *(_DWORD *)(v5 + 0xE8); /*0x5c641f*/
  v7 = (char *)TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v5); /*0x5c6430*/
  FaceGenHeadParameters_Combine((char *)(v6 + 0x29C), v7, (int)a1, 0, 0.0); /*0x5c643d*/
  v8 = (const char *)stru_B39000; /*0x5c6442*/
  a3 = 0xFA8; /*0x5c644a*/
  LODWORD(Float) = &a2; /*0x5c6454*/
  a2.m_data = 0; /*0x5c645a*/
  *(_DWORD *)&a2.m_dataLen = 0; /*0x5c645c*/
  BSStringT_Set(&a2, v8, 0); /*0x5c6464*/
  v9 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(v2, (unsigned __int8 *)a2.m_data, *(int *)&a2.m_dataLen); /*0x5c6478*/
  Float = Tile_GetFloat((_DWORD *)v2[1], 0xFAE); /*0x5c647f*/
  v10 = Tile_GetFloat(v9, a3); /*0x5c6485*/
  v11 = *(_DWORD *)(v5 + 0xE8); /*0x5c648e*/
  if ( v10 == Float ) /*0x5c649b*/
  {
    if ( *(float *)(v11 + 0xA4) <= 0.0 ) /*0x5c64a8*/
      v12 = *(float *)&dword_A46C30; /*0x5c64b2*/
    else
      v12 = *(float *)(v11 + 0xA4); /*0x5c64aa*/
  }
  else if ( *(float *)(v11 + 0xA0) <= 0.0 ) /*0x5c64c5*/
  {
    v12 = flt_A31E2C; /*0x5c64cf*/
  }
  else
  {
    v12 = *(float *)(v11 + 0xA0); /*0x5c64c7*/
  }
  v13 = arg0; /*0x5c64d5*/
  v38 = v12; /*0x5c64dc*/
  v14 = Tile_GetFloat((_DWORD *)v2[arg0 + 0x25], 0xFB6); /*0x5c64ec*/
  v15 = Double_To_SInt32(v14); /*0x5c64f1*/
  v16 = (_DWORD *)v2[arg0 + 0x25]; /*0x5c64f8*/
  a3 = 0xFAE; /*0x5c64ff*/
  if ( v15 ) /*0x5c6504*/
  {
    *(float *)&v40 = Tile_GetFloat(v16, a3); /*0x5c653e*/
    v17 = (*(float *)&v40 - 0.0) / (1.0 - 0.0) * dbl_A46E48 - dbl_A3F3E8; /*0x5c6556*/
  }
  else
  {
    *(float *)&v40 = Tile_GetFloat(v16, a3); /*0x5c650b*/
    v39 = -v38; /*0x5c6517*/
    v17 = (v38 - v39) * ((*(float *)&v40 - 0.0) / (1.0 - 0.0)) + v39; /*0x5c6535*/
  }
  v18 = (_DWORD *)v2[arg0 + 0x25]; /*0x5c655c*/
  v39 = v17; /*0x5c6563*/
  *(float *)&a3 = v39; /*0x5c656c*/
  v19 = Tile_GetFloat(v18, 0xFB5) - dbl_A2F928; /*0x5c657b*/
  v40 = LOWORD(v38) | 0xC00; /*0x5c6591*/
  *(_QWORD *)&Float = (__int64)v19; /*0x5c6599*/
  *(_DWORD *)&a2.m_dataLen = (__int64)v19; /*0x5c65a1*/
  a2.m_data = 0; /*0x5c65a2*/
  v20 = Tile_GetFloat(v18, 0xFB6); /*0x5c65ad*/
  v21 = Double_To_SInt32(v20); /*0x5c65b2*/
  FaceGenHeadParameters_SetSliderValue((int)a1, v21, (int)a2.m_data, *(unsigned int *)&a2.m_dataLen, *(float *)&a3); /*0x5c65c0*/
  ArrayConstructor( /*0x5c65de*/
    (char *)v46,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  LOBYTE(v47) = 2; /*0x5c65ed*/
  TESNPC_BuildAbsoluteFaceGenParameters((int *)v5, v46); /*0x5c65f5*/
  FaceGenHeadParameters_ComputeRaceDelta(v46, (int)a1, (int)v44); /*0x5c660f*/
  *(float *)&a3 = 0.0; /*0x5c6619*/
  *(_DWORD *)&a2.m_dataLen = 0; /*0x5c661c*/
  a2.m_data = (char *)TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v5); /*0x5c6625*/
  v22 = (char *)TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v5); /*0x5c6628*/
  FaceGenHeadParameters_Combine((char *)v44, v22, (int)a2.m_data, a2.m_dataLen, *(float *)&a3); /*0x5c6633*/
  if ( Tile_GetFloat((_DWORD *)v2[arg0 + 0x25], 0xFB6) == *(float *)&SrcStr ) /*0x5c6657*/
  {
    v23 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0)); /*0x5c666f*/
    v38 = v23; /*0x5c6673*/
    if ( v23 != 0.0 ) /*0x5c6677*/
    {
      v40 = 2; /*0x5c667d*/
      while ( 1 ) /*0x5c6694*/
      {
        v24 = *(unsigned __int16 *)(LODWORD(v23) + 0xB6); /*0x5c6694*/
        v25 = 0.0; /*0x5c669b*/
        LODWORD(Float) = v24; /*0x5c669f*/
        v39 = 0.0; /*0x5c66a3*/
        if ( v24 ) /*0x5c66a7*/
        {
          do /*0x5c6787*/
          {
            if ( (unsigned int)*(unsigned __int16 *)(LODWORD(v23) + 0xB6) > LODWORD(v25) ) /*0x5c66b6*/
            {
              v26 = *(_DWORD *)(*(_DWORD *)(LODWORD(v23) + 0xB0) + 4 * LODWORD(v25)); /*0x5c66c2*/
              if ( v26 ) /*0x5c66c7*/
              {
                v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x10))(v26); /*0x5c66d2*/
                v28 = v27; /*0x5c66d4*/
                if ( v27 ) /*0x5c66d8*/
                {
                  if ( !strcmp(*(const char **)(v27 + 8), "FaceGenHair") ) /*0x5c66ed*/
                  {
                    v41 = *(float *)(v5 + 0x1CC); /*0x5c66f8*/
                    BSFaceGen_ApplyHairLengthMorph(v27, v41);// Apply TESNPC+0x1CC hairLength to this FaceGenHair geometry. /*0x5c6704*/
                  }
                  v29 = sub_550790(v28); /*0x5c670d*/
                  v30 = v29; /*0x5c6712*/
                  if ( v29 ) /*0x5c6719*/
                  {
                    if ( v29->__vftable[1].Unk_02(v29) ) /*0x5c6722*/
                    {
                      Unk_02 = v30->__vftable[1].Unk_02; /*0x5c672c*/
                      *(float *)&a3 = 0.0; /*0x5c672f*/
                      *(float *)&a2.m_dataLen = 1.0; /*0x5c6732*/
                      a2.m_data = (char *)v28; /*0x5c6735*/
                      v32 = (char *)Unk_02(v30); /*0x5c673d*/
                      BSFaceGenModel_ApplyEGMMorph( /*0x5c6741*/
                        v32,
                        (unsigned int *)v44,
                        (int)a2.m_data,
                        *(float *)&a2.m_dataLen,
                        (float *)a3);
                      if ( !strcmp(*(const char **)(v28 + 8), "FaceGenHair") ) /*0x5c6755*/
                      {
                        v41 = *(float *)(v5 + 0x1CC); /*0x5c6760*/
                        BSFaceGen_ApplyHairLengthMorph(v28, v41);// Apply TESNPC+0x1CC hairLength to the alternate FaceGenHair geometry. /*0x5c676c*/
                      }
                    }
                  }
                  v23 = v38; /*0x5c6774*/
                  v25 = v39; /*0x5c6778*/
                }
              }
            }
            ++LODWORD(v25); /*0x5c677c*/
            v39 = v25; /*0x5c6783*/
          }
          while ( LODWORD(v25) < LODWORD(Float) ); /*0x5c6787*/
          v2 = v43; /*0x5c678d*/
        }
        v33 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)(reference, 0)); /*0x5c67a1*/
        v34 = v40-- == 1; /*0x5c67a3*/
        v38 = v33; /*0x5c67a8*/
        if ( v34 ) /*0x5c67ac*/
          break; /*0x5c67ac*/
        v23 = v38; /*0x5c6690*/
      }
    }
    v13 = arg0; /*0x5c67b2*/
  }
  v35 = (Tile *)v2[v13 + 0x25]; /*0x5c67b9*/
  *(float *)&a3 = Tile_GetFloat(v35, 0xFAE); /*0x5c67cd*/
  Tile_SetFloat(v35, (_DWORD *)0xFB8, *(float *)&a3); /*0x5c67d7*/
  LOBYTE(v47) = 1; /*0x5c67ed*/
  _LN21((char *)v46, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c67f5*/
  LOBYTE(v47) = 0; /*0x5c6808*/
  _LN21((char *)v44, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c6810*/
  v47 = 0xFFFFFFFF; /*0x5c6826*/
  _LN21((char *)a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c6831*/
}
