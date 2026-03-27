void __userpurge CombinedWaterRelfectionPAsses(
        WaterManager *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        NiCamera *a2,
        _BYTE *a3)
{
  double v7; // st4
  TESForm *CurrentCell; // eax
  bool v9; // bl
  bool v10; // zf
  WaterShader *v11; // eax
  WaterShader *v12; // esi
  NiSourceTexture *v13; // eax
  WaterShader *v14; // esi
  BSRenderedTexture *ReflectionMap; // esi
  TES *v16; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v18; // eax
  NiAVObjectVtbl *ChildNiAvNodeVtbl; // eax
  TESObjectREFR *v20; // ecx
  TESObjectCELL *ParentCell; // eax
  SceneGraph *v22; // ecx
  TESObjectCELL *v23; // eax
  _DWORD *i; // eax
  int v25; // ecx
  int *v26; // eax
  unsigned int v27; // esi
  NiTPointerList_Node_void *v28; // ebx
  int v29; // edi
  LONG (__stdcall *v30)(volatile LONG *); // ebx
  int v31; // edi
  NiTPointerList_Node_void *v32; // edi
  TESObjectCELL *v33; // ecx
  int *unk40; // ecx
  UInt32 v35; // esi
  int v36; // eax
  UInt32 v37; // eax
  TES *v38; // ecx
  NiNode *v39; // ecx
  GridEntry *v40; // eax
  char *v41; // eax
  CHAR *v42; // eax
  WaterShader *v43; // ecx
  int v44; // eax
  NiTPointerList_Node_void *v45; // ecx
  float v46; // edx
  Sky *GlobalObject; // eax
  Sky *v48; // eax
  float v49; // ecx
  float v50; // edx
  float v51; // eax
  double v52; // st7
  Sky *v53; // eax
  char v54; // al
  TES *v55; // ecx
  Sky *v56; // eax
  double v57; // st7
  Sky *v58; // eax
  double v59; // st7
  TESWaterForm *v60; // eax
  Sky *v61; // eax
  Sky *v62; // eax
  double v63; // st7
  Sky *v64; // eax
  Sky *v65; // eax
  Sky *v66; // eax
  Sky *v67; // eax
  Sky *v68; // eax
  Sky *v69; // eax
  Sky *v70; // eax
  double v71; // st7
  Sky *v72; // eax
  double v73; // st7
  Sky *v74; // eax
  Sky *v75; // eax
  double v76; // st7
  Sky *v77; // eax
  Sky *v78; // eax
  double v79; // st7
  Sky *v80; // eax
  Sky *v81; // eax
  Sky *v82; // eax
  Sky *v83; // eax
  float v84; // [esp+Ch] [ebp-250h]
  float v85; // [esp+Ch] [ebp-250h]
  float v86; // [esp+Ch] [ebp-250h]
  float v87; // [esp+Ch] [ebp-250h]
  float v88; // [esp+Ch] [ebp-250h]
  float v89; // [esp+Ch] [ebp-250h]
  float v90; // [esp+Ch] [ebp-250h]
  float v91; // [esp+Ch] [ebp-250h]
  float v92; // [esp+10h] [ebp-24Ch]
  float v93; // [esp+10h] [ebp-24Ch]
  float v94; // [esp+10h] [ebp-24Ch]
  float v95; // [esp+10h] [ebp-24Ch]
  float v96; // [esp+10h] [ebp-24Ch]
  float v97; // [esp+10h] [ebp-24Ch]
  float v98; // [esp+10h] [ebp-24Ch]
  float v99; // [esp+10h] [ebp-24Ch]
  float v100; // [esp+14h] [ebp-248h]
  float GameHour; // [esp+14h] [ebp-248h]
  float v102; // [esp+14h] [ebp-248h]
  float v103; // [esp+14h] [ebp-248h]
  float v104; // [esp+14h] [ebp-248h]
  float v105; // [esp+14h] [ebp-248h]
  float v106; // [esp+14h] [ebp-248h]
  float v107; // [esp+14h] [ebp-248h]
  float v108; // [esp+14h] [ebp-248h]
  TESObjectCELL *v109; // [esp+2Ch] [ebp-230h]
  float v110; // [esp+2Ch] [ebp-230h]
  float v111; // [esp+2Ch] [ebp-230h]
  NiTPointerList_Node_void *v112[3]; // [esp+30h] [ebp-22Ch] BYREF
  float v113; // [esp+3Ch] [ebp-220h]
  int v114; // [esp+40h] [ebp-21Ch] BYREF
  char v115[260]; // [esp+44h] [ebp-218h] BYREF
  char ArgList[260]; // [esp+148h] [ebp-114h] BYREF
  unsigned int v117; // [esp+258h] [ebp-4h]

  if ( byte_B35228 )
  {
    byte_B35228 = 0;
    return;
  }
  if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 )
    return;
  if ( TESDataHandler_g_PlayerRef )
  {
    v7 = (double)dword_B070B0;
    if ( dword_B070B0 < 0 )
      v7 = v7 + flt_A2FC78;
    v100 = v7;
    CurrentCell = sub_65E5E0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v100);
  }
  else
  {
    CurrentCell = TES_GetCurrentCell(TES);
  }
  v109 = (TESObjectCELL *)CurrentCell;
  if ( CurrentCell )
  {
    if ( CurrentCell == (TESForm *)dword_B35224 )
      goto LABEL_15;
  }
  else
  {
    if ( dword_B35224 )
      goto LABEL_15;
    CurrentCell = TES_GetCurrentCell(TES);
    v109 = (TESObjectCELL *)CurrentCell;
  }
  byte_B3521D = 1;
  dword_B35224 = (int)CurrentCell;
LABEL_15:
  if ( byte_B07060 )
  {
    v9 = byte_B0703C || byte_B35229;
    if ( !TES->currentInteriorCell && dword_B35220 && sub_4ED650((_BYTE *)dword_B35220) && v9 )
    {
      v10 = byte_B333B8 == 0;
      byte_B45DB8 = 0;
      if ( v10 )
        NiRenderer_ReflectionPass((NiDX9Renderer *)this, (float *)a2, (NiAVObject *)a3);
    }
    else if ( byte_B0703C )
    {
      v11 = waterShader;
      v10 = waterShader == 0;
      byte_B45DB8 = 1;
      if ( !v10 && !v11->Unk104[3] )
      {
        _sprintf(v115, "Data\\Textures\\Effects\\interior_refl.dds");
        v12 = waterShader;
        v13 = sub_720F80(
                v115,
                (int)v115,
                (int)v115,
                (int)v115,
                (int)v115,
                (int)v115,
                (int)dword_B43104,
                (PixelLayout *)dword_B256D0);
        sub_499360(v12, (int)v13);
      }
    }
  }
  else
  {
    v14 = waterShader;
    v10 = waterShader == 0;
    byte_B45DB8 = 0;
    if ( !v10 )
    {
      sub_499360(v14, 0);
      sub_499270(v14, 0);
    }
    if ( this->ReflectionMap )
    {
      sub_7C1EE0(g_textureManager, this->ReflectionMap);
      ReflectionMap = this->ReflectionMap;
      if ( ReflectionMap )
      {
        if ( !InterlockedDecrement((volatile LONG *)&ReflectionMap->members) )
          (*(void (__thiscall **)(BSRenderedTexture *, int))ReflectionMap->vtbl)(ReflectionMap, 1);
        this->ReflectionMap = 0;
      }
    }
  }
  if ( byte_B3521D )
  {
    if ( TES_GetCurrentCell(TES) && sub_43F4D0() && useWaterLOD && byte_B43077 )
    {
      v16 = TES;
      if ( TES->currentInteriorCell )
        goto LABEL_48;
      CurrentWorldspace = TES::GetCurrentWorldspace(v16);
      if ( !TESWorldSpace::IsNoWaterLOD(CurrentWorldspace) && !byte_B35229 && sub_4E9F40() )
      {
        sub_49E280();
        goto LABEL_51;
      }
    }
    v16 = TES;
LABEL_48:
    v18 = TES::GetCurrentWorldspace(v16);
    if ( TESWorldSpace::IsNoWaterLOD(v18) )
    {
      if ( byte_B35229 )
        sub_499E20();
    }
  }
LABEL_51:
  if ( byte_B0703C || byte_B35229 )
  {
    if ( TESDataHandler_g_PlayerRef && TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
    {
      ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl(g_worldScenegraph);
      v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      *(double *)&v112[1] = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03;
      ParentCell = TESObjectREFR_GetParentCell(v20);
      if ( TESObjectCELL_GetWaterHeight(ParentCell) <= *(double *)&v112[1] )
      {
        IsRenderWaterUnderWaterSurface = 0;
        byte_B42CE2 = 0;
        IsSkyShaderFade = 0;
      }
      else
      {
        v22 = g_worldScenegraph;
        IsRenderWaterUnderWaterSurface = 1;     // USe water006.pso (near and lod) instead of water001.pso (near) / water012.pso (lod)
        byte_B42CE2 = 1;
        IsSkyShaderFade = 1;
        flt_B4314C = *(float *)&SceneGraph_GetChildNiAvNodeVtbl(v22)[1].super.Unk_03;
      }
      v23 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      TESObjectCELL_GetWaterHeight(v23);
      dword_B42CE4 = Double_To_SInt32(a4);
      byte_B42CE1 = 1;
    }
    else
    {
      byte_B42CE1 = 0;
    }
    if ( byte_B07050 )
    {
      if ( ImageSpaceEffectEnabled )
      {
        if ( ShaderPackage >= 2 )
        {
          WateRsurfacEPass(this, a2);
          for ( i = (_DWORD *)this->unk34; i; *(float *)(v25 + 0x18) = 1.0 )
          {
            v25 = i[2];
            i = (_DWORD *)*i;
          }
          v112[0] = (NiTPointerList_Node_void *)this->unk34;
          v26 = (int *)v112[0];
          if ( v112[0] )
          {
            do
            {
              v27 = v26[2];
              v10 = *(_BYTE *)(v27 + 0x10) == 0;
              v28 = (NiTPointerList_Node_void *)*v26;
              v114 = *v26;
              if ( v10 )
              {
                if ( byte_B07090 )
                  WaterGeometryPAss(this, (float *)v27, 0);
              }
              else
              {
                if ( *(_DWORD *)(v27 + 8) )
                  sub_7C1EE0(g_textureManager, *(BSRenderedTexture **)(v27 + 8));
                if ( *(_DWORD *)(v27 + 0xC) )
                  sub_7C1EE0(g_textureManager, *(BSRenderedTexture **)(v27 + 0xC));
                v29 = *(_DWORD *)(v27 + 8);
                v30 = InterlockedDecrement;
                if ( v29 )
                {
                  if ( !v30((volatile LONG *)(v29 + 4)) )
                    (**(void (__thiscall ***)(int, int))v29)(v29, 1);
                  *(_DWORD *)(v27 + 8) = 0;
                }
                v31 = *(_DWORD *)(v27 + 0xC);
                if ( v31 )
                {
                  if ( !v30((volatile LONG *)(v31 + 4)) )
                    (**(void (__thiscall ***)(int, int))v31)(v31, 1);
                  *(_DWORD *)(v27 + 0xC) = 0;
                }
                sub_7AA860((BSTextureManager *)&this->unk30, v112);
                (*(void (__thiscall **)(int, NiTPointerList_Node_void **, _DWORD))(*(_DWORD *)value + 0x88))(
                  value,
                  &v112[1],
                  *(_DWORD *)(v27 + 4));
                if ( v112[1] )
                {
                  v32 = v112[1];
                  if ( !v30((volatile LONG *)&v112[1]->prev) )
                    ((void (__thiscall *)(NiTPointerList_Node_void *, int))v32->next->next)(v32, 1);
                }
                sub_4993B0((_BYTE *)v27);
                FormHeapFree(v27);
                v28 = (NiTPointerList_Node_void *)v114;
              }
              v26 = (int *)v28;
              v112[0] = v28;
            }
            while ( v28 );
          }
        }
      }
    }
    if ( !byte_B3521D )
      goto LABEL_115;
    byte_B3521D = 0;
    if ( v109 && TESObjectCELL::GetWaterForm(v109) )
    {
      v33 = v109;
    }
    else if ( dword_B35220 || (v33 = (TESObjectCELL *)dword_B35224) == 0 )
    {
      v33 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    }
    dword_B35220 = (int)TESObjectCELL::GetWaterForm(v33);
    unk40 = (int *)this->unk40;
    if ( unk40 )
    {
      if ( sub_6B7260(unk40) )
      {
        sub_6B7240((int *)this->unk40);
        sub_6B73C0((int *)this->unk40);
        v35 = this->unk40;
        if ( v35 )
        {
          sub_6B73E0((_DWORD *)this->unk40);
          FormHeapFree(v35);
        }
        this->unk40 = 0;
      }
    }
    if ( dword_B35220 )
    {
      v36 = *(_DWORD *)(dword_B35220 + 0x38);
      if ( v36 )
      {
        OSGLobals_PlaySound(*(_DWORD *)(v36 + 0xC), 0x12, 0);
        this->unk40 = v37;
      }
    }
    if ( !byte_B07050 || !ImageSpaceEffectEnabled )
    {
LABEL_115:
      v44 = *((_DWORD *)Sky_CreateOrGetGlobalObject()->sun->membr.SunBillboard + 7);
      v45 = *(NiTPointerList_Node_void **)(v44 + 0x58);
      v112[1] = *(NiTPointerList_Node_void **)(v44 + 0x54);
      v46 = *(float *)(v44 + 0x5C);
      v112[2] = v45;
      v113 = v46;
      sub_43F350((float *)&v112[1]);
      flt_B45DF4 = *(float *)&v112[1];
      flt_B45DF8 = *(float *)&v112[2];
      flt_B45DFC = v113;
      GlobalObject = Sky_CreateOrGetGlobalObject();
      flt_B45E00 = sub_544B00(GlobalObject->sun) * fCostant_100;
      v48 = Sky_CreateOrGetGlobalObject();
      v49 = *(float *)&v48->unk03C[0xC];
      v50 = *(float *)&v48->unk03C[0xD];
      v51 = *(float *)&v48->unk03C[0xE];
      v112[1] = (NiTPointerList_Node_void *)LODWORD(v49);
      flt_B45E04 = v49;
      v112[2] = (NiTPointerList_Node_void *)LODWORD(v50);
      v113 = v51;
      flt_B45E08 = v50;
      flt_B45E0C = v113;
      v52 = 0.0;
      if ( 0.0 != flt_B45E00 )
      {
        v53 = Sky_CreateOrGetGlobalObject();
        v52 = sub_544B00(v53->sun);
      }
      v54 = IsRenderWaterUnderWaterSurface;
      flt_B45E10 = v52;
      if ( v54 )
        flt_B45E10 = 0.0;
      v55 = TES;
      byte_B45DBB = v54;
      if ( !v55->currentInteriorCell )
      {
        *(double *)&v112[1] = TimeGlobals_GetGameHour(&TimeGlobals);
        v56 = Sky_CreateOrGetGlobalObject();
        v57 = sub_4991C0(v56);
        if ( v57 < *(double *)&v112[1] )
        {
          *(double *)&v112[1] = TimeGlobals_GetGameHour(&TimeGlobals);
          v58 = Sky_CreateOrGetGlobalObject();
          v59 = sub_499200(v58);
          if ( v59 >= *(double *)&v112[1] )
          {
            if ( *(_DWORD *)(dword_B35220 + 0xA4) && (v60 = *(TESWaterForm **)(dword_B35220 + 0xA4)) != 0 )
            {
              this->WaterForm2 = v60;
              GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
              v61 = Sky_CreateOrGetGlobalObject();
              v92 = sub_499200(v61);
              v62 = Sky_CreateOrGetGlobalObject();
              v84 = sub_4991C0(v62);
              if ( sub_410EB0(0.0, 1.0, v84, v92, GameHour) >= dbl_A2FC68 )
              {
                v102 = TimeGlobals_GetGameHour(&TimeGlobals);
                v64 = Sky_CreateOrGetGlobalObject();
                v93 = sub_499200(v64);
                v65 = Sky_CreateOrGetGlobalObject();
                v85 = sub_4991C0(v65);
                v63 = sub_410EB0(0.0, 1.0, v85, v93, v102);
              }
              else
              {
                v63 = 0.0;
              }
              *(float *)v112 = v63;
              if ( *(float *)v112 <= dbl_A2F928 )
              {
                v103 = TimeGlobals_GetGameHour(&TimeGlobals);
                v66 = Sky_CreateOrGetGlobalObject();
                v94 = sub_499200(v66);
                v67 = Sky_CreateOrGetGlobalObject();
                v86 = sub_4991C0(v67);
                if ( sub_410EB0(0.0, 1.0, v86, v94, v103) >= dbl_A2FC68 )
                {
                  v104 = TimeGlobals_GetGameHour(&TimeGlobals);
                  v68 = Sky_CreateOrGetGlobalObject();
                  v95 = sub_499200(v68);
                  v69 = Sky_CreateOrGetGlobalObject();
                  v87 = sub_4991C0(v69);
                  v110 = sub_410EB0(0.0, 1.0, v87, v95, v104);
                  this->unk2C = v110;
                  this->unk28 = 1;
                }
                else
                {
                  this->unk28 = 1;
                  this->unk2C = 0.0;
                }
              }
              else
              {
                this->unk28 = 1;
                this->unk2C = 1.0;
              }
            }
            else
            {
              this->unk28 = 0;
              this->unk2C = 0.0;
            }
            goto LABEL_147;
          }
        }
        *(double *)&v112[1] = TimeGlobals_GetGameHour(&TimeGlobals);
        v70 = Sky_CreateOrGetGlobalObject();
        v71 = sub_499140(v70);
        if ( v71 < *(double *)&v112[1] )
        {
          *(double *)&v112[1] = TimeGlobals_GetGameHour(&TimeGlobals);
          v72 = Sky_CreateOrGetGlobalObject();
          v73 = sub_499180(v72);
          if ( v73 >= *(double *)&v112[1] )
          {
            v105 = TimeGlobals_GetGameHour(&TimeGlobals);
            v74 = Sky_CreateOrGetGlobalObject();
            v96 = sub_499180(v74);
            v75 = Sky_CreateOrGetGlobalObject();
            v88 = sub_499140(v75);
            if ( sub_410EB0(0.0, 1.0, v88, v96, v105) >= dbl_A2FC68 )
            {
              v106 = TimeGlobals_GetGameHour(&TimeGlobals);
              v77 = Sky_CreateOrGetGlobalObject();
              v97 = sub_499180(v77);
              v78 = Sky_CreateOrGetGlobalObject();
              v89 = sub_499140(v78);
              v76 = sub_410EB0(0.0, 1.0, v89, v97, v106);
            }
            else
            {
              v76 = 0.0;
            }
            *(float *)v112 = v76;
            if ( *(float *)v112 <= dbl_A2F928 )
            {
              v107 = TimeGlobals_GetGameHour(&TimeGlobals);
              v80 = Sky_CreateOrGetGlobalObject();
              v98 = sub_499180(v80);
              v81 = Sky_CreateOrGetGlobalObject();
              v90 = sub_499140(v81);
              if ( sub_410EB0(0.0, 1.0, v90, v98, v107) >= dbl_A2FC68 )
              {
                v108 = TimeGlobals_GetGameHour(&TimeGlobals);
                v82 = Sky_CreateOrGetGlobalObject();
                v99 = sub_499180(v82);
                v83 = Sky_CreateOrGetGlobalObject();
                v91 = sub_499140(v83);
                v79 = sub_410EB0(0.0, 1.0, v91, v99, v108);
              }
              else
              {
                v79 = 0.0;
              }
            }
            else
            {
              v79 = 1.0;
            }
            v111 = v79;
            this->unk28 = 1;
            this->unk2C = v111;
            this->WaterForm2 = (TESWaterForm *)dword_B35220;
            goto LABEL_147;
          }
        }
        if ( !this->WaterForm2 )
        {
LABEL_147:
          if ( this->unk2C > 0.0 && this->unk28 )
          {
            sub_499570(this, &this->WaterForm2->vtbl, this->unk2C, 0);
            if ( 1.0 == this->unk2C )
              this->unk28 = 0;
          }
          else
          {
            sub_499570(this, 0, 0.0, this->unk29);
          }
          sub_49AD00((int **)this);
          return;
        }
        this->unk29 = 1;
        this->unk2C = 0.0;
        this->unk28 = 0;
      }
      this->WaterForm2 = 0;
      goto LABEL_147;
    }
    v38 = TES;
    if ( TES->currentInteriorCell )
    {
      v39 = **((NiNode ***)v38->waterNodeData + 2);
    }
    else
    {
      if ( !v109 )
        goto LABEL_112;
      v40 = sub_43FAB0(v38, v109);
      if ( !v40 )
        goto LABEL_112;
      v39 = *(NiNode **)v40->info[1].unk00;
    }
    if ( NiNode_GetNiPropertyByID(v39, 4) )
    {
      v41 = *(char **)(dword_B35220 + 0x30);
      if ( !v41 )
        v41 = EmptyString;
      IsLavaReal = _strcmp("lava", v41) == 0;
    }
LABEL_112:
    if ( dword_B35220 )
    {
      if ( sub_4EDD90((_DWORD *)dword_B35220) )
      {
        v42 = sub_4EDD90((_DWORD *)dword_B35220);
        _sprintf(ArgList, "%s\\%s", "Textures", v42);
        sub_442890((UInt32 *)&v114, ArgList, 1, 0);
        v43 = waterShader;
        v117 = 0;
        sub_499310(v43, v114);
        v117 = 0xFFFFFFFF;
        sub_7016A0((NiD3DVertexShader *)&v114);
      }
    }
    goto LABEL_115;
  }
}
