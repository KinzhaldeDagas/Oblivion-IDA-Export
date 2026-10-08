void __usercall sub_5BA4D0(double a1@<st2>, double st6_0@<st1>, char a3)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  int ParentMenu; // edi
  int v6; // eax
  double v7; // st7
  _DWORD *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // ecx
  TESWorldSpace *WorldSpace; // eax
  float y; // edx
  TESWorldSpace *v12; // esi
  bool v13; // zf
  float z; // eax
  void *DwordAtOffset40; // eax
  _DWORD *v16; // ecx
  int *v17; // ebx
  int v18; // esi
  BSExtraDataVtbl *v19; // eax
  int v20; // eax
  PlayerCharacter *v21; // ecx
  ExtraDataList *v22; // eax
  int v23; // ebp
  BSExtraDataVtbl *v24; // eax
  BSExtraDataVtbl *v25; // eax
  unsigned __int16 *v26; // eax
  TESModel *v27; // eax
  char *ModelPath; // eax
  int *v29; // ebx
  int v30; // esi
  _BYTE *v31; // ebp
  int v32; // eax
  PlayerCharacter *v33; // ecx
  ExtraDataList *v34; // eax
  int v35; // ebp
  TeleportData *TeleportData; // eax
  TESForm *v37; // eax
  const char *NameForForm; // eax
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // ecx
  int v42; // eax
  int v43; // eax
  float v44; // ecx
  _DWORD *v45; // edx
  UInt32 v46; // eax
  PlayerCharacter *v47; // esi
  float v48; // edx
  float v49; // eax
  TESForm *unk638; // ebx
  int v51; // eax
  _DWORD *v52; // edx
  float v53; // ecx
  UInt32 v54; // eax
  double v55; // st7
  Tile *v56; // eax
  Tile *v57; // ebx
  int v58; // esi
  int v59; // ebp
  ExtraDataList *v60; // eax
  double v61; // st7
  double v62; // st7
  unsigned int v63; // esi
  NiObject *v64; // eax
  float *v65; // eax
  NiAVObject *v66; // ecx
  double Float; // st7
  int v68; // eax
  _DWORD *v69; // ecx
  int v70; // ebp
  double v71; // st7
  int v72; // eax
  float v73; // esi
  int v74; // ebx
  double v75; // st7
  double v76; // st7
  Tile *v77; // esi
  Tile *v78; // ecx
  Tile *v79; // edi
  int v80; // [esp+10h] [ebp-A4h]
  char v81; // [esp+14h] [ebp-A0h]
  float v82; // [esp+2Ch] [ebp-88h]
  float v83; // [esp+2Ch] [ebp-88h]
  float v84; // [esp+2Ch] [ebp-88h]
  NiPoint3 v85; // [esp+44h] [ebp-70h] BYREF
  UInt32 unk634; // [esp+50h] [ebp-64h]
  float x_low; // [esp+54h] [ebp-60h]
  BSStringT v88; // [esp+58h] [ebp-5Ch] BYREF
  BSStringT a2; // [esp+60h] [ebp-54h] BYREF
  float v90; // [esp+68h] [ebp-4Ch]
  NiPoint3 v91; // [esp+6Ch] [ebp-48h] BYREF
  int v92[3]; // [esp+78h] [ebp-3Ch] BYREF
  _BYTE v93[48]; // [esp+84h] [ebp-30h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FF); /*0x5ba4fc*/
  v4 = OpenMenuTile; /*0x5ba501*/
  if ( OpenMenuTile ) /*0x5ba50a*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5ba519*/
    if ( Tile::IsVisible(v4) || (v6 = *(_DWORD *)(ParentMenu + 0x24), v6 == 8) || v6 == 1 ) /*0x5ba52f*/
    {
      sub_5B8FC0((_DWORD **)ParentMenu, 0); /*0x5ba538*/
      if ( Shared_GetDwordAtOffset40(reference) ) /*0x5ba543*/
      {
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFA1u, 1.0); /*0x5ba55e*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x60), 0xFA1u, fConstant_2); /*0x5ba575*/
        if ( sub_5B7550((_DWORD *)ParentMenu) ) /*0x5ba57c*/
        {
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), 0xFA1u, 1.0); /*0x5ba597*/
          v7 = fConstant_2; /*0x5ba59c*/
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), 0xFA1u, fConstant_2); /*0x5ba5ae*/
          v8 = *(_DWORD **)(*(_DWORD *)(ParentMenu + 0x68) + 0x34); /*0x5ba5b6*/
          while ( v8 ) /*0x5ba5bb*/
          {
            v9 = (void (__thiscall ***)(_DWORD, int))v8[2]; /*0x5ba5c0*/
            v8 = (_DWORD *)*v8; /*0x5ba5c8*/
            if ( v9 ) /*0x5ba5ca*/
              (**v9)(v9, 1); /*0x5ba5d2*/
          }
          NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(ParentMenu + 0x68) + 0x30)); /*0x5ba5de*/
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference); /*0x5ba5e9*/
          y = g_zeroNiPoint3.y; /*0x5ba5f4*/
          v12 = WorldSpace; /*0x5ba5fa*/
          v13 = WorldSpace == 0; /*0x5ba5fc*/
          z = g_zeroNiPoint3.z; /*0x5ba5fe*/
          a2.m_data = (char *)LODWORD(g_zeroNiPoint3.x); /*0x5ba603*/
          *(float *)&a2.m_dataLen = y; /*0x5ba607*/
          v90 = z; /*0x5ba60b*/
          if ( v13 ) /*0x5ba60f*/
          {
            DwordAtOffset40 = (void *)Shared_GetDwordAtOffset40(reference); /*0x5ba61d*/
            v12 = (TESWorldSpace *)sub_44EE00(DwordAtOffset40, (float *)&a2, 0); /*0x5ba62e*/
          }
          v16 = *(_DWORD **)(ParentMenu + 0xC4); /*0x5ba630*/
          if ( v16 ) /*0x5ba638*/
          {
            BSSimpleList_Clear(v16); /*0x5ba63a*/
            FormHeapFree(*(_DWORD *)(ParentMenu + 0xC4)); /*0x5ba646*/
          }
          *(_DWORD *)(ParentMenu + 0xC4) = 0; /*0x5ba650*/
          if ( v12 ) /*0x5ba656*/
            *(_DWORD *)(ParentMenu + 0xC4) = TESWorldSpace_CollectPersistentCellReferences(v12); /*0x5ba65f*/
          v17 = *(int **)(ParentMenu + 0xC4); /*0x5ba665*/
          while ( v17 ) /*0x5ba66d*/
          {
            v18 = *v17; /*0x5ba673*/
            if ( !*v17 ) /*0x5ba673*/
              break; /*0x5ba677*/
            v17 = (int *)v17[1]; /*0x5ba67d*/
            v19 = sub_4D7730((_BYTE *)v18); /*0x5ba682*/
            if ( sub_42B310(v19) ) /*0x5ba689*/
            {
              if ( (*(_DWORD *)(v18 + 8) & 0x800) == 0 ) /*0x5ba69f*/
              {
                v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x174))(v18); /*0x5ba6af*/
                v85.y = *(float *)v20; /*0x5ba6b3*/
                v85.z = *(float *)(v20 + 4); /*0x5ba6bc*/
                v21 = reference; /*0x5ba6c8*/
                unk634 = *(_DWORD *)(v20 + 8); /*0x5ba6d3*/
                v22 = (ExtraDataList *)Shared_GetDwordAtOffset40(v21); /*0x5ba6d7*/
                sub_4CCE20(v22, &v85.y, v92, COERCE_FLOAT(1)); /*0x5ba6de*/
                v7 = (double)sub_4D2D00((float *)v92) * dbl_A3C770 * dbl_A3DDD8; /*0x5ba6fe*/
                v23 = Double_To_SInt32(v7); /*0x5ba709*/
                if ( v23 > 0 ) /*0x5ba70d*/
                {
                  v24 = sub_4D7730((_BYTE *)v18); /*0x5ba711*/
                  if ( !sub_42B340(v24) ) /*0x5ba718*/
                  {
                    v25 = sub_4D7730((_BYTE *)v18); /*0x5ba72e*/
                    v81 = sub_42B340(v25); /*0x5ba73c*/
                    v26 = (unsigned __int16 *)sub_4D7730((_BYTE *)v18); /*0x5ba73d*/
                    v80 = sub_42B370(v26); /*0x5ba749*/
                    v27 = (TESModel *)sub_4D7730((_BYTE *)v18); /*0x5ba74c*/
                    ModelPath = TESModel_GetModelPath(v27); /*0x5ba753*/
                    v7 = v85.y; /*0x5ba766*/
                    sub_5B87D0( /*0x5ba76d*/
                      (Menu *)ParentMenu,
                      st6_0,
                      v85.y,
                      (_DWORD *)LODWORD(v85.y),
                      (_DWORD *)LODWORD(v85.z),
                      ModelPath,
                      v80,
                      v81,
                      1,
                      1,
                      v23,
                      0,
                      0,
                      0);
                  }
                }
              }
            }
          }
          v88.m_data = 0; /*0x5ba77c*/
          v88.m_dataLen = 0; /*0x5ba780*/
          v88.m_bufLen = 0; /*0x5ba785*/
          v29 = *(int **)(ParentMenu + 0xC8); /*0x5ba78a*/
          *(_DWORD *)&v93[0x2C] = 0; /*0x5ba792*/
          while ( v29 ) /*0x5ba799*/
          {
            v30 = *v29; /*0x5ba79f*/
            if ( !*v29 ) /*0x5ba79f*/
              break; /*0x5ba7a3*/
            v29 = (int *)v29[1]; /*0x5ba7b1*/
            v31 = 0; /*0x5ba7b6*/
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x170))(v30) + 4) == 0x18 ) /*0x5ba7be*/
              v31 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x170))(v30); /*0x5ba7cc*/
            if ( (*(_DWORD *)(v30 + 8) & 0x2000) == 0 ) /*0x5ba7d7*/
            {
              if ( v31 ) /*0x5ba7df*/
              {
                if ( !sub_4B6D00(v31) ) /*0x5ba7e7*/
                {
                  v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x174))(v30); /*0x5ba7fe*/
                  v85.y = *(float *)v32; /*0x5ba802*/
                  v85.z = *(float *)(v32 + 4); /*0x5ba80b*/
                  v33 = reference; /*0x5ba817*/
                  unk634 = *(_DWORD *)(v32 + 8); /*0x5ba822*/
                  v34 = (ExtraDataList *)Shared_GetDwordAtOffset40(v33); /*0x5ba826*/
                  sub_4CCE20(v34, &v85.y, v92, COERCE_FLOAT(1)); /*0x5ba82d*/
                  v7 = (double)sub_4D2D00((float *)v92) * dbl_A3C770 * dbl_A3DDD8; /*0x5ba84d*/
                  v35 = Double_To_SInt32(v7); /*0x5ba858*/
                  if ( v35 > 0 ) /*0x5ba85c*/
                  {
                    TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)v30); /*0x5ba860*/
                    if ( TeleportData ) /*0x5ba867*/
                    {
                      sub_42B650(&TeleportData->linkedDoor, &v88); /*0x5ba870*/
                    }
                    else
                    {
                      v37 = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x170))(v30); /*0x5ba883*/
                      NameForForm = TESFullName_GetNameForForm(v37); /*0x5ba886*/
                      BSStringT_Set(&v88, NameForForm, 0); /*0x5ba893*/
                    }
                    v7 = v85.y; /*0x5ba8b9*/
                    sub_5B87D0( /*0x5ba8c0*/
                      (Menu *)ParentMenu,
                      st6_0,
                      v85.y,
                      (_DWORD *)LODWORD(v85.y),
                      (_DWORD *)LODWORD(v85.z),
                      v88.m_data,
                      0xC,
                      0,
                      1,
                      1,
                      v35,
                      0,
                      0,
                      0);
                  }
                }
              }
            }
          }
          BSSimpleList_Clear(*(_DWORD **)(ParentMenu + 0xC8)); /*0x5ba8d3*/
          sub_65D830(reference, v7); /*0x5ba8de*/
          v40 = v39; /*0x5ba8e3*/
          *(_DWORD *)(ParentMenu + 0xCC) = v39; /*0x5ba8e7*/
          while ( v40 ) /*0x5ba8ed*/
          {
            v41 = *(_DWORD **)v40; /*0x5ba8f0*/
            if ( !*(_DWORD *)v40 ) /*0x5ba8f0*/
              break; /*0x5ba8f4*/
            v42 = v41[4]; /*0x5ba8f6*/
            v40 = *(_DWORD *)(v40 + 4); /*0x5ba8fb*/
            LOBYTE(v85.x) = 1; /*0x5ba8fe*/
            if ( !v42 ) /*0x5ba903*/
            {
              sub_52B440(v41, 1); /*0x5ba907*/
              LOBYTE(v85.x) = 0; /*0x5ba90e*/
              if ( !v42 ) /*0x5ba913*/
                continue; /*0x5ba913*/
            }
            v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 0x174))(v42); /*0x5ba91f*/
            v44 = *(float *)v43; /*0x5ba921*/
            v45 = *(_DWORD **)(v43 + 4); /*0x5ba923*/
            v46 = *(_DWORD *)(v43 + 8); /*0x5ba926*/
            v85.y = v44; /*0x5ba92d*/
            LODWORD(v85.z) = v45; /*0x5ba945*/
            unk634 = v46; /*0x5ba95a*/
            sub_5B87D0( /*0x5ba961*/
              (Menu *)ParentMenu,
              st6_0,
              v85.y,
              (_DWORD *)LODWORD(v85.y),
              v45,
              0,
              0x63,
              1,
              2,
              0,
              0xFF,
              SLOBYTE(v85.x),
              1,
              0);
          }
          v47 = reference; /*0x5ba96a*/
          v48 = *(float *)&reference->unk62C; /*0x5ba976*/
          v49 = *(float *)&reference->unk630; /*0x5ba97c*/
          unk634 = reference->unk634; /*0x5ba982*/
          v85.y = v48; /*0x5ba98f*/
          v85.z = v49; /*0x5ba993*/
          if ( NiPoint3__NotEqual((NiPoint3 *)&v85.y, &g_zeroNiPoint3) ) /*0x5ba997*/
          {
            unk638 = (TESForm *)v47->unk638; /*0x5ba9a0*/
            if ( unk638 == TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)v47) ) /*0x5ba9af*/
              sub_5B87D0( /*0x5ba9dd*/
                (Menu *)ParentMenu,
                st6_0,
                v85.y,
                (_DWORD *)LODWORD(v85.y),
                (_DWORD *)LODWORD(v85.z),
                "local_set",
                0x63,
                0,
                3,
                0,
                0xFF,
                0,
                0,
                1);
            v47 = reference; /*0x5ba9e2*/
          }
          v51 = (int)v47->vtbl->super.super.super.GetPos((TESObjectREFR *)v47); /*0x5ba9f2*/
          v52 = *(_DWORD **)(v51 + 4); /*0x5ba9f4*/
          v53 = *(float *)v51; /*0x5ba9f7*/
          v54 = *(_DWORD *)(v51 + 8); /*0x5ba9f9*/
          LODWORD(v85.z) = v52; /*0x5baa14*/
          v85.y = v53; /*0x5baa23*/
          v55 = v53; /*0x5baa27*/
          unk634 = v54; /*0x5baa30*/
          *(float *)&v56 = COERCE_FLOAT( /*0x5baa34*/
                             sub_5B87D0(
                               (Menu *)ParentMenu,
                               st6_0,
                               v53,
                               (_DWORD *)LODWORD(v53),
                               v52,
                               "local_player",
                               0x62,
                               0,
                               4,
                               0,
                               0xFF,
                               0,
                               0,
                               0));
          v57 = v56; /*0x5baa39*/
          x_low = *(float *)&v56; /*0x5baa3d*/
          if ( *(float *)&v56 == 0.0 ) /*0x5baa41*/
          {
            *(_DWORD *)(ParentMenu + 0xFC) = 0; /*0x5baa52*/
          }
          else
          {
            *(float *)(ParentMenu + 0xFC) = *(float *)&v56; /*0x5baa45*/
            sub_58E870((int)v56, a1, st6_0, v55); /*0x5baa4b*/
          }
          v58 = *(_DWORD *)(ParentMenu + 0xFC); /*0x5baa5c*/
          if ( v58 ) /*0x5baa64*/
          {
            v59 = *(_DWORD *)(v58 + 0x24); /*0x5baa6a*/
            if ( v59 ) /*0x5baa6f*/
            {
              v60 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x5baa7b*/
              *(double *)&v85.y = sub_4CCE00(v60); /*0x5baa87*/
              v61 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.GetZRotation)(reference); /*0x5baa99*/
              v85.x = v61 + *(double *)&v85.y; /*0x5baaa4*/
              v82 = -v85.x; /*0x5baaae*/
              NiMatrix33_InitRotationY((NiMatrix33 *)v93, v82); /*0x5baab1*/
              v85.x = Tile_GetFloat((_DWORD *)v58, 0xFCB) * dbl_A2FAA0; /*0x5baacf*/
              v62 = Tile_GetFloat((_DWORD *)v58, 0xFCA) * dbl_A2FAA0; /*0x5baad8*/
              *(_BYTE *)(v58 + 6) = 1; /*0x5baade*/
              v63 = 0; /*0x5baae2*/
              v13 = *(_WORD *)(v59 + 0xB8) == 0; /*0x5baae4*/
              v85.y = v62; /*0x5baaeb*/
              if ( !v13 ) /*0x5baaef*/
              {
                do /*0x5bab55*/
                {
                  if ( *(unsigned __int16 *)(v59 + 0xB6) > v63 ) /*0x5baafa*/
                    v64 = *(NiObject **)(*(_DWORD *)(v59 + 0xB0) + 4 * v63); /*0x5bab06*/
                  else
                    v64 = 0; /*0x5baafc*/
                  v65 = (float *)NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v64); /*0x5bab0f*/
                  if ( v65 ) /*0x5bab19*/
                  {
                    v91.x = v85.x; /*0x5bab24*/
                    v91.y = 0.0; /*0x5bab2f*/
                    v91.z = -v85.y; /*0x5bab40*/
                    sub_5B6860(v65, (NiTransform *)v93, &v91, &g_zeroNiPoint3.x); /*0x5bab44*/
                  }
                  ++v63; /*0x5bab50*/
                }
                while ( v63 < *(unsigned __int16 *)(v59 + 0xB8) ); /*0x5bab55*/
              }
              if ( !v57 ) /*0x5bab59*/
                goto LABEL_66; /*0x5bab59*/
              v66 = *((NiAVObject **)v57 + 9); /*0x5bab5f*/
              if ( v66 ) /*0x5bab64*/
                NiAVObject_UpdateNiAVObject(v66, 0.0, 1); /*0x5bab6e*/
            }
          }
          if ( v57 ) /*0x5bab75*/
          {
            if ( a3 ) /*0x5bab83*/
            {
              Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x64), 0xFAE); /*0x5bab91*/
              v68 = Double_To_SInt32(Float); /*0x5bab96*/
              v69 = *(_DWORD **)(ParentMenu + 0x64); /*0x5bab9b*/
              v70 = v68; /*0x5bab9e*/
              LODWORD(v85.y) = v68; /*0x5baba5*/
              v71 = Tile_GetFloat(v69, 0xFAF); /*0x5baba9*/
              v72 = Double_To_SInt32(v71); /*0x5babae*/
              v73 = x_low; /*0x5babb7*/
              v74 = v72; /*0x5babbb*/
              v85.y = (float)SLODWORD(v85.y); /*0x5babc2*/
              LODWORD(v85.x) = v72; /*0x5babc8*/
              v75 = Tile_GetFloat((_DWORD *)LODWORD(x_low), 0xFAD); /*0x5babcc*/
              v85.y = v85.y - v75; /*0x5babdc*/
              x_low = (float)SLODWORD(v85.x); /*0x5babe4*/
              v76 = Tile_GetFloat((_DWORD *)LODWORD(v73), 0xFAC); /*0x5babe8*/
              v77 = *(Tile **)(ParentMenu + 0x60); /*0x5babf1*/
              x_low = x_low - v76; /*0x5babf7*/
              Tile_SetFloat(v77, 0xFB8u, v85.y); /*0x5bac07*/
              Tile_SetFloat(v77, 0xFB9u, x_low); /*0x5bac1b*/
              v78 = *(Tile **)(ParentMenu + 0x70); /*0x5bac20*/
              LODWORD(x_low) = v70 / 2; /*0x5bac2a*/
              v83 = (float)(v70 / 2); /*0x5bac33*/
              Tile_SetFloat(v78, 0xFAEu, v83); /*0x5bac3b*/
              v79 = *(Tile **)(ParentMenu + 0x70); /*0x5bac40*/
              LODWORD(x_low) = v74 / 2; /*0x5bac4a*/
              v84 = (float)(v74 / 2); /*0x5bac55*/
              Tile_SetFloat(v79, 0xFAFu, v84); /*0x5bac5d*/
            }
          }
LABEL_66:
          FormHeapFree((unsigned int)v88.m_data); /*0x5bac62*/
          return; /*0x5bac82*/
        }
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), 0xFA1u, 1.0); /*0x5bac8f*/
      }
    }
  }
}
