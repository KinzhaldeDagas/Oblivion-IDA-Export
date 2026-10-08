// Shared Oblivion BSShaderPPLightingProperty inherited virtual at vtable slot +0x9C. Exact ABI: void __thiscall(BSShaderProperty *this, NiGeometry *geometry, int rendererState, WORD *outContext, int emit). It requires shadow mapping ready, iterates eligible active non-shadow lights with ShadowSceneLight+0xF4 nonnull, constructs light-count-1 RenderPass records, stores pad+7=1, and inserts at this+0x28 head. Selector priority: passInfo bit 0x2 -> 0x178; else bit 0x4000 -> 0x179; else exact SpeedTreeBranch RTTI ancestry -> 0x17A; otherwise 0x177. Hair owns this slot but reaches it only through HairShaderProperty_BuildRenderPasses' image-space + flag fallback and base shader-class>=2 dispatch.
void __thiscall BSShaderPPLightingProperty_BuildInheritedLightPasses(
        BSShaderLightingPropertyLayout_t *this,
        NiGeometry *geometry,
        int rendererState,
        unsigned __int16 *outContext,
        int emit)
{
  UInt32 passInfo; // ecx
  __int16 v7; // di
  _DWORD *v8; // eax
  NiGeometryData *geomData; // eax
  bool v10; // zf
  double v11; // st7
  struct NiRTTI *v12; // eax
  char v13; // al
  int (__thiscall *v14)(BSShaderLightingPropertyLayout_t *); // eax
  NiRTTI *v15; // eax
  char v16; // al
  int (__thiscall *v17)(BSShaderLightingPropertyLayout_t *); // eax
  struct NiRTTI *v18; // eax
  char v19; // al
  int v20; // edx
  UInt32 v21; // eax
  BSShaderAccumulator *Global; // eax
  UInt32 v23; // eax
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v25)(volatile LONG *); // ebx
  NiProperty *v26; // edi
  NiPropertyState *v27; // ebp
  NiPropertyState *v28; // ebp
  _DWORD *v29; // eax
  int v30; // eax
  void (__thiscall ***v31)(_DWORD, int); // edi
  char v32; // bp
  unsigned __int16 v33; // dx
  ShadowSceneLight *FirstActiveLight; // eax
  ShadowSceneLight *NextActiveLight; // eax
  ShadowSceneLight *v36; // eax
  ShadowSceneLight *v37; // eax
  ShadowSceneLight *v38; // eax
  ShadowSceneLight *i; // eax
  RenderPass_DecodedLayout *v40; // eax
  RenderPass_DecodedLayout *v41; // eax
  NiProperty *data; // eax
  __int16 m_uiRefCount; // cx
  char v44; // al
  ShadowSceneLight_DecodedLayout *FirstActiveNonShadowLight; // edi
  bool v46; // bl
  RenderPass_DecodedLayout *v47; // eax
  RenderPass_DecodedLayout *v48; // eax
  __int16 v49; // cx
  ShadowSceneLight *v50; // [esp-30h] [ebp-CCh]
  ShadowSceneLight *v51; // [esp-2Ch] [ebp-C8h]
  ShadowSceneLight *v52; // [esp-1Ch] [ebp-B8h]
  char decalPassFlags[4]; // [esp+15h] [ebp-87h] BYREF
  char v54; // [esp+19h] [ebp-83h]
  bool v55; // [esp+1Ah] [ebp-82h]
  char v56; // [esp+1Bh] [ebp-81h] BYREF
  unsigned int v57; // [esp+1Ch] [ebp-80h]
  _BOOL4 isSpeedTreeBranchProperty; // [esp+21h] [ebp-7Bh]
  char v59; // [esp+25h] [ebp-77h]
  bool passInfoBit4000; // [esp+26h] [ebp-76h]
  bool v61; // [esp+27h] [ebp-75h]
  int v62; // [esp+28h] [ebp-74h]
  _DWORD *v63; // [esp+2Ch] [ebp-70h]
  ShadowSceneLight *j; // [esp+30h] [ebp-6Ch]
  int v65; // [esp+36h] [ebp-66h]
  int v66; // [esp+3Ah] [ebp-62h]
  char v67; // [esp+3Eh] [ebp-5Eh]
  char v68; // [esp+3Fh] [ebp-5Dh]
  char v69; // [esp+43h] [ebp-59h]
  int v70; // [esp+47h] [ebp-55h]
  bool v71; // [esp+4Bh] [ebp-51h]
  bool v72; // [esp+4Ch] [ebp-50h]
  bool v73; // [esp+4Dh] [ebp-4Fh]
  bool v74; // [esp+4Eh] [ebp-4Eh]
  unsigned __int8 v75; // [esp+4Fh] [ebp-4Dh]
  int v76; // [esp+50h] [ebp-4Ch] BYREF
  int v77; // [esp+54h] [ebp-48h]
  char useAlphaDecalSelector[4]; // [esp+58h] [ebp-44h]
  int v79; // [esp+5Ch] [ebp-40h]
  RenderPass_DecodedLayout *v80; // [esp+60h] [ebp-3Ch] BYREF
  __int64 v81; // [esp+64h] [ebp-38h] BYREF
  int v82; // [esp+6Ch] [ebp-30h]
  int v83; // [esp+70h] [ebp-2Ch]
  NiProperty *v84; // [esp+74h] [ebp-28h]
  bool passInfoBit2; // [esp+78h] [ebp-24h]
  char v86; // [esp+7Ch] [ebp-20h]
  int v87; // [esp+80h] [ebp-1Ch]
  NiPropertyState *v88; // [esp+84h] [ebp-18h] BYREF
  NiPropertyState *output; // [esp+88h] [ebp-14h] BYREF
  int v90; // [esp+8Ch] [ebp-10h]
  int v91; // [esp+98h] [ebp-4h]

  passInfo = this->base.member.passInfo; /*0x85ae4c*/
  v7 = *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6]; /*0x85ae4f*/
  v57 = 0; /*0x85ae64*/
  if ( (passInfo & 1) != 0 || (LOBYTE(j) = 0, (passInfo & 0x10) != 0) ) /*0x85ae74*/
    LOBYTE(j) = 1; /*0x85ae76*/
  decalPassFlags[1] = (passInfo & 0x80) != 0; /*0x85ae81*/
  v86 = (passInfo & 0x20000) != 0; /*0x85ae8c*/
  passInfoBit2 = (passInfo & 2) != 0; /*0x85aea3*/
  LOBYTE(v80) = (passInfo & 0x200000) != 0; /*0x85aeab*/
  LOBYTE(v65) = (passInfo & 8) != 0; /*0x85aeaf*/
  if ( (passInfo & 0x20) != 0 || (decalPassFlags[3] = 0, v7 == 3) ) /*0x85aebe*/
    decalPassFlags[3] = 1; /*0x85aec0*/
  v8 = *((_DWORD **)this + 0x31); /*0x85aec5*/
  useAlphaDecalSelector[0] = (passInfo & 0x100) != 0; /*0x85aed8*/
  LOBYTE(v70) = *v8 != 0; /*0x85aee9*/
  geomData = geometry->member.geomData; /*0x85aeed*/
  v68 = (passInfo & 0x400) != 0; /*0x85aef3*/
  v10 = OB_RendererGlobalState_010201A0.pad_1DB[0] == 0; /*0x85aeff*/
  LOBYTE(v90) = geomData->member.m_pkColor != 0; /*0x85af06*/
  if ( !v10 /*0x85af69*/
    || !LODWORD(unk_B43108[0])
    || (OB_RendererGlobalState_010201A0.pad_00D[0x9A] & 0x20) == 0
    || *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2
    || (passInfo & 0x2000) != 0
    || (v11 = g_CanopyShadowProjectionScale,
        v79 = (unsigned __int16)v76 | 0xC00,
        v81 = (__int64)v11,
        !(unsigned int)(__int64)v11)
    || (LOBYTE(v66) = 1, passInfo >> 0x1C == 1) )
  {
    LOBYTE(v66) = 0; /*0x85af6b*/
  }
  v12 = (struct NiRTTI *)(*((int (__thiscall **)(BSShaderLightingPropertyLayout_t *))this->base.vtbl + 1))(this); /*0x85af77*/
  if ( v12 ) /*0x85af7b*/
  {
    while ( v12 != &NiRTTI_SpeedTreeBranchShaderProperty ) /*0x85af85*/
    {
      v12 = v12->parent; /*0x85af8b*/
      if ( !v12 ) /*0x85af90*/
        goto LABEL_18; /*0x85af90*/
    }
    v13 = 1; /*0x85b0e3*/
  }
  else
  {
LABEL_18:
    v13 = 0; /*0x85af92*/
  }
  v10 = (v13 != 0 ? (unsigned int)this : 0) == 0;
  v14 = *((int (__thiscall **)(BSShaderLightingPropertyLayout_t *))this->base.vtbl + 1); /*0x85af9e*/
  LOBYTE(isSpeedTreeBranchProperty) = !v10; /*0x85afa1*/
  v15 = (NiRTTI *)v14(this); /*0x85afa6*/
  if ( v15 ) /*0x85afaa*/
  {
    while ( v15 != &stru_B478B0 ) /*0x85afb5*/
    {
      v15 = v15->parent; /*0x85afbb*/
      if ( !v15 ) /*0x85afc0*/
        goto LABEL_22; /*0x85afc0*/
    }
    v16 = 1; /*0x85b0ea*/
  }
  else
  {
LABEL_22:
    v16 = 0; /*0x85afc2*/
  }
  v10 = (v16 != 0 ? (unsigned int)this : 0) == 0;
  v17 = *((int (__thiscall **)(BSShaderLightingPropertyLayout_t *))this->base.vtbl + 1); /*0x85afce*/
  v71 = !v10; /*0x85afd1*/
  v18 = (struct NiRTTI *)v17(this); /*0x85afd6*/
  if ( v18 ) /*0x85afda*/
  {
    while ( v18 != &NiRTTI_SpeedTreeLeafShaderProperty ) /*0x85afe5*/
    {
      v18 = v18->parent; /*0x85afeb*/
      if ( !v18 ) /*0x85aff0*/
        goto LABEL_26; /*0x85aff0*/
    }
    v19 = 1; /*0x85b0f1*/
  }
  else
  {
LABEL_26:
    v19 = 0; /*0x85aff2*/
  }
  v20 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le; /*0x85affc*/
  v75 = OB_RendererGlobalState_010201A0.pad_00D[0x98]; /*0x85b002*/
  v77 = v20; /*0x85b006*/
  v10 = (v19 != 0 ? (unsigned int)this : 0) == 0;
  v21 = this->base.member.passInfo; /*0x85b00e*/
  v73 = !v10; /*0x85b011*/
  LOBYTE(v82) = (v21 & 0x400000) != 0; /*0x85b01b*/
  LOBYTE(v62) = (v21 & 0x800) != 0; /*0x85b025*/
  LOBYTE(v83) = (v21 & 0x1000) != 0; /*0x85b02f*/
  passInfoBit4000 = (v21 & 0x4000) != 0; /*0x85b039*/
  v72 = (v21 & 0x8000) != 0; /*0x85b043*/
  LOBYTE(v79) = (v21 & 0x10000) != 0; /*0x85b04d*/
  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x85b052*/
  v55 = sub_7AA380(Global); /*0x85b05e*/
  v23 = this->base.member.passInfo; /*0x85b062*/
  if ( (v23 & 0x100000) == 0 || (v10 = OB_ShaderPassControl_010201A0.unk_01[1] == 0, v67 = 0, !v10) )// [Verified] In inherited PPLighting pass setup, bFullBrightLighting modifies the branch for property passInfo bit 0x100000. /*0x85b078*/
    v67 = 1; /*0x85b07a*/
  v69 = (v23 & 0x40000) != 0; /*0x85b088*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x85b08d*/
  v25 = InterlockedDecrement; /*0x85b092*/
  v26 = NiPropertyByID; /*0x85b098*/
  v84 = NiPropertyByID; /*0x85b09c*/
  if ( !NiPropertyByID ) /*0x85b0a0*/
  {
    v10 = *NiGeometry_GetPropertyState(geometry, &output) == 0; /*0x85b0b5*/
    v91 = 0; /*0x85b0b8*/
    if ( v10 ) /*0x85b0c3*/
    {
      v26 = 0; /*0x85b0f8*/
    }
    else
    {
      v26 = *((NiProperty **)*NiGeometry_GetPropertyState(geometry, &v88) + 2); /*0x85b0d6*/
      v57 = 1; /*0x85b0d9*/
    }
    v84 = v26; /*0x85b0ff*/
    if ( (v57 & 1) != 0 ) /*0x85b103*/
    {
      v27 = v88; /*0x85b105*/
      v57 &= ~1u; /*0x85b10c*/
      if ( v88 ) /*0x85b113*/
      {
        if ( !v25((volatile LONG *)v88 + 1) ) /*0x85b119*/
        {
          if ( v27 ) /*0x85b121*/
            (**(void (__thiscall ***)(NiPropertyState *, int))v27)(v27, 1); /*0x85b12c*/
        }
      }
    }
    v28 = output; /*0x85b12e*/
    v91 = 0xFFFFFFFF; /*0x85b137*/
    if ( output ) /*0x85b142*/
    {
      if ( !v25((volatile LONG *)output + 1) ) /*0x85b148*/
      {
        if ( v28 ) /*0x85b150*/
          (**(void (__thiscall ***)(NiPropertyState *, int))v28)(v28, 1); /*0x85b15b*/
      }
    }
    if ( !v26 ) /*0x85b15f*/
      goto LABEL_48; /*0x85b15f*/
  }
  v10 = ((int)v26[1].vtbl & 1) == 0; /*0x85b161*/
  decalPassFlags[2] = 1; /*0x85b165*/
  if ( v10 ) /*0x85b16a*/
LABEL_48:
    decalPassFlags[2] = 0; /*0x85b16c*/
  if ( v26 && ((int)v26[1].vtbl & 0x200) != 0 ) /*0x85b180*/
  {
    LOBYTE(v87) = 1; /*0x85b182*/
    useAlphaDecalSelector[0] = 0; /*0x85b18a*/
  }
  else
  {
    LOBYTE(v87) = 0; /*0x85b1a5*/
  }
  if ( 0.0 == *((float *)this + 0x29) ) /*0x85b19c*/
  {
    decalPassFlags[1] = 0; /*0x85b19e*/
  }
  else if ( v86 ) /*0x85b1b4*/
  {
    decalPassFlags[1] = 1; /*0x85b1b6*/
    LOBYTE(j) = 0; /*0x85b1bb*/
  }
  if ( 0.0 == *((float *)this + 0x27) ) /*0x85b1cb*/
    LOBYTE(j) = 0; /*0x85b1cd*/
  v29 = *(_DWORD **)(GetShadowSceneNode(this->base.member.passInfo >> 0x1C) + 0x118); /*0x85b1e1*/
  v63 = v29; /*0x85b1ef*/
  if ( !(_BYTE)j /*0x85b213*/
    || (v30 = *ShadowSceneLight_GetLightRef(v29, &v76),
        v57 |= 2u,
        v59 = 1,
        !NiPoint3__NotEqual((const NiPoint3 *)(v30 + 0xF8), &stru_B3FA90)) )
  {
    v59 = 0; /*0x85b221*/
  }
  if ( (v57 & 2) != 0 ) /*0x85b22b*/
  {
    v31 = (void (__thiscall ***)(_DWORD, int))v76; /*0x85b22d*/
    if ( v76 ) /*0x85b233*/
    {
      if ( !v25((volatile LONG *)(v76 + 4)) ) /*0x85b239*/
      {
        if ( v31 ) /*0x85b241*/
          (**v31)(v31, 1); /*0x85b24b*/
      }
    }
  }
  v32 = passInfoBit2; /*0x85b260*/
  if ( this->base.member.alpha < 1.0 || decalPassFlags[2] ) /*0x85b270*/
  {
    v56 = 1; /*0x85b277*/
    if ( v55 ) /*0x85b27c*/
    {
      Lighting30__AppendPassSelector0Or2( /*0x85b290*/
        this,
        geometry,
        outContext,
        (RenderPass_DecodedLayout *)emit,
        &v56,
        passInfoBit2);
      LOBYTE(j) = 0; /*0x85b295*/
    }
    decalPassFlags[3] = 1; /*0x85b29a*/
  }
  decalPassFlags[0] = 1;                        // [Verified] Initializes passByte to 1 before passing its address to the selected pass builders, including BSShaderProperty_AppendDecalPassesByBatch. The helper forwards this byte to RenderPass_Construct; its downstream meaning remains Unknown. /*0x85b2a1*/
  v33 = BSShaderLightingProperty__CountFrustumVisibleEnabledLights((BSShaderLightingProperty *)this); /*0x85b2ab*/
  v74 = (rendererState & 1) != 0; /*0x85b2ba*/
  v61 = (rendererState & 2) != 0; /*0x85b2c1*/
  LODWORD(v81) = rendererState & 1; /*0x85b2c6*/
  decalPassFlags[2] = (rendererState & 4) != 0; /*0x85b2ce*/
  if ( (rendererState & 8) == 0 || (v54 = 1, !(_BYTE)j) ) /*0x85b2e2*/
    v54 = 0; /*0x85b2e4*/
  if ( !decalPassFlags[1] || (v55 = 1, (rendererState & 8) == 0) ) /*0x85b2f7*/
    v55 = 0; /*0x85b2f9*/
  LOBYTE(v76) = (rendererState & 0xF) == 0xF; /*0x85b30e*/
  decalPassFlags[1] = v76; /*0x85b312*/
  v56 = 1; /*0x85b319*/
  v57 = v33; /*0x85b31e*/
  if ( v72 || (_BYTE)v79 ) /*0x85b32d*/
  {
    BSShaderPPLightingProperty_AppendRefractionPass160To162( /*0x85bbb3*/
      this,
      geometry,
      outContext,
      (RenderPass_DecodedLayout *)emit,
      decalPassFlags,
      v32,
      v79);
    return; /*0x85bbb3*/
  }
  if ( v71 || v73 ) /*0x85b343*/
  {
    (*((void (__thiscall **)(BSShaderLightingPropertyLayout_t *, NiGeometry *, int, unsigned __int16 *, int))this->base.vtbl /*0x85bb98*/
     + 0x26))(
      this,
      geometry,
      rendererState,
      outContext,
      emit);
    return; /*0x85bb9a*/
  }
  if ( passInfoBit4000 ) /*0x85b34e*/
  {
    sub_85A390( /*0x85b997*/
      (int ***)this,
      (NiNode *)geometry,
      v63,
      (NiTPointerList_Node_void *)outContext,
      emit,
      decalPassFlags,
      (int)j,
      v66);
  }
  else if ( v67 ) /*0x85b359*/
  {
    if ( !v74 ) /*0x85b364*/
      goto LABEL_122; /*0x85b364*/
    if ( !OB_RendererGlobalState_010201A0.bBloomLightingEnabled ) /*0x85b36a*/
    {
      if ( decalPassFlags[3] ) /*0x85b37d*/
        goto LABEL_101; /*0x85b37d*/
      if ( !v61 ) /*0x85b383*/
        goto LABEL_121; /*0x85b383*/
      if ( decalPassFlags[2] != decalPassFlags[3] /*0x85b3b1*/
        && v54 != decalPassFlags[3]
        && v68 == decalPassFlags[3]
        && (v75 == decalPassFlags[3] || useAlphaDecalSelector[0] == decalPassFlags[3]) )
      {
LABEL_101:
        if ( (v33 <= 1u || decalPassFlags[3]) /*0x85b40a*/
          && v59
          && (!v33 || !(_BYTE)v66)
          && (v77 >= 5 || !(_BYTE)v62 && !v69)
          && 1.0 == *((float *)this + 0x27) )
        {
          if ( v68 ) /*0x85b415*/
          {
            sub_856D60( /*0x85b45b*/
              this,
              geometry,
              (int)v63,
              (NiTPointerList_Node_void *)outContext,
              (RenderPass_DecodedLayout *)emit,
              decalPassFlags,
              v32,
              v70,
              v68,
              v65,
              v66,
              v62,
              v83,
              isSpeedTreeBranchProperty,
              v82,
              v69);
            decalPassFlags[1] = 0; /*0x85b460*/
          }
          else
          {
            if ( v33 ) /*0x85b46d*/
            {
              FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b4b7*/
              sub_8588E0( /*0x85b4f4*/
                this,
                geometry,
                (int)v63,
                (int)FirstActiveLight,
                outContext,
                (RenderPass_DecodedLayout *)emit,
                decalPassFlags,
                v32,
                v70,
                0,
                v65,
                v66,
                v62,
                isSpeedTreeBranchProperty,
                v69);
            }
            else
            {
              sub_8580E0( /*0x85b4a6*/
                this,
                geometry,
                (int)v63,
                (NiTPointerList_Node_void *)outContext,
                (RenderPass_DecodedLayout *)emit,
                decalPassFlags,
                v32,
                v70,
                0,
                v65,
                v66,
                v62,
                isSpeedTreeBranchProperty,
                v69);
            }
            decalPassFlags[1] = 0; /*0x85b4ab*/
          }
          goto LABEL_140; /*0x85b465*/
        }
      }
    }
    if ( v61 ) /*0x85b508*/
    {
      if ( decalPassFlags[2] && (v33 <= 1u || decalPassFlags[3]) ) /*0x85b521*/
      {
        if ( v33 ) /*0x85b52a*/
        {
          v50 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b5ad*/
          sub_857750( /*0x85b5b9*/
            this,
            geometry,
            (int)v63,
            (int)v50,
            outContext,
            (RenderPass_DecodedLayout *)emit,
            decalPassFlags,
            v32,
            v70,
            v68,
            v65,
            v66,
            v62,
            isSpeedTreeBranchProperty,
            v69);
        }
        else
        {
          sub_856D60( /*0x85b570*/
            this,
            geometry,
            (int)v63,
            (NiTPointerList_Node_void *)outContext,
            (RenderPass_DecodedLayout *)emit,
            decalPassFlags,
            v32,
            v70,
            v68,
            v65,
            v66,
            v62,
            v83,
            isSpeedTreeBranchProperty,
            v82,
            v69);
        }
        if ( !v54 ) /*0x85b5c3*/
        {
          decalPassFlags[1] = 0; /*0x85b5c9*/
LABEL_140:
          if ( v55 ) /*0x85b8a1*/
          {
            v52 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b8c0*/
            sub_85A010(this, (int)geometry, (int)v63, (int)v52, outContext, emit, decalPassFlags, v32, v86, (char)v80); /*0x85b8cc*/
            decalPassFlags[1] = 1; /*0x85b8d1*/
          }
          if ( this->base.member.passes.numItems > 2 || *outContext > 2u ) /*0x85b8e0*/
          {
            if ( MEMORY[0xB42E97] ) /*0x85b8e6*/
            {
              if ( !isSpeedTreeBranchProperty && !decalPassFlags[3] && !useAlphaDecalSelector[0] ) /*0x85b90e*/
              {
                if ( (_BYTE)emit == 1 ) /*0x85b917*/
                {
                  v40 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85b91b*/
                  v80 = v40; /*0x85b923*/
                  v91 = 1; /*0x85b929*/
                  if ( v40 ) /*0x85b934*/
                    v41 = RenderPass_Construct(v40, geometry, 3u, 1u, 0, 0); /*0x85b947*/
                  else
                    v41 = 0; /*0x85b951*/
                  v91 = 0xFFFFFFFF; /*0x85b95b*/
                  v80 = v41; /*0x85b966*/
                  NiTList_AddHead(&this->base.member.passes.vtlb, &v80); /*0x85b96a*/
                }
                else
                {
                  ++*outContext; /*0x85b971*/
                }
              }
            }
          }
          goto LABEL_155; /*0x85b96f*/
        }
LABEL_136:
        if ( v59 ) /*0x85b816*/
          sub_859880( /*0x85b848*/
            this,
            geometry,
            (int)v63,
            outContext,
            (RenderPass_DecodedLayout *)emit,
            decalPassFlags,
            v32,
            v65,
            v66,
            v62,
            isSpeedTreeBranchProperty,
            v69);
        for ( i = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b856*/
              i;
              i = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) )
        {
          sub_859880( /*0x85b88c*/
            this,
            geometry,
            (int)i,
            outContext,
            (RenderPass_DecodedLayout *)emit,
            decalPassFlags,
            v32,
            v65,
            v66,
            v62,
            isSpeedTreeBranchProperty,
            v69);
        }
        goto LABEL_140; /*0x85b89a*/
      }
      if ( v33 > 1u ) /*0x85b5d9*/
      {
        v77 = (int)BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b634*/
        NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85b638*/
        sub_856510( /*0x85b678*/
          this,
          geometry,
          (int)v63,
          v77,
          (int)NextActiveLight,
          (NiTPointerList_Node_void *)outContext,
          (RenderPass_DecodedLayout *)emit,
          decalPassFlags,
          v32,
          v70,
          v68,
          v65,
          v66,
          v62,
          isSpeedTreeBranchProperty);
        v57 -= 2; /*0x85b67d*/
      }
      else
      {
        v51 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b60a*/
        sub_855E80( /*0x85b616*/
          this,
          geometry,
          (int)v63,
          (int)v51,
          outContext,
          (RenderPass_DecodedLayout *)emit,
          decalPassFlags,
          v32,
          v70,
          v68,
          v65,
          v66,
          v62,
          isSpeedTreeBranchProperty);
        v57 = 0; /*0x85b61b*/
      }
      v56 = 0; /*0x85b623*/
LABEL_122:
      if ( v61 ) /*0x85b6bc*/
      {
        if ( v56 ) /*0x85b6c7*/
        {
          sub_853720( /*0x85b6ec*/
            this,
            geometry,
            (int)v63,
            (NiTPointerList_Node_void *)outContext,
            (RenderPass_DecodedLayout *)emit,
            decalPassFlags,
            v32,
            0,
            v65,
            isSpeedTreeBranchProperty);
          v36 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85b6f3*/
        }
        else
        {
          v36 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85b6fc*/
        }
        for ( j = v36; j; j = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) ) /*0x85b707*/
        {
          v37 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85b712*/
          if ( v57 > 2 ) /*0x85b71c*/
          {
            v77 = (int)v37; /*0x85b769*/
            v38 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85b76d*/
            BSShaderPPLightingProperty_EmitThreePointAdditivePass( /*0x85b7a3*/
              this,
              geometry,
              (int)j,
              v77,
              (int)v38,
              (NiTPointerList_Node_void *)outContext,
              (RenderPass_DecodedLayout *)emit,
              decalPassFlags,
              v32,
              v68,
              v65,
              v62,
              isSpeedTreeBranchProperty);
            v57 -= 3; /*0x85b7a8*/
          }
          else
          {
            BSShaderPPLightingProperty_EmitTwoPointAdditivePass( /*0x85b74a*/
              this,
              geometry,
              (int)j,
              (int)v37,
              (NiTPointerList_Node_void *)outContext,
              (RenderPass_DecodedLayout *)emit,
              decalPassFlags,
              v32,
              v68,
              v65,
              v62,
              isSpeedTreeBranchProperty);
            if ( v57 > 1 ) /*0x85b754*/
              v57 -= 2; /*0x85b760*/
            else
              v57 = 0; /*0x85b756*/
          }
        }
      }
      if ( decalPassFlags[2] ) /*0x85b7c5*/
        sub_859720( /*0x85b801*/
          this,
          geometry,
          (int)v63,
          (NiTPointerList_Node_void *)outContext,
          emit,
          decalPassFlags,
          v32,
          v65,
          v68,
          v90,
          isSpeedTreeBranchProperty,
          0,
          (RenderPass_DecodedLayout *)v62,
          v69);
      if ( !v54 ) /*0x85b80b*/
        goto LABEL_140; /*0x85b80b*/
      goto LABEL_136; /*0x85b80b*/
    }
LABEL_121:
    sub_852150( /*0x85b689*/
      this,
      geometry,
      (int)v63,
      (NiTPointerList_Node_void *)outContext,
      (RenderPass_DecodedLayout *)emit,
      decalPassFlags,
      v32,
      v87,
      v70,
      isSpeedTreeBranchProperty);
    goto LABEL_122; /*0x85b6b2*/
  }
LABEL_155:
  if ( !decalPassFlags[1] ) /*0x85b9a1*/
  {
    if ( this->base.member.passes.numItems ) /*0x85b9a3*/
    {
      data = this->base.member.passes.end->data; /*0x85b9ac*/
      m_uiRefCount = data->members.super.m_uiRefCount; /*0x85b9af*/
      if ( m_uiRefCount != 0x190 && m_uiRefCount != 0x192 ) /*0x85b9bf*/
        HIBYTE(data->members.super.m_uiRefCount) = 1; /*0x85b9c1*/
    }
  }
  if ( (_BYTE)v76 ) /*0x85b9ca*/
  {
    if ( this->decalDataList_80.numItems ) /*0x85b9cc*/
      BSShaderProperty_AppendDecalPassesByBatch( /*0x85b9ed*/
        &this->base,
        geometry,
        outContext,
        emit,
        decalPassFlags,
        useAlphaDecalSelector[0],
        this->decalDataList_80.numItems);       // [Verified] Passes the decalDataList_80.numItems count at BSShaderLightingProperty+0x8C into BSShaderProperty_AppendDecalPassesByBatch after base lighting passes are assembled.
  }
  if ( decalPassFlags[1] ) /*0x85b9f7*/
  {
    v44 = v84 && ((int)v84[1].vtbl & 1) != 0; /*0x85ba07*/
    sub_854190( /*0x85ba25*/
      this,
      geometry,
      (NiTPointerList_Node_void *)outContext,
      (RenderPass_DecodedLayout *)emit,
      decalPassFlags,
      v32,
      isSpeedTreeBranchProperty,
      v44);
  }
  if ( *((_DWORD *)this + 0x38) ) /*0x85ba2a*/
    sub_85ACC0(this, (int)geometry, outContext, emit, decalPassFlags, v32); /*0x85ba45*/
  if ( OB_RendererGlobalState_010201A0.bBloomLightingEnabled ) /*0x85ba4a*/
  {
    if ( (_DWORD)v81 ) /*0x85ba58*/
      Lighting30__AppendPassSelector19EOr19F( /*0x85ba6c*/
        this,
        geometry,
        (NiTPointerList_Node_void *)outContext,
        (RenderPass_DecodedLayout *)emit,
        v32,
        v70);
    if ( !isSpeedTreeBranchProperty && !(_BYTE)v82 && !(_BYTE)v62 && !(_BYTE)v83 && !passInfoBit4000 && !v69 ) /*0x85ba99*/
      Lighting30__AppendPassSelectorAOrB(this, geometry, (int)outContext, (RenderPass_DecodedLayout *)emit, v32); /*0x85baa8*/
  }
  if ( BSShaderManager_IsShadowMappingReady() )
  {
    FirstActiveNonShadowLight = BSShaderLightingProperty__GetFirstActiveNonShadowLight((MEF_LightingPropertyIterationView32 *)this); /*0x85bac1*/
    if ( FirstActiveNonShadowLight )
    {
      v46 = isSpeedTreeBranchProperty; /*0x85bacb*/
      do
      {
        if ( FirstActiveNonShadowLight->perSourceProjectorMode_F4 )
        {
          v47 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85baef*/
          LODWORD(v81) = v47; /*0x85baf7*/
          v91 = 2; /*0x85bafd*/
          if ( v47 ) /*0x85bb08*/
            v48 = RenderPass_Construct(v47, geometry, 0, 0, 1u, FirstActiveNonShadowLight); /*0x85bb13*/
          else
            v48 = 0; /*0x85bb1d*/
          v91 = 0xFFFFFFFF; /*0x85bb24*/
          LODWORD(v81) = v48; /*0x85bb2f*/
          if ( passInfoBit2 )
          {
            v49 = 0x178; /*0x85bb35*/
          }
          else if ( passInfoBit4000 )
          {
            v49 = 0x179; /*0x85bb43*/
          }
          else
          {
            v49 = v46 ? 0x17A : 0x177;
          }
          v48->selector_04 = v49; /*0x85bb5b*/
          v48->pad_07 = 1; /*0x85bb5f*/
          NiTList_AddHead(&this->base.member.passes.vtlb, &v81); /*0x85bb6b*/
        }
        FirstActiveNonShadowLight = BSShaderLightingProperty__GetNextActiveNonShadowLight((MEF_LightingPropertyIterationView32 *)this); /*0x85bb77*/
      }
      while ( FirstActiveNonShadowLight );
    }
  }
}
