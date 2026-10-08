void __usercall ContainerMenu_Update(double a1@<st2>, double st6_0@<st1>)
{
  NiGeometry *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v4; // ebx
  TESObjectREFR *v5; // eax
  char v6; // dl
  TESObjectREFR *v7; // esi
  BSShader *TotalEntryCountForITem; // edi
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v10; // ebp
  int v11; // eax
  double GameHour; // st7
  Actor *v13; // edi
  int v14; // edx
  Actor *v15; // eax
  int v16; // edx
  NiPointerList_Node_BSImageSpaceShader *end; // edi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  bool v22; // cl
  BSImageSpaceShader *v23; // edi
  int v24; // eax
  bool v25; // zf
  int v26; // ecx
  bool v27; // cc
  Tile *altActiveTile; // ecx
  Tile *v29; // ecx
  _DWORD *v30; // esi
  Tile *v31; // edi
  double Float; // st7
  UInt32 v33; // eax
  _DWORD *v34; // ecx
  EntryData *v35; // edi
  _DWORD *v36; // edx
  BSShader *v37; // eax
  BSShader *v38; // esi
  int v39; // eax
  NiPointerList_Node_BSImageSpaceShader *v40; // eax
  CHAR *v41; // eax
  int v42; // ebp
  Tile *v43; // esi
  CHAR *v44; // eax
  char *v45; // eax
  BSStringT *v46; // eax
  BSStringT *v47; // esi
  char *v48; // eax
  char *v49; // eax
  char *v50; // eax
  char *v51; // eax
  char *v52; // eax
  unsigned __int8 *v53; // ebp
  char *v54; // eax
  Tile *v55; // esi
  double v56; // st7
  _DWORD *v57; // esi
  _DWORD *v58; // edi
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  char *v61; // eax
  char *v62; // eax
  char *v63; // eax
  char *v64; // eax
  char *v65; // eax
  char *v66; // eax
  unsigned __int8 *v67; // ebp
  char *v68; // eax
  BSTextureManager *v69; // ecx
  unsigned __int8 *v70; // eax
  unsigned __int8 *v71; // edi
  _DWORD *v72; // edi
  _DWORD *v73; // eax
  int v74; // ecx
  unsigned int **data; // esi
  int v76; // edx
  unsigned int *v77; // edi
  unsigned __int8 *v78; // eax
  Tile *unk10; // esi
  Actor *v80; // edi
  char *Name; // eax
  double v82; // st7
  void *v83; // [esp-4h] [ebp-188h]
  signed int v84; // [esp+4h] [ebp-180h]
  TESForm *v85; // [esp+8h] [ebp-17Ch]
  double _8a; // [esp+8h] [ebp-17Ch]
  double _8b; // [esp+8h] [ebp-17Ch]
  float a2f; // [esp+Ch] [ebp-178h]
  float a2g; // [esp+Ch] [ebp-178h]
  float a2h; // [esp+Ch] [ebp-178h]
  float a2i; // [esp+Ch] [ebp-178h]
  float a2j; // [esp+Ch] [ebp-178h]
  float a2k; // [esp+Ch] [ebp-178h]
  float a2l; // [esp+Ch] [ebp-178h]
  float a2m; // [esp+Ch] [ebp-178h]
  float a2n; // [esp+Ch] [ebp-178h]
  float a2o; // [esp+Ch] [ebp-178h]
  float a2p; // [esp+Ch] [ebp-178h]
  float a2q; // [esp+Ch] [ebp-178h]
  float a2r; // [esp+Ch] [ebp-178h]
  float a2s; // [esp+Ch] [ebp-178h]
  float a2t; // [esp+Ch] [ebp-178h]
  float a2u; // [esp+Ch] [ebp-178h]
  float a2v; // [esp+Ch] [ebp-178h]
  float a2w; // [esp+Ch] [ebp-178h]
  float a2x; // [esp+Ch] [ebp-178h]
  _DWORD *v107; // [esp+10h] [ebp-174h]
  unsigned __int8 *v108; // [esp+24h] [ebp-160h] BYREF
  int a3; // [esp+28h] [ebp-15Ch]
  _DWORD *p_vtbl; // [esp+2Ch] [ebp-158h]
  char v111; // [esp+33h] [ebp-151h]
  _DWORD *p_vftable; // [esp+34h] [ebp-150h]
  _DWORD *v113; // [esp+38h] [ebp-14Ch] BYREF
  _DWORD *p_next; // [esp+3Ch] [ebp-148h]
  NiTPointerList__BSImageSpaceShader v115; // [esp+40h] [ebp-144h] BYREF
  Actor *v116; // [esp+5Ch] [ebp-128h]
  Tile *v117; // [esp+60h] [ebp-124h]
  float HealthFracOrUses; // [esp+64h] [ebp-120h]
  float v119; // [esp+68h] [ebp-11Ch] BYREF
  float v120; // [esp+6Ch] [ebp-118h] BYREF
  char v121[32]; // [esp+70h] [ebp-114h] BYREF
  unsigned int v122; // [esp+180h] [ebp-4h]

  OpenMenuTile = (NiGeometry *)Menu_GetOpenMenuTile(0x3F0); /*0x599300*/
  v115.unk10 = OpenMenuTile; /*0x59930c*/
  if ( OpenMenuTile ) /*0x599310*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x599318*/
    v4 = ParentMenu; /*0x599323*/
    if ( reference ) /*0x59931d*/
    {
      v5 = *(TESObjectREFR **)(ParentMenu + 0x44); /*0x59932b*/
      if ( v5 ) /*0x599330*/
      {
        v6 = *(_BYTE *)(v4 + 0x61); /*0x599339*/
        v7 = *(TESObjectREFR **)(v4 + 0x44); /*0x59933d*/
        v117 = *(Tile **)(v4 + 0x30); /*0x59933f*/
        p_vtbl = &v5->vtbl; /*0x599346*/
        TotalEntryCountForITem = (BSShader *)TESObjectREF_GetTotalEntryCountForITem(v5, v6); /*0x599355*/
        v83 = *(void **)(v4 + 0x44); /*0x599360*/
        v115.unk18 = TotalEntryCountForITem; /*0x599361*/
        v116 = (Actor *)OblivionDynamicCast( /*0x59936d*/
                          v83,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
        sub_5B3E50(); /*0x599371*/
        memset(&v115.start, 0, 0xC); /*0x59937a*/
        v115.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<ContainerItemAndIndex *>::`vftable'; /*0x599382*/
        v122 = 0; /*0x59938a*/
        p_vftable = 0; /*0x599391*/
        do /*0x599654*/
        {
          a3 = 0; /*0x5993a2*/
          if ( (int)TotalEntryCountForITem > 0 ) /*0x5993a6*/
          {
            while ( 1 ) /*0x5993b0*/
            {
              if ( v7 == (TESObjectREFR *)reference ) /*0x5993b6*/
                InventoryEntryOfItem = GetInventoryEntryOfItem(v7, (TESForm *)a3, 0); /*0x5993be*/
              else
                InventoryEntryOfItem = GetInventoryEntryOfItem(v7, (TESForm *)a3, *(_BYTE *)(v4 + 0x61)); /*0x5993cc*/
              v10 = (unsigned int)InventoryEntryOfItem; /*0x5993d1*/
              if ( !InventoryEntryOfItem ) /*0x5993d5*/
                goto LABEL_31; /*0x5993d5*/
              if ( (v7 == (TESObjectREFR *)reference || !*(_BYTE *)(v4 + 0x63)) && !*(_BYTE *)(v4 + 0x61) ) /*0x5993eb*/
                break; /*0x5993eb*/
              v11 = 0; /*0x5993f5*/
              if ( *(_BYTE *)(v4 + 0x63) ) /*0x5993f7*/
              {
                GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x599401*/
                v11 = Double_To_SInt32(GameHour); /*0x599406*/
              }
              v13 = v116; /*0x59940f*/
              v111 = sub_4854F0((EntryData *)v10, v116, *(_BYTE *)(v4 + 0x61), v11, 0, 0); /*0x599423*/
              if ( !v111 ) /*0x599427*/
                goto LABEL_22; /*0x599427*/
              if ( v7 != (TESObjectREFR *)reference ) /*0x59942f*/
              {
                if ( *(_BYTE *)(v4 + 0x61) /*0x59944e*/
                  && sub_488E50((void **)v10, (TESObjectREFR *)1, (int)v13, 1, *(float *)&v107) <= dbl_A68FE0 )
                {
                  goto LABEL_22; /*0x59944e*/
                }
                if ( v7 != (TESObjectREFR *)reference ) /*0x599456*/
                  goto LABEL_26; /*0x599456*/
              }
              if ( !*(_BYTE *)(v4 + 0x61) /*0x599466*/
                || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 8) + 0x78))(*(_DWORD *)(v10 + 8)) )
              {
                goto LABEL_26; /*0x59946a*/
              }
LABEL_22:
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, v14); /*0x59946c*/
              FormHeapFree(v10); /*0x599474*/
LABEL_50:
              if ( ++a3 >= (int)v115.unk18 ) /*0x599628*/
                goto LABEL_51; /*0x599628*/
            }
            v15 = v116; /*0x599483*/
            if ( v7 == (TESObjectREFR *)reference ) /*0x599487*/
              v15 = (Actor *)reference; /*0x599489*/
            v111 = sub_4854F0((EntryData *)v10, v15, 0, 1, 1, 0); /*0x59949b*/
LABEL_26:
            if ( v111 ) /*0x5994a4*/
            {
              if ( (p_vftable == (_DWORD *)1 || *(_BYTE *)(v4 + 0x61)) && sub_469980(*(_DWORD *)(v10 + 8)) ) /*0x5994b7*/
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, v16); /*0x5994c5*/
                FormHeapFree(v10); /*0x5994cb*/
                v10 = 0; /*0x5994d3*/
              }
LABEL_31:
              end = v115.end; /*0x5994d5*/
              v113 = 0; /*0x5994db*/
              if ( v10 ) /*0x5994e3*/
              {
                v113 = (_DWORD *)sub_485150((EntryData *)v10); /*0x5994ec*/
                sub_5AA210(&v113, *(_DWORD *)(v10 + 8)); /*0x5994f9*/
              }
              if ( end ) /*0x599503*/
              {
                while ( v10 ) /*0x599512*/
                {
                  vftable = end->data->__vftable; /*0x59951d*/
                  p_next = &end->next; /*0x59951f*/
                  end = end->prev; /*0x599523*/
                  v115.renderTarget = sub_485150((EntryData *)vftable); /*0x59952d*/
                  sub_5AA210(&v115.renderTarget, (int)vftable->super.super.super.super.No08); /*0x59953a*/
                  HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)v10, 1, 0, 0.0); /*0x599551*/
                  *(float *)&v108 = ContainerEntryExtraData_GetHealthFracOrUses( /*0x599564*/
                                      (void **)&vftable->super.super.super.super.super.Destructor,
                                      1,
                                      0,
                                      0.0);
                  v19 = sub_584500((char *)(v4 + 0x60), (EntryData *)vftable, (EntryData *)v10); /*0x59956d*/
                  if ( (int)v115.renderTarget < (int)v113 ) /*0x59957a*/
                    goto LABEL_45; /*0x59957a*/
                  if ( (_DWORD *)v115.renderTarget == v113 ) /*0x59957c*/
                  {
                    if ( v19 < 0 ) /*0x599580*/
                    {
                      v39 = FormHeapAlloc(0xCu); /*0x5997c2*/
                      if ( v39 ) /*0x5997cc*/
                      {
                        v25 = p_vftable == 0; /*0x5997d2*/
                        *(_DWORD *)(v39 + 4) = a3; /*0x5997d7*/
                        *(_DWORD *)v39 = v10; /*0x5997e1*/
                        *(_BYTE *)(v39 + 8) = v25; /*0x5997e3*/
                        v108 = (unsigned __int8 *)v39; /*0x5997e6*/
                      }
                      else
                      {
                        *(float *)&v108 = 0.0; /*0x5997fb*/
                      }
                      sub_5986D0(&v115, (int)p_next, &v108); /*0x5997f0*/
                      break; /*0x5997f0*/
                    }
                    if ( !v19 ) /*0x599586*/
                    {
                      st6_0 = *(float *)&v108; /*0x59958c*/
                      if ( *(float *)&v108 > (double)HealthFracOrUses ) /*0x599597*/
                      {
LABEL_45:
                        v24 = FormHeapAlloc(0xCu); /*0x5995d6*/
                        if ( v24 ) /*0x5995e2*/
                        {
                          v25 = p_vftable == 0; /*0x5995e4*/
                          v26 = a3; /*0x5995e9*/
                          *(_DWORD *)v24 = v10; /*0x5995ed*/
                          *(_DWORD *)(v24 + 4) = v26; /*0x5995f2*/
                          *(_BYTE *)(v24 + 8) = v25; /*0x5995f5*/
                        }
                        else
                        {
                          v24 = 0; /*0x5995fa*/
                        }
                        v108 = (unsigned __int8 *)v24; /*0x599600*/
                        sub_5986D0(&v115, (int)p_next, &v108); /*0x59960e*/
                        break; /*0x59960e*/
                      }
                    }
                  }
                  if ( !end ) /*0x59959b*/
                  {
                    v7 = (TESObjectREFR *)p_vtbl; /*0x5995a1*/
                    goto LABEL_42; /*0x5995a1*/
                  }
                }
                v7 = (TESObjectREFR *)p_vtbl; /*0x599613*/
              }
              else
              {
LABEL_42:
                if ( v10 ) /*0x5995a7*/
                {
                  v20 = FormHeapAlloc(0xCu); /*0x5995ab*/
                  if ( v20 ) /*0x5995b5*/
                  {
                    v21 = a3; /*0x5995c0*/
                    v22 = p_vftable == 0; /*0x5995c4*/
                    *(_DWORD *)v20 = v10; /*0x5995c7*/
                    *(_DWORD *)(v20 + 4) = v21; /*0x5995c9*/
                    *(_BYTE *)(v20 + 8) = v22; /*0x5995cc*/
                    v23 = (BSImageSpaceShader *)v20; /*0x5995cf*/
                  }
                  else
                  {
                    v23 = 0; /*0x59980a*/
                  }
                  v40 = v115.__vftable->AllocateNode(&v115); /*0x599817*/
                  v40->data = v23; /*0x599819*/
                  v40->prev = 0; /*0x59981c*/
                  v40->next = v115.start; /*0x599827*/
                  if ( v115.start ) /*0x59982f*/
                  {
                    v115.start->prev = v40; /*0x599831*/
                    ++v115.numItems; /*0x599834*/
                  }
                  else
                  {
                    ++v115.numItems; /*0x599842*/
                    v115.end = v40; /*0x599847*/
                  }
                  v115.start = v40; /*0x599839*/
                }
              }
              goto LABEL_50; /*0x599613*/
            }
            goto LABEL_22; /*0x5994a4*/
          }
LABEL_51:
          p_vtbl = &reference->vtbl; /*0x59962e*/
          v7 = (TESObjectREFR *)p_vtbl; /*0x59962e*/
          TotalEntryCountForITem = (BSShader *)TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)p_vtbl, 0); /*0x599640*/
          v27 = (int)p_vftable + 1 < 2; /*0x599649*/
          v115.unk18 = TotalEntryCountForITem; /*0x59964c*/
          p_vftable = (_DWORD *)((char *)p_vftable + 1); /*0x599650*/
        }
        while ( v27 ); /*0x599654*/
        altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile; /*0x599662*/
        if ( altActiveTile ) /*0x59966d*/
        {
          if ( Tile_GetFloat(altActiveTile, 0xFA8) == dbl_A6B620 ) /*0x599684*/
          {
            v29 = *(Tile **)(v4 + 0x34); /*0x599686*/
            *(_DWORD *)(v4 + 0x3C) = 0; /*0x599694*/
            Tile_SetFloat(v29, (_DWORD *)0xFA1, 1.0); /*0x599697*/
            InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5996a7*/
          }
        }
        v30 = *((_DWORD **)v117 + 0xD); /*0x5996b1*/
        while ( v30 ) /*0x5996b6*/
        {
          v31 = (Tile *)v30[2]; /*0x5996b8*/
          v30 = (_DWORD *)*v30; /*0x5996be*/
          if ( sub_588B50(v31, 0xFB8) ) /*0x5996c7*/
            Tile_SetFloat(v31, (_DWORD *)0xFAA, flt_A690E0); /*0x5996e1*/
        }
        Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFAF, flt_A53954); /*0x5996fe*/
        Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB0, flt_A53954); /*0x599715*/
        Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB1, flt_A53954); /*0x59972c*/
        Float = flt_A53954; /*0x599731*/
        Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB2, flt_A53954); /*0x599743*/
        a3 = 0xFFFFFFFF; /*0x59974e*/
        v115.unk18 = 0; /*0x599756*/
        p_next = &v115.start->next; /*0x59975a*/
        if ( v115.start ) /*0x59975e*/
        {
          while ( 1 ) /*0x59976b*/
          {
            v33 = p_next[2]; /*0x59976b*/
            v34 = (_DWORD *)*p_next; /*0x59976d*/
            v35 = *(EntryData **)v33; /*0x59976f*/
            v36 = *(_DWORD **)(v33 + 4); /*0x599771*/
            v115.renderTarget = v33; /*0x599774*/
            LOBYTE(v33) = *(_BYTE *)(v33 + 8); /*0x599778*/
            p_next = v34; /*0x59977b*/
            v113 = v36; /*0x599781*/
            LOBYTE(p_vtbl) = v33; /*0x599785*/
            v37 = (BSShader *)sub_485150(v35); /*0x599789*/
            v38 = v37; /*0x59978e*/
            p_vftable = &v37->__vftable; /*0x599794*/
            if ( v37 != v115.unk18 ) /*0x599798*/
              break; /*0x599798*/
LABEL_80:
            v41 = sub_4851B0((ExtraDataList ***)v35, (TESObjectREFR *)reference); /*0x5998a4*/
            _sprintf(v121, "%s\\%s", "Icons", v41); /*0x5998c2*/
            v42 = *((_DWORD *)v117 + 0xE); /*0x5998cb*/
            if ( v42 ) /*0x5998d3*/
            {
              while ( 1 ) /*0x5998e0*/
              {
                v43 = *(Tile **)(v42 + 8); /*0x5998e0*/
                v42 = *(_DWORD *)(v42 + 4); /*0x5998e6*/
                Float = Tile_GetFloat(v43, 0xFBC); /*0x5998f0*/
                HealthFracOrUses = COERCE_FLOAT(Double_To_SInt32(Float)); /*0x599901*/
                if ( sub_588C10(v43, 0xFAF) ) /*0x599905*/
                {
                  if ( sub_488DF0(*(EntryData **)v115.renderTarget) ) /*0x599914*/
                  {
                    Float = Tile_GetFloat(v43, 0xFAA); /*0x599924*/
                    if ( Float == flt_A690E0 ) /*0x599934*/
                    {
                      *(float *)&v108 = COERCE_FLOAT(sub_488DF0(*(EntryData **)v115.renderTarget)); /*0x599948*/
                      v44 = sub_588C10(v43, 0xFAF); /*0x59994c*/
                      if ( !_mbscmp((const unsigned __int8 *)v44, v108) /*0x599973*/
                        && LODWORD(HealthFracOrUses) == ((_BYTE)p_vtbl != 0) + 1 )
                      {
                        break; /*0x599973*/
                      }
                    }
                  }
                }
                if ( !v42 ) /*0x59997b*/
                  goto LABEL_87; /*0x59997b*/
              }
              v61 = sub_488DF0(v35); /*0x599b81*/
              Tile_SetString(v43, (_DWORD *)0xFAF, v61); /*0x599b8e*/
              HIDWORD(_8b) = p_vtbl; /*0x599b9e*/
              LODWORD(_8b) = *(_DWORD *)(v4 + 0x44); /*0x599b9f*/
              v62 = (char *)sub_48F450(v35, 1, 1, (TESObjectREFR *)*(unsigned __int8 *)(v4 + 0x61), _8b); /*0x599ba7*/
              Tile_SetString(v43, (_DWORD *)0xFB0, v62); /*0x599bb4*/
              v63 = (char *)sub_48F450(v35, 2, 1, 0, 0.0); /*0x599bc5*/
              Tile_SetString(v43, (_DWORD *)0xFB1, v63); /*0x599bd2*/
              v64 = (char *)sub_48F450(v35, 3, 1, 0, 0.0); /*0x599be3*/
              Tile_SetString(v43, (_DWORD *)0xFB2, v64); /*0x599bf0*/
              v65 = (char *)sub_48F450(v35, 4, 1, 0, 0.0); /*0x599c01*/
              Tile_SetString(v43, (_DWORD *)0xFB3, v65); /*0x599c0e*/
              Tile_SetString(v43, (_DWORD *)0xFB4, v121); /*0x599c1f*/
              v66 = (char *)sub_48F450(v35, 0, 1, 0, 0.0); /*0x599c30*/
              Tile_SetString(v43, (_DWORD *)0xFB5, v66); /*0x599c3d*/
              a2o = (float)(int)p_vftable; /*0x599c49*/
              Tile_SetFloat(v43, (_DWORD *)0xFB7, a2o); /*0x599c51*/
              v108 = (unsigned __int8 *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v35, 0) != 0) + 1); /*0x599c68*/
              a2p = (float)(int)v108; /*0x599c73*/
              Tile_SetFloat(v43, (_DWORD *)0xFB8, a2p); /*0x599c7b*/
              a2q = (float)(int)v113; /*0x599c87*/
              Tile_SetFloat(v43, (_DWORD *)0xFB9, a2q); /*0x599c8f*/
              a2r = (float)a3; /*0x599c9b*/
              Tile_SetFloat(v43, (_DWORD *)0xFAA, a2r); /*0x599ca3*/
              v67 = (unsigned __int8 *)sub_485C00(v35); /*0x599caf*/
              v108 = v67; /*0x599cb1*/
              a2s = (float)(int)v67; /*0x599cbc*/
              Tile_SetFloat(v43, (_DWORD *)0xFBA, a2s); /*0x599cc4*/
              v68 = (char *)sub_48F6A0((int)v67); /*0x599ccc*/
              Tile_SetString(v43, (_DWORD *)0xFBB, v68); /*0x599cd9*/
              v108 = (unsigned __int8 *)(((_BYTE)p_vtbl != 0) + 1); /*0x599cea*/
              Float = (double)(int)v108; /*0x599cee*/
              a2t = Float; /*0x599cf5*/
              Tile_SetFloat(v43, (_DWORD *)0xFBC, a2t); /*0x599cfd*/
              v69 = (BSTextureManager *)(*((_DWORD *)v43 + 4) + 0x30); /*0x599d05*/
              v70 = *(unsigned __int8 **)(*((_DWORD *)v43 + 4) + 0x34); /*0x599d08*/
              if ( v70 ) /*0x599d0d*/
              {
                while ( 1 ) /*0x599d10*/
                {
                  v25 = v43 == *((Tile **)v70 + 2); /*0x599d10*/
                  v71 = v70; /*0x599d16*/
                  v70 = *(unsigned __int8 **)v70; /*0x599d18*/
                  if ( v25 ) /*0x599d1a*/
                    break; /*0x599d1a*/
                  if ( !v70 ) /*0x599d1e*/
                    goto LABEL_102; /*0x599d1e*/
                }
              }
              else
              {
LABEL_102:
                v71 = 0; /*0x599d20*/
              }
              v108 = v71; /*0x599d24*/
              if ( v71 ) /*0x599d28*/
                NiTPointerList_RemoveNode(v69, (NiTPointerList_Node_void **)&v108); /*0x599d2f*/
              v72 = (_DWORD *)(*((_DWORD *)v43 + 4) + 0x30); /*0x599d37*/
              v73 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v72 + 4))(v72); /*0x599d41*/
              v73[2] = v43; /*0x599d43*/
              v73[1] = 0; /*0x599d46*/
              *v73 = v72[1]; /*0x599d50*/
              v74 = v72[1]; /*0x599d52*/
              if ( v74 ) /*0x599d57*/
              {
                *(_DWORD *)(v74 + 4) = v73; /*0x599d59*/
                ++v72[3]; /*0x599d5c*/
              }
              else
              {
                ++v72[3]; /*0x599d68*/
                v72[2] = v73; /*0x599d6c*/
              }
              v72[1] = v73; /*0x599d60*/
            }
            else
            {
LABEL_87:
              v85 = (TESForm *)a3; /*0x599981*/
              v84 = sub_485150(v35); /*0x59998f*/
              v45 = sub_488DF0(v35); /*0x599992*/
              v46 = sub_599070((_DWORD *)v4, a1, st6_0, Float, v121, v45, v84, (signed int)v85, 0x33); /*0x59999f*/
              HIDWORD(_8a) = p_vtbl; /*0x5999ab*/
              v47 = v46; /*0x5999ac*/
              LODWORD(_8a) = *(_DWORD *)(v4 + 0x44); /*0x5999b2*/
              v48 = (char *)sub_48F450(v35, 1, 1, (TESObjectREFR *)*(unsigned __int8 *)(v4 + 0x61), _8a); /*0x5999ba*/
              Tile_SetString(v47, (_DWORD *)0xFB0, v48); /*0x5999c7*/
              v49 = (char *)sub_48F450(v35, 2, 1, 0, 0.0); /*0x5999d8*/
              Tile_SetString(v47, (_DWORD *)0xFB1, v49); /*0x5999e5*/
              v50 = (char *)sub_48F450(v35, 3, 1, 0, 0.0); /*0x5999f6*/
              Tile_SetString(v47, (_DWORD *)0xFB2, v50); /*0x599a03*/
              v51 = (char *)sub_48F450(v35, 4, 1, 0, 0.0); /*0x599a14*/
              Tile_SetString(v47, (_DWORD *)0xFB3, v51); /*0x599a21*/
              v52 = (char *)sub_48F450(v35, 0, 1, 0, 0.0); /*0x599a32*/
              Tile_SetString(v47, (_DWORD *)0xFB5, v52); /*0x599a3f*/
              v108 = (unsigned __int8 *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v35, 0) != 0) + 1); /*0x599a56*/
              a2j = (float)(int)v108; /*0x599a5f*/
              Tile_SetFloat((Tile *)v47, (_DWORD *)0xFB8, a2j); /*0x599a69*/
              a2k = (float)(int)v113; /*0x599a75*/
              Tile_SetFloat((Tile *)v47, (_DWORD *)0xFB9, a2k); /*0x599a7d*/
              v108 = (unsigned __int8 *)(((_BYTE)p_vtbl != 0) + 1); /*0x599a8e*/
              a2l = (float)(int)v108; /*0x599a99*/
              Tile_SetFloat((Tile *)v47, (_DWORD *)0xFBC, a2l); /*0x599aa1*/
              v53 = (unsigned __int8 *)sub_485C00(v35); /*0x599aad*/
              v108 = v53; /*0x599aaf*/
              Float = (double)(int)v53; /*0x599ab3*/
              a2m = Float; /*0x599aba*/
              Tile_SetFloat((Tile *)v47, (_DWORD *)0xFBA, a2m); /*0x599ac2*/
              v54 = (char *)sub_48F6A0((int)v53); /*0x599aca*/
              Tile_SetString(v47, (_DWORD *)0xFBB, v54); /*0x599ad7*/
            }
            ++a3; /*0x599adc*/
            if ( !p_next ) /*0x599ae6*/
              goto LABEL_89; /*0x599ae6*/
          }
          if ( v37 == (BSShader *)1 ) /*0x5997a5*/
          {
            Float = (double)a3; /*0x5997ae*/
            a2f = Float; /*0x5997b3*/
            Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFAF, a2f); /*0x5997bb*/
          }
          else if ( v37 == (BSShader *)2 ) /*0x599857*/
          {
            Float = (double)a3; /*0x59985c*/
            a2g = Float; /*0x599861*/
            Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB0, a2g); /*0x599869*/
          }
          else if ( v37 == (BSShader *)4 ) /*0x59986e*/
          {
            Float = (double)a3; /*0x599873*/
            a2h = Float; /*0x599878*/
            Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB1, a2h); /*0x599880*/
          }
          else
          {
            if ( v37 != (BSShader *)8 ) /*0x599885*/
            {
LABEL_79:
              v115.unk18 = v38; /*0x5998a0*/
              goto LABEL_80; /*0x5998a0*/
            }
            Float = (double)a3; /*0x59988a*/
            a2i = Float; /*0x59988f*/
            Tile_SetFloat(*(Tile **)(v4 + 4), (_DWORD *)0xFB2, a2i); /*0x599897*/
          }
          ++a3; /*0x59989c*/
          goto LABEL_79; /*0x59989c*/
        }
LABEL_89:
        v55 = v117; /*0x599aec*/
        v108 = (unsigned __int8 *)(a3 - 1); /*0x599af7*/
        v56 = (double)(a3 - 1); /*0x599afb*/
        a2n = v56; /*0x599b02*/
        Tile_SetFloat(v117, (_DWORD *)0xFAE, a2n); /*0x599b0a*/
        v57 = *((_DWORD **)v55 + 0xD); /*0x599b0f*/
        while ( v57 ) /*0x599b16*/
        {
          v58 = (_DWORD *)v57[2]; /*0x599b18*/
          v57 = (_DWORD *)*v57; /*0x599b1e*/
          v56 = Tile_GetFloat(v58, 0xFAA); /*0x599b27*/
          if ( v56 == flt_A690E0 ) /*0x599b37*/
          {
            if ( v58 ) /*0x599b3b*/
              (*(void (__thiscall **)(_DWORD *, int))*v58)(v58, 1); /*0x599b45*/
          }
        }
        if ( v115.numItems ) /*0x599b4f*/
        {
          start = v115.start; /*0x599b55*/
          do /*0x599dbc*/
          {
            if ( start->data ) /*0x599b60*/
            {
              next = start->next; /*0x599b69*/
              v115.start = start->next; /*0x599b6d*/
              if ( v115.start ) /*0x599b71*/
                next->prev = 0; /*0x599b77*/
              else
                v115.end = 0; /*0x599d77*/
              data = (unsigned int **)start->data; /*0x599d7b*/
              v115.__vftable->FreeNode(&v115, (Node *)start); /*0x599d8a*/
              --v115.numItems; /*0x599d8c*/
              if ( data ) /*0x599d93*/
              {
                v77 = *data; /*0x599d95*/
                if ( *data ) /*0x599d95*/
                {
                  ContainerEntryExtraData_DestroyDataTable(*data, v76); /*0x599d9d*/
                  FormHeapFree((unsigned int)v77); /*0x599da3*/
                }
                FormHeapFree((unsigned int)data); /*0x599dac*/
              }
              start = v115.start; /*0x599db4*/
            }
          }
          while ( v115.numItems ); /*0x599dbc*/
        }
        sub_5987F0((_DWORD *)v4, v56, *(_DWORD *)(v4 + 0x40)); /*0x599dc8*/
        v120 = 0.0; /*0x599dd3*/
        v119 = 0.0; /*0x599dd8*/
        sub_65DFA0((int)reference, 0.0, &v120, &v119); /*0x599de7*/
        v78 = (unsigned __int8 *)Double_To_SInt32(v120); /*0x599df0*/
        unk10 = (Tile *)v115.unk10; /*0x599df5*/
        v108 = v78; /*0x599df9*/
        a2u = (float)(int)v78; /*0x599e04*/
        Tile_SetFloat((Tile *)v115.unk10, (_DWORD *)0xFBB, a2u); /*0x599e0c*/
        v115.unk10 = (NiGeometry *)Double_To_SInt32(v119); /*0x599e1a*/
        a2v = (float)(int)v115.unk10; /*0x599e25*/
        Tile_SetFloat(unk10, (_DWORD *)0xFBC, a2v); /*0x599e2d*/
        v115.unk10 = (NiGeometry *)sub_5E4420((Actor *)reference); /*0x599e3d*/
        a2w = (float)(int)v115.unk10; /*0x599e48*/
        Tile_SetFloat(unk10, (_DWORD *)0xFB4, a2w); /*0x599e50*/
        v80 = v116; /*0x599e55*/
        if ( v116 ) /*0x599e5b*/
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)v116); /*0x599e5f*/
          Tile_SetString(unk10, (_DWORD *)0xFB9, Name); /*0x599e6c*/
          v115.unk10 = (NiGeometry *)sub_5FAA70(v80); /*0x599e7a*/
          v82 = (double)(int)v115.unk10; /*0x599e7e*/
          if ( (int)v115.unk10 < 0 ) /*0x599e82*/
            v82 = v82 + flt_A2FC78; /*0x599e84*/
          a2x = v82; /*0x599e8b*/
          Tile_SetFloat(unk10, (_DWORD *)0xFBA, a2x); /*0x599e95*/
        }
        v122 = 0xFFFFFFFF; /*0x599e9e*/
        NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(&v115); /*0x599ea9*/
      }
    }
  }
}
