void __usercall ContainerMenu_Update(double a1@<st2>, double st6_0@<st1>)
{
  NiGeometry *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v5; // ebx
  TESObjectREFR *v6; // eax
  char a2; // dl
  TESObjectREFR *v8; // esi
  BSShader *TotalEntryCountForITem; // edi
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v11; // ebp
  int v12; // eax
  double GameHour; // st7
  Actor *v14; // edi
  int v15; // edx
  Actor *v16; // eax
  int v17; // edx
  NiPointerList_Node_BSImageSpaceShader *end; // edi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v20; // eax
  int v21; // eax
  int v22; // edx
  bool v23; // cl
  BSImageSpaceShader *v24; // edi
  int v25; // eax
  bool v26; // zf
  int v27; // ecx
  bool v28; // cc
  Tile *altActiveTile; // ecx
  Tile *v30; // ecx
  _DWORD *v31; // esi
  Tile *v32; // edi
  double Float; // st7
  UInt32 v34; // eax
  _DWORD *v35; // ecx
  EntryData *v36; // edi
  _DWORD *v37; // edx
  BSShader *v38; // eax
  BSShader *v39; // esi
  int v40; // eax
  NiPointerList_Node_BSImageSpaceShader *v41; // eax
  CHAR *v42; // eax
  int v43; // ebp
  Tile *v44; // esi
  CHAR *v45; // eax
  char *v46; // eax
  BSStringT *v47; // eax
  BSStringT *v48; // esi
  char *v49; // eax
  char *v50; // eax
  char *v51; // eax
  char *v52; // eax
  char *v53; // eax
  unsigned __int8 *v54; // ebp
  char *v55; // eax
  Tile *v56; // esi
  double v57; // st7
  _DWORD *v58; // esi
  _DWORD *v59; // edi
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  char *v62; // eax
  char *v63; // eax
  char *v64; // eax
  char *v65; // eax
  char *v66; // eax
  char *v67; // eax
  unsigned __int8 *v68; // ebp
  char *v69; // eax
  BSTextureManager *v70; // ecx
  unsigned __int8 *v71; // eax
  unsigned __int8 *v72; // edi
  _DWORD *v73; // edi
  _DWORD *v74; // eax
  int v75; // ecx
  unsigned int **data; // esi
  int v77; // edx
  unsigned int *v78; // edi
  unsigned __int8 *v79; // eax
  Tile *unk10; // esi
  Actor *v81; // edi
  char *Name; // eax
  double v83; // st7
  void *v84; // [esp-4h] [ebp-188h]
  signed int v85; // [esp+4h] [ebp-180h]
  TESForm *v86; // [esp+8h] [ebp-17Ch]
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
  _DWORD *v108; // [esp+10h] [ebp-174h]
  unsigned __int8 *v109; // [esp+24h] [ebp-160h] BYREF
  int a3; // [esp+28h] [ebp-15Ch]
  _DWORD *p_vtbl; // [esp+2Ch] [ebp-158h]
  char v112; // [esp+33h] [ebp-151h]
  _DWORD *p_vftable; // [esp+34h] [ebp-150h]
  _DWORD *v114; // [esp+38h] [ebp-14Ch] BYREF
  _DWORD *p_next; // [esp+3Ch] [ebp-148h]
  NiTPointerList__BSImageSpaceShader v116; // [esp+40h] [ebp-144h] BYREF
  Actor *v117; // [esp+5Ch] [ebp-128h]
  Tile *v118; // [esp+60h] [ebp-124h]
  float HealthFracOrUses; // [esp+64h] [ebp-120h]
  float v120; // [esp+68h] [ebp-11Ch] BYREF
  float v121; // [esp+6Ch] [ebp-118h] BYREF
  char v122[32]; // [esp+70h] [ebp-114h] BYREF
  unsigned int v123; // [esp+180h] [ebp-4h]

  OpenMenuTile = (NiGeometry *)Menu_GetOpenMenuTile(0x3F0);
  v116.unk10 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v5 = ParentMenu;
    if ( TESDataHandler_g_PlayerRef )
    {
      v6 = *(TESObjectREFR **)(ParentMenu + 0x44);
      if ( v6 )
      {
        a2 = *(_BYTE *)(v5 + 0x61);
        v8 = *(TESObjectREFR **)(v5 + 0x44);
        v118 = *(Tile **)(v5 + 0x30);
        p_vtbl = &v6->vtbl;
        TotalEntryCountForITem = (BSShader *)TESObjectREF_GetTotalEntryCountForITem(v6, a2);
        v84 = *(void **)(v5 + 0x44);
        v116.unk18 = TotalEntryCountForITem;
        v117 = (Actor *)OblivionDynamicCast(
                          v84,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
        sub_5B3E50();
        memset(&v116.start, 0, 0xC);
        v116.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<ContainerItemAndIndex *>::`vftable';
        v123 = 0;
        p_vftable = 0;
        do
        {
          a3 = 0;
          if ( (int)TotalEntryCountForITem > 0 )
          {
            while ( 1 )
            {
              if ( v8 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                InventoryEntryOfItem = GetInventoryEntryOfItem(v8, (TESForm *)a3, 0);
              else
                InventoryEntryOfItem = GetInventoryEntryOfItem(v8, (TESForm *)a3, *(_BYTE *)(v5 + 0x61));
              v11 = (unsigned int)InventoryEntryOfItem;
              if ( !InventoryEntryOfItem )
                goto LABEL_31;
              if ( (v8 == (TESObjectREFR *)TESDataHandler_g_PlayerRef || !*(_BYTE *)(v5 + 0x63))
                && !*(_BYTE *)(v5 + 0x61) )
              {
                break;
              }
              v12 = 0;
              if ( *(_BYTE *)(v5 + 0x63) )
              {
                GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
                v12 = Double_To_SInt32(GameHour);
              }
              v14 = v117;
              v112 = sub_4854F0((EntryData *)v11, v117, *(_BYTE *)(v5 + 0x61), v12, 0, 0);
              if ( !v112 )
                goto LABEL_22;
              if ( v8 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
              {
                if ( *(_BYTE *)(v5 + 0x61)
                  && sub_488E50((void **)v11, (TESObjectREFR *)1, (int)v14, 1, *(float *)&v108) <= dbl_A68FE0 )
                {
                  goto LABEL_22;
                }
                if ( v8 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                  goto LABEL_26;
              }
              if ( !*(_BYTE *)(v5 + 0x61)
                || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 8) + 0x78))(*(_DWORD *)(v11 + 8)) )
              {
                goto LABEL_26;
              }
LABEL_22:
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v15);
              FormHeapFree(v11);
LABEL_50:
              if ( ++a3 >= (int)v116.unk18 )
                goto LABEL_51;
            }
            v16 = v117;
            if ( v8 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
              v16 = (Actor *)TESDataHandler_g_PlayerRef;
            v112 = sub_4854F0((EntryData *)v11, v16, 0, 1, 1, 0);
LABEL_26:
            if ( v112 )
            {
              if ( (p_vftable == (_DWORD *)1 || *(_BYTE *)(v5 + 0x61)) && sub_469980(*(_DWORD *)(v11 + 8)) )
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v17);
                FormHeapFree(v11);
                v11 = 0;
              }
LABEL_31:
              end = v116.end;
              v114 = 0;
              if ( v11 )
              {
                v114 = (_DWORD *)sub_485150((EntryData *)v11);
                sub_5AA210(&v114, *(_DWORD *)(v11 + 8));
              }
              if ( end )
              {
                while ( v11 )
                {
                  vftable = end->data->__vftable;
                  p_next = &end->next;
                  end = end->prev;
                  v116.renderTarget = sub_485150((EntryData *)vftable);
                  sub_5AA210(&v116.renderTarget, (int)vftable->super.super.super.super.No08);
                  HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)v11, 1, 0, 0.0);
                  *(float *)&v109 = ContainerEntryExtraData_GetHealthFracOrUses(
                                      (void **)&vftable->super.super.super.super.super.Destructor,
                                      1,
                                      0,
                                      0.0);
                  v20 = sub_584500((char *)(v5 + 0x60), (EntryData *)vftable, (EntryData *)v11);
                  if ( (int)v116.renderTarget < (int)v114 )
                    goto LABEL_45;
                  if ( (_DWORD *)v116.renderTarget == v114 )
                  {
                    if ( v20 < 0 )
                    {
                      v40 = FormHeapAlloc(0xCu);
                      if ( v40 )
                      {
                        v26 = p_vftable == 0;
                        *(_DWORD *)(v40 + 4) = a3;
                        *(_DWORD *)v40 = v11;
                        *(_BYTE *)(v40 + 8) = v26;
                        v109 = (unsigned __int8 *)v40;
                      }
                      else
                      {
                        *(float *)&v109 = 0.0;
                      }
                      sub_5986D0(&v116, (int)p_next, &v109);
                      break;
                    }
                    if ( !v20 )
                    {
                      st6_0 = *(float *)&v109;
                      if ( *(float *)&v109 > (double)HealthFracOrUses )
                      {
LABEL_45:
                        v25 = FormHeapAlloc(0xCu);
                        if ( v25 )
                        {
                          v26 = p_vftable == 0;
                          v27 = a3;
                          *(_DWORD *)v25 = v11;
                          *(_DWORD *)(v25 + 4) = v27;
                          *(_BYTE *)(v25 + 8) = v26;
                        }
                        else
                        {
                          v25 = 0;
                        }
                        v109 = (unsigned __int8 *)v25;
                        sub_5986D0(&v116, (int)p_next, &v109);
                        break;
                      }
                    }
                  }
                  if ( !end )
                  {
                    v8 = (TESObjectREFR *)p_vtbl;
                    goto LABEL_42;
                  }
                }
                v8 = (TESObjectREFR *)p_vtbl;
              }
              else
              {
LABEL_42:
                if ( v11 )
                {
                  v21 = FormHeapAlloc(0xCu);
                  if ( v21 )
                  {
                    v22 = a3;
                    v23 = p_vftable == 0;
                    *(_DWORD *)v21 = v11;
                    *(_DWORD *)(v21 + 4) = v22;
                    *(_BYTE *)(v21 + 8) = v23;
                    v24 = (BSImageSpaceShader *)v21;
                  }
                  else
                  {
                    v24 = 0;
                  }
                  v41 = v116.__vftable->AllocateNode(&v116);
                  v41->data = v24;
                  v41->prev = 0;
                  v41->next = v116.start;
                  if ( v116.start )
                  {
                    v116.start->prev = v41;
                    ++v116.numItems;
                  }
                  else
                  {
                    ++v116.numItems;
                    v116.end = v41;
                  }
                  v116.start = v41;
                }
              }
              goto LABEL_50;
            }
            goto LABEL_22;
          }
LABEL_51:
          p_vtbl = &TESDataHandler_g_PlayerRef->vtbl;
          v8 = (TESObjectREFR *)p_vtbl;
          TotalEntryCountForITem = (BSShader *)TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)p_vtbl, 0);
          v28 = (int)p_vftable + 1 < 2;
          v116.unk18 = TotalEntryCountForITem;
          p_vftable = (_DWORD *)((char *)p_vftable + 1);
        }
        while ( v28 );
        altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile;
        if ( altActiveTile )
        {
          if ( Tile_GetFloat(altActiveTile, 0xFA8) == dbl_A6B620 )
          {
            v30 = *(Tile **)(v5 + 0x34);
            *(_DWORD *)(v5 + 0x3C) = 0;
            Tile_SetFloat(v30, (_DWORD *)0xFA1, 1.0);
            InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
          }
        }
        v31 = *((_DWORD **)v118 + 0xD);
        while ( v31 )
        {
          v32 = (Tile *)v31[2];
          v31 = (_DWORD *)*v31;
          if ( sub_588B50(v32, 0xFB8) )
            Tile_SetFloat(v32, (_DWORD *)0xFAA, flt_A690E0);
        }
        Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFAF, flt_A53954);
        Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB0, flt_A53954);
        Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB1, flt_A53954);
        Float = flt_A53954;
        Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB2, flt_A53954);
        a3 = 0xFFFFFFFF;
        v116.unk18 = 0;
        p_next = &v116.start->next;
        if ( v116.start )
        {
          while ( 1 )
          {
            v34 = p_next[2];
            v35 = (_DWORD *)*p_next;
            v36 = *(EntryData **)v34;
            v37 = *(_DWORD **)(v34 + 4);
            v116.renderTarget = v34;
            LOBYTE(v34) = *(_BYTE *)(v34 + 8);
            p_next = v35;
            v114 = v37;
            LOBYTE(p_vtbl) = v34;
            v38 = (BSShader *)sub_485150(v36);
            v39 = v38;
            p_vftable = &v38->__vftable;
            if ( v38 != v116.unk18 )
              break;
LABEL_80:
            v42 = sub_4851B0((ExtraDataList ***)v36, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
            _sprintf(v122, "%s\\%s", "Icons", v42);
            v43 = *((_DWORD *)v118 + 0xE);
            if ( v43 )
            {
              while ( 1 )
              {
                v44 = *(Tile **)(v43 + 8);
                v43 = *(_DWORD *)(v43 + 4);
                Float = Tile_GetFloat(v44, 0xFBC);
                HealthFracOrUses = COERCE_FLOAT(Double_To_SInt32(Float));
                if ( sub_588C10(v44, 0xFAF) )
                {
                  if ( sub_488DF0(*(EntryData **)v116.renderTarget) )
                  {
                    Float = Tile_GetFloat(v44, 0xFAA);
                    if ( Float == flt_A690E0 )
                    {
                      *(float *)&v109 = COERCE_FLOAT(sub_488DF0(*(EntryData **)v116.renderTarget));
                      v45 = sub_588C10(v44, 0xFAF);
                      if ( !_mbscmp((const unsigned __int8 *)v45, v109)
                        && LODWORD(HealthFracOrUses) == ((_BYTE)p_vtbl != 0) + 1 )
                      {
                        break;
                      }
                    }
                  }
                }
                if ( !v43 )
                  goto LABEL_87;
              }
              v62 = sub_488DF0(v36);
              Tile_SetString(v44, (_DWORD *)0xFAF, v62);
              HIDWORD(_8b) = p_vtbl;
              LODWORD(_8b) = *(_DWORD *)(v5 + 0x44);
              v63 = (char *)sub_48F450(v36, 1, 1, (TESObjectREFR *)*(unsigned __int8 *)(v5 + 0x61), _8b);
              Tile_SetString(v44, (_DWORD *)0xFB0, v63);
              v64 = (char *)sub_48F450(v36, 2, 1, 0, 0.0);
              Tile_SetString(v44, (_DWORD *)0xFB1, v64);
              v65 = (char *)sub_48F450(v36, 3, 1, 0, 0.0);
              Tile_SetString(v44, (_DWORD *)0xFB2, v65);
              v66 = (char *)sub_48F450(v36, 4, 1, 0, 0.0);
              Tile_SetString(v44, (_DWORD *)0xFB3, v66);
              Tile_SetString(v44, (_DWORD *)0xFB4, v122);
              v67 = (char *)sub_48F450(v36, 0, 1, 0, 0.0);
              Tile_SetString(v44, (_DWORD *)0xFB5, v67);
              a2o = (float)(int)p_vftable;
              Tile_SetFloat(v44, (_DWORD *)0xFB7, a2o);
              v109 = (unsigned __int8 *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v36, 0) != 0) + 1);
              a2p = (float)(int)v109;
              Tile_SetFloat(v44, (_DWORD *)0xFB8, a2p);
              a2q = (float)(int)v114;
              Tile_SetFloat(v44, (_DWORD *)0xFB9, a2q);
              a2r = (float)a3;
              Tile_SetFloat(v44, (_DWORD *)0xFAA, a2r);
              v68 = (unsigned __int8 *)sub_485C00(v36);
              v109 = v68;
              a2s = (float)(int)v68;
              Tile_SetFloat(v44, (_DWORD *)0xFBA, a2s);
              v69 = (char *)sub_48F6A0((int)v68);
              Tile_SetString(v44, (_DWORD *)0xFBB, v69);
              v109 = (unsigned __int8 *)(((_BYTE)p_vtbl != 0) + 1);
              Float = (double)(int)v109;
              a2t = Float;
              Tile_SetFloat(v44, (_DWORD *)0xFBC, a2t);
              v70 = (BSTextureManager *)(*((_DWORD *)v44 + 4) + 0x30);
              v71 = *(unsigned __int8 **)(*((_DWORD *)v44 + 4) + 0x34);
              if ( v71 )
              {
                while ( 1 )
                {
                  v26 = v44 == *((Tile **)v71 + 2);
                  v72 = v71;
                  v71 = *(unsigned __int8 **)v71;
                  if ( v26 )
                    break;
                  if ( !v71 )
                    goto LABEL_102;
                }
              }
              else
              {
LABEL_102:
                v72 = 0;
              }
              v109 = v72;
              if ( v72 )
                sub_7AA860(v70, (NiTPointerList_Node_void **)&v109);
              v73 = (_DWORD *)(*((_DWORD *)v44 + 4) + 0x30);
              v74 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v73 + 4))(v73);
              v74[2] = v44;
              v74[1] = 0;
              *v74 = v73[1];
              v75 = v73[1];
              if ( v75 )
              {
                *(_DWORD *)(v75 + 4) = v74;
                ++v73[3];
              }
              else
              {
                ++v73[3];
                v73[2] = v74;
              }
              v73[1] = v74;
            }
            else
            {
LABEL_87:
              v86 = (TESForm *)a3;
              v85 = sub_485150(v36);
              v46 = sub_488DF0(v36);
              v47 = sub_599070((_DWORD *)v5, a1, st6_0, Float, v122, v46, v85, (signed int)v86, 0x33);
              HIDWORD(_8a) = p_vtbl;
              v48 = v47;
              LODWORD(_8a) = *(_DWORD *)(v5 + 0x44);
              v49 = (char *)sub_48F450(v36, 1, 1, (TESObjectREFR *)*(unsigned __int8 *)(v5 + 0x61), _8a);
              Tile_SetString(v48, (_DWORD *)0xFB0, v49);
              v50 = (char *)sub_48F450(v36, 2, 1, 0, 0.0);
              Tile_SetString(v48, (_DWORD *)0xFB1, v50);
              v51 = (char *)sub_48F450(v36, 3, 1, 0, 0.0);
              Tile_SetString(v48, (_DWORD *)0xFB2, v51);
              v52 = (char *)sub_48F450(v36, 4, 1, 0, 0.0);
              Tile_SetString(v48, (_DWORD *)0xFB3, v52);
              v53 = (char *)sub_48F450(v36, 0, 1, 0, 0.0);
              Tile_SetString(v48, (_DWORD *)0xFB5, v53);
              v109 = (unsigned __int8 *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v36, 0) != 0) + 1);
              a2j = (float)(int)v109;
              Tile_SetFloat((Tile *)v48, (_DWORD *)0xFB8, a2j);
              a2k = (float)(int)v114;
              Tile_SetFloat((Tile *)v48, (_DWORD *)0xFB9, a2k);
              v109 = (unsigned __int8 *)(((_BYTE)p_vtbl != 0) + 1);
              a2l = (float)(int)v109;
              Tile_SetFloat((Tile *)v48, (_DWORD *)0xFBC, a2l);
              v54 = (unsigned __int8 *)sub_485C00(v36);
              v109 = v54;
              Float = (double)(int)v54;
              a2m = Float;
              Tile_SetFloat((Tile *)v48, (_DWORD *)0xFBA, a2m);
              v55 = (char *)sub_48F6A0((int)v54);
              Tile_SetString(v48, (_DWORD *)0xFBB, v55);
            }
            ++a3;
            if ( !p_next )
              goto LABEL_89;
          }
          if ( v38 == (BSShader *)1 )
          {
            Float = (double)a3;
            a2f = Float;
            Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFAF, a2f);
          }
          else if ( v38 == (BSShader *)2 )
          {
            Float = (double)a3;
            a2g = Float;
            Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB0, a2g);
          }
          else if ( v38 == (BSShader *)4 )
          {
            Float = (double)a3;
            a2h = Float;
            Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB1, a2h);
          }
          else
          {
            if ( v38 != (BSShader *)8 )
            {
LABEL_79:
              v116.unk18 = v39;
              goto LABEL_80;
            }
            Float = (double)a3;
            a2i = Float;
            Tile_SetFloat(*(Tile **)(v5 + 4), (_DWORD *)0xFB2, a2i);
          }
          ++a3;
          goto LABEL_79;
        }
LABEL_89:
        v56 = v118;
        v109 = (unsigned __int8 *)(a3 - 1);
        v57 = (double)(a3 - 1);
        a2n = v57;
        Tile_SetFloat(v118, (_DWORD *)0xFAE, a2n);
        v58 = *((_DWORD **)v56 + 0xD);
        while ( v58 )
        {
          v59 = (_DWORD *)v58[2];
          v58 = (_DWORD *)*v58;
          v57 = Tile_GetFloat(v59, 0xFAA);
          if ( v57 == flt_A690E0 )
          {
            if ( v59 )
              (*(void (__thiscall **)(_DWORD *, int))*v59)(v59, 1);
          }
        }
        if ( v116.numItems )
        {
          start = v116.start;
          do
          {
            if ( start->data )
            {
              next = start->next;
              v116.start = start->next;
              if ( v116.start )
                next->prev = 0;
              else
                v116.end = 0;
              data = (unsigned int **)start->data;
              v116.__vftable->FreeNode(&v116, (Node *)start);
              --v116.numItems;
              if ( data )
              {
                v78 = *data;
                if ( *data )
                {
                  ContainerEntryExtraData_DestroyDataTable(*data, v77);
                  FormHeapFree((unsigned int)v78);
                }
                FormHeapFree((unsigned int)data);
              }
              start = v116.start;
            }
          }
          while ( v116.numItems );
        }
        sub_5987F0((_DWORD *)v5, v57, *(_DWORD *)(v5 + 0x40));
        v121 = 0.0;
        v120 = 0.0;
        sub_65DFA0((int)TESDataHandler_g_PlayerRef, 0.0, &v121, &v120);
        v79 = (unsigned __int8 *)Double_To_SInt32(v121);
        unk10 = (Tile *)v116.unk10;
        v109 = v79;
        a2u = (float)(int)v79;
        Tile_SetFloat((Tile *)v116.unk10, (_DWORD *)0xFBB, a2u);
        v116.unk10 = (NiGeometry *)Double_To_SInt32(v120);
        a2v = (float)(int)v116.unk10;
        Tile_SetFloat(unk10, (_DWORD *)0xFBC, a2v);
        v116.unk10 = (NiGeometry *)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
        a2w = (float)(int)v116.unk10;
        Tile_SetFloat(unk10, (_DWORD *)0xFB4, a2w);
        v81 = v117;
        if ( v117 )
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)v117);
          Tile_SetString(unk10, (_DWORD *)0xFB9, Name);
          v116.unk10 = (NiGeometry *)sub_5FAA70(v81);
          v83 = (double)(int)v116.unk10;
          if ( (int)v116.unk10 < 0 )
            v83 = v83 + flt_A2FC78;
          a2x = v83;
          Tile_SetFloat(unk10, (_DWORD *)0xFBA, a2x);
        }
        v123 = 0xFFFFFFFF;
        NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(&v116);
      }
    }
  }
}
