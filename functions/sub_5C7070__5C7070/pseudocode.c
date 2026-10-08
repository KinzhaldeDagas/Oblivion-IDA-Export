void __cdecl sub_5C7070(char arg0)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // edi
  TESForm *v3; // ebx
  Data *data; // esi
  char *v5; // eax
  double v6; // st7
  double v7; // st4
  double v8; // st6
  double v9; // st5
  double v10; // st3
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st5
  char *v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  NiObject *v26; // eax
  NiObject *v27; // esi
  char *v28; // eax
  int v29; // eax
  bool v30; // zf
  NiNode *v31; // eax
  int v32; // edi
  void *ShadowSceneNode; // eax
  void *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // esi
  _DWORD *v37; // eax
  _DWORD *v38; // esi
  int v39; // eax
  int v40; // eax
  NiNode **v41; // [esp+8h] [ebp-22Ch]
  float v42; // [esp+10h] [ebp-224h]
  NiAVObject *v43; // [esp+10h] [ebp-224h]
  NiAVObject *v44; // [esp+10h] [ebp-224h]
  float v45; // [esp+28h] [ebp-20Ch]
  float v46; // [esp+28h] [ebp-20Ch]
  float v47; // [esp+28h] [ebp-20Ch]
  float v48; // [esp+28h] [ebp-20Ch]
  int v49; // [esp+28h] [ebp-20Ch]
  float v50; // [esp+2Ch] [ebp-208h]
  float v51; // [esp+2Ch] [ebp-208h]
  float v52; // [esp+2Ch] [ebp-208h]
  float v53; // [esp+2Ch] [ebp-208h]
  int v54; // [esp+2Ch] [ebp-208h]
  float v55; // [esp+30h] [ebp-204h]
  unsigned int v56; // [esp+30h] [ebp-204h]
  double v57; // [esp+34h] [ebp-200h] BYREF
  double v58; // [esp+3Ch] [ebp-1F8h]
  char a1[96]; // [esp+44h] [ebp-1F0h] BYREF
  int v60[24]; // [esp+A4h] [ebp-190h] BYREF
  int v61[24]; // [esp+104h] [ebp-130h] BYREF
  unsigned int v62; // [esp+164h] [ebp-D0h] BYREF
  _DWORD v63[47]; // [esp+16Ch] [ebp-C8h] BYREF
  unsigned int v64; // [esp+230h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c70a2*/
  if ( OpenMenuTile ) /*0x5c70ac*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5c70b9*/
    if ( ParentMenu ) /*0x5c70bd*/
    {
      if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0) ) /*0x5c70d3*/
      {
        if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)(reference, 0) ) /*0x5c70ed*/
        {
          v3 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c7107*/
          reference->super.super.super.process->Unk_17(reference->super.super.super.process); /*0x5c7116*/
          ArrayConstructor( /*0x5c712b*/
            a1,
            0x18u,
            4,
            (void (__thiscall *)(char *))FaceGenMatrix_Construct,
            (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
          v64 = 0; /*0x5c7146*/
          ArrayConstructor( /*0x5c7151*/
            (char *)v60,
            0x18u,
            4,
            (void (__thiscall *)(char *))FaceGenMatrix_Construct,
            (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
          data = v3[9].member.modlist.data; /*0x5c7158*/
          LOBYTE(v64) = 1; /*0x5c716b*/
          v5 = (char *)TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v3); /*0x5c7173*/
          FaceGenHeadParameters_Combine((char *)&data->findData.ftLastAccessTime, v5, (int)a1, 0, 0.0); /*0x5c7180*/
          FaceGenHeadParameters_GetControlValue((int)a1, 0, 0); /*0x5c718e*/
          FaceGenHeadParameters_GetControlValue((int)a1, 0, 1); /*0x5c71a0*/
          v50 = *(float *)(ParentMenu + 0x880); /*0x5c71b2*/
          v58 = 1.0 - 0.0; /*0x5c71be*/
          v6 = dbl_A492F0; /*0x5c71d8*/
          v51 = (v50 - 0.0) / v58 * dbl_A3F3D0 + v6; /*0x5c71da*/
          v45 = (float)0.0 - ((float)0.0 - v51); /*0x5c71f0*/
          if ( v51 > v6 && flt_A47800 <= (double)v51 ) /*0x5c7210*/
          {
            v9 = flt_A47800; /*0x5c725a*/
            v8 = flt_A468FC; /*0x5c725a*/
            v7 = v9; /*0x5c7260*/
          }
          else
          {
            v7 = v51; /*0x5c7212*/
            if ( v51 <= v6 ) /*0x5c721b*/
              v7 = flt_A468FC; /*0x5c7223*/
            v8 = flt_A468FC; /*0x5c7229*/
            v9 = flt_A47800; /*0x5c722b*/
          }
          v10 = v45; /*0x5c722d*/
          if ( v45 > v6 && v10 >= v9 ) /*0x5c7241*/
          {
            v13 = v7; /*0x5c7268*/
            v45 = v9; /*0x5c726c*/
          }
          else
          {
            v11 = v10 < v6; /*0x5c7247*/
            v12 = v10 == v6; /*0x5c7247*/
            v13 = v7; /*0x5c724b*/
            if ( v11 || v12 ) /*0x5c724d*/
              v45 = v8; /*0x5c7252*/
          }
          v42 = v13; /*0x5c7275*/
          FaceGenHeadParameters_SetControlValue((int)a1, 0, 0, v42); /*0x5c7281*/
          FaceGenHeadParameters_SetControlValue((int)a1, 0, 1, v45); /*0x5c7299*/
          FaceGenHeadParameters_GetControlValue((int)a1, 1, 0); /*0x5c72a7*/
          v14 = v45 - TESNPC_GetSexMorphBase(v3); /*0x5c72ba*/
          v55 = v14; /*0x5c72c6*/
          FaceGenHeadParameters_GetControlValue((int)a1, 1, 1); /*0x5c72cb*/
          v57 = v14; /*0x5c72d0*/
          v46 = v14 - TESNPC_GetSexMorphBase(v3); /*0x5c72e2*/
          v52 = (*(float *)(ParentMenu + 0x884) - dbl_A2FC68) / v58 * dbl_A3C800 - dbl_A3D0C0; /*0x5c730a*/
          v47 = v46 - (v55 - v52); /*0x5c7320*/
          v15 = flt_A53954; /*0x5c7324*/
          if ( v15 < v52 && fConstant_2 <= (double)v52 ) /*0x5c7340*/
          {
            v16 = fConstant_2; /*0x5c737c*/
            v17 = flt_A53954; /*0x5c737c*/
            v52 = fConstant_2; /*0x5c737e*/
          }
          else
          {
            if ( v52 <= v15 ) /*0x5c734b*/
              v52 = flt_A53954; /*0x5c734d*/
            v16 = fConstant_2; /*0x5c7351*/
            v17 = flt_A53954; /*0x5c7351*/
          }
          v18 = v47; /*0x5c7353*/
          if ( v47 > v17 && v18 >= v16 ) /*0x5c7367*/
          {
            v47 = v16; /*0x5c7388*/
          }
          else if ( v18 <= v17 ) /*0x5c7372*/
          {
            v47 = v17; /*0x5c7374*/
          }
          v53 = TESNPC_GetSexMorphBase(v3) + v52; /*0x5c739d*/
          v48 = TESNPC_GetSexMorphBase(v3) + v47; /*0x5c73af*/
          FaceGenHeadParameters_SetControlValue((int)a1, 1, 0, v53); /*0x5c73bf*/
          FaceGenHeadParameters_SetControlValue((int)a1, 1, 1, v48); /*0x5c73d7*/
          FaceGenHeadParameters_Initialize(v60); /*0x5c73e4*/
          ArrayConstructor( /*0x5c7402*/
            (char *)v61,
            0x18u,
            4,
            (void (__thiscall *)(char *))FaceGenMatrix_Construct,
            (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
          LOBYTE(v64) = 2; /*0x5c7411*/
          TESNPC_BuildAbsoluteFaceGenParameters((int *)v3, v61); /*0x5c7419*/
          FaceGenHeadParameters_ComputeRaceDelta(v61, (int)a1, (int)v60); /*0x5c7433*/
          v41 = TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v3); /*0x5c7449*/
          v19 = (char *)TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v3); /*0x5c744c*/
          FaceGenHeadParameters_Combine((char *)v60, v19, (int)v41, 0, 0.0); /*0x5c745a*/
          v49 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c7474*/
          v54 = 2; /*0x5c7478*/
          do /*0x5c759e*/
          {
            v20 = v49; /*0x5c7480*/
            v21 = *(unsigned __int16 *)(v49 + 0xB6); /*0x5c7484*/
            v22 = 0; /*0x5c748b*/
            LODWORD(v57) = v21; /*0x5c748f*/
            v56 = 0; /*0x5c7493*/
            if ( v21 ) /*0x5c7497*/
            {
              while ( 1 ) /*0x5c74a4*/
              {
                if ( *(unsigned __int16 *)(v20 + 0xB6) > v22 ) /*0x5c74ad*/
                {
                  v23 = *(_DWORD *)(*(_DWORD *)(v20 + 0xB0) + 4 * v22); /*0x5c74b9*/
                  if ( v23 ) /*0x5c74be*/
                  {
                    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x10))(v23); /*0x5c74c9*/
                    v25 = v24; /*0x5c74cb*/
                    if ( v24 ) /*0x5c74cf*/
                    {
                      if ( !strcmp(*(const char **)(v24 + 8), "FaceGenHair") ) /*0x5c74e4*/
                      {
                        *(float *)&v58 = *(float *)&v3[0x13].member.type; /*0x5c74ef*/
                        BSFaceGen_ApplyHairLengthMorph(v24, *(float *)&v58);// Apply player TESNPC hairLength during Race/Sex menu geometry refresh. /*0x5c74fb*/
                      }
                      v26 = sub_550790(v25); /*0x5c7504*/
                      v27 = v26; /*0x5c7509*/
                      if ( v26 ) /*0x5c7510*/
                      {
                        if ( v26->__vftable[1].Unk_02(v26) ) /*0x5c7519*/
                        {
                          v28 = (char *)v27->__vftable[1].Unk_02(v27); /*0x5c7537*/
                          BSFaceGenModel_ApplyEGMMorph(v28, (unsigned int *)v60, v25, 1.0, 0); /*0x5c753b*/
                          if ( !strcmp(*(const char **)(v25 + 8), "FaceGenHair") ) /*0x5c754f*/
                          {
                            *(float *)&v58 = *(float *)&v3[0x13].member.type; /*0x5c755a*/
                            BSFaceGen_ApplyHairLengthMorph(v25, *(float *)&v58);// Apply player TESNPC hairLength to the alternate refreshed hair geometry. /*0x5c7566*/
                          }
                        }
                      }
                      v22 = v56; /*0x5c756e*/
                    }
                  }
                }
                v56 = ++v22; /*0x5c7579*/
                if ( v22 >= LODWORD(v57) ) /*0x5c757d*/
                  break; /*0x5c757d*/
                v20 = v49; /*0x5c74a0*/
              }
            }
            v29 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)( /*0x5c7593*/
                    reference,
                    0);
            v30 = v54-- == 1; /*0x5c7595*/
            v49 = v29; /*0x5c759a*/
          }
          while ( !v30 ); /*0x5c759e*/
          if ( arg0 ) /*0x5c75ac*/
          {
            v31 = reference->vtbl->super.super.super.GetNiNode(reference); /*0x5c75c0*/
            if ( v31 ) /*0x5c75c4*/
            {
              if ( v31->vtbl->super.super.Unk_02((NiObject *)v31) ) /*0x5c75d1*/
              {
                v32 = 0; /*0x5c75e1*/
                if ( PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0) ) /*0x5c75e4*/
                {
                  if ( *((_DWORD *)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0) + 0x26) ) /*0x5c75f9*/
                    v32 = *(_DWORD *)(*((_DWORD *)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0) + 0x26) /*0x5c7613*/
                                    + 0x7C);
                }
                v43 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)( /*0x5c7628*/
                                      reference,
                                      0);
                ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x5c762b*/
                ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v43); /*0x5c7635*/
                v44 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c764c*/
                                      reference,
                                      0);
                v34 = (void *)GetShadowSceneNode(0); /*0x5c764f*/
                ShadowSceneNode_RemoveObjectReceivers(v34, v44); /*0x5c7659*/
                v35 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)( /*0x5c766e*/
                                  reference,
                                  0);
                v36 = v35; /*0x5c7670*/
                if ( v35 ) /*0x5c7674*/
                {
                  if ( v35[7] ) /*0x5c7676*/
                  {
                    sub_716620(v35, v32); /*0x5c767e*/
                    (*(void (__thiscall **)(_DWORD, double *, _DWORD *))(*(_DWORD *)v36[7] + 0x88))(v36[7], &v57, v36); /*0x5c7697*/
                    NiPointerSlot_Release((NiD3DVertexShader *)&v57); /*0x5c769d*/
                  }
                }
                v37 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c76b2*/
                                  reference,
                                  0);
                v38 = v37; /*0x5c76b4*/
                if ( v37 ) /*0x5c76b8*/
                {
                  if ( v37[7] ) /*0x5c76ba*/
                  {
                    sub_716620(v37, v32); /*0x5c76c2*/
                    (*(void (__thiscall **)(_DWORD, double *, _DWORD *))(*(_DWORD *)v38[7] + 0x88))(v38[7], &v57, v38); /*0x5c76db*/
                    NiPointerSlot_Release((NiD3DVertexShader *)&v57); /*0x5c76e1*/
                  }
                }
              }
            }
            reference->super.super.super.process->Unk_17(reference->super.super.super.process); /*0x5c76f4*/
            TESNPC_ClearFaceGenNodes(v3); /*0x5c76f8*/
            FaceGenRenderState_Construct(v63); /*0x5c7704*/
            TESRace_BuildFaceGenRenderState((int *)v3[9].member.modlist.data, (int)v3, (int)v63); /*0x5c7720*/
            v39 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.Unk_4C)(reference); /*0x5c773d*/
            BSFaceGen_ApplyHeadParametersToNode(v39, 0); /*0x5c7740*/
            v40 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.Unk_4D)(reference); /*0x5c7760*/
            BSFaceGen_ApplyHeadParametersToNode(v40, 0); /*0x5c7763*/
            LOBYTE(v64) = 2; /*0x5c7772*/
            FaceGenRenderState_Destruct(&v62); /*0x5c777a*/
          }
          LOBYTE(v64) = 1; /*0x5c7790*/
          _LN21((char *)v61, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c7798*/
          LOBYTE(v64) = 0; /*0x5c77ae*/
          _LN21((char *)v60, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c77b6*/
          v64 = 0xFFFFFFFF; /*0x5c77c9*/
          _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c77d4*/
        }
      }
    }
  }
}
