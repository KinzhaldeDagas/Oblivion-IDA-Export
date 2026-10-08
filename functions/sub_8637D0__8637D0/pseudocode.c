// Oblivion Lighting30 property pass producer. Its normal material RenderPass seeds lightCount=1 with the ShadowSceneNode base light, then includes only active iterator lights whose byte +0xF4 is zero; per-source projected-shadow lights are deliberately excluded from that material light array. Normal material selectors are bounded through 0x146 and this function emits no 0x14E..0x151 records. In render mode 5 it builds selector 0x154 rigid or 0x155 skinned.
NiTPointerList__BSImageSpaceShader *__thiscall Lighting30ShaderProperty_BuildRenderPasses(
        Lighting30ShaderProperty *this,
        NiGeometry *geometry,
        int renderFlags,
        unsigned __int16 *passCount,
        int emitMode)
{
  int v5; // edi
  volatile LONG *v6; // ebp
  volatile LONG *v7; // esi
  Lighting30ShaderProperty *v8; // esi
  int v9; // eax
  bool v10; // bl
  int v11; // eax
  RenderPass_DecodedLayout *v12; // eax
  RenderPass_DecodedLayout *v13; // eax
  RenderPass_DecodedLayout *v15; // eax
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // eax
  unsigned int v18; // esi
  bool v19; // bl
  Lighting30ShaderProperty *v20; // esi
  int v21; // eax
  NiGeometry *v22; // edx
  volatile LONG *v23; // esi
  int v24; // ecx
  double v25; // st7
  float x; // ecx
  float y; // eax
  double v28; // st7
  float z; // ecx
  float Radius; // edx
  double v31; // st7
  double v32; // st7
  double v33; // st6
  double v34; // st7
  double v35; // st6
  double v36; // st6
  double v37; // st7
  double v38; // st6
  double v39; // st7
  double v40; // st6
  double v41; // st6
  double v42; // st7
  double v43; // rtt
  RenderPass_DecodedLayout *v44; // eax
  RenderPass_DecodedLayout *v45; // eax
  RenderPass_DecodedLayout *v46; // eax
  RenderPass_DecodedLayout *v47; // eax
  float v48; // edi
  RenderPass_DecodedLayout *v49; // eax
  RenderPass_DecodedLayout *v50; // esi
  ShadowSceneLight *i; // eax
  ShadowSceneLight *FirstActiveNonShadowLight; // eax
  volatile LONG *v53; // ecx
  int v54; // ebx
  BSShaderAccumulator *inited; // eax
  RenderPass_DecodedLayout *v56; // eax
  RenderPass_DecodedLayout *v57; // eax
  bool v58; // bl
  RenderPass_DecodedLayout *v59; // eax
  RenderPass_DecodedLayout *v60; // eax
  unsigned __int16 v61; // cx
  unsigned __int16 v62; // si
  RenderPass_DecodedLayout *v63; // eax
  RenderPass_DecodedLayout *v64; // eax
  ShadowSceneLight *v65; // esi
  RenderPass_DecodedLayout *v66; // eax
  int v67; // edi
  char v68; // bl
  RenderPass_DecodedLayout *v69; // eax
  RenderPass_DecodedLayout *v70; // eax
  RenderPass_DecodedLayout *v71; // eax
  float v72; // [esp-4h] [ebp-60h]
  bool v73; // [esp+15h] [ebp-47h]
  bool v74; // [esp+16h] [ebp-46h]
  bool v75; // [esp+17h] [ebp-45h]
  bool v76; // [esp+18h] [ebp-44h]
  char v77; // [esp+19h] [ebp-43h]
  bool v78; // [esp+1Ah] [ebp-42h]
  bool v79; // [esp+1Bh] [ebp-41h]
  bool v80; // [esp+1Ch] [ebp-40h]
  bool v81; // [esp+1Dh] [ebp-3Fh]
  bool v82; // [esp+1Eh] [ebp-3Eh]
  bool v83; // [esp+1Fh] [ebp-3Dh]
  volatile LONG *v85; // [esp+24h] [ebp-38h] BYREF
  volatile LONG *j; // [esp+28h] [ebp-34h] BYREF
  float v87; // [esp+2Ch] [ebp-30h] BYREF
  float v88; // [esp+30h] [ebp-2Ch]
  float v89; // [esp+34h] [ebp-28h] BYREF
  float v90; // [esp+38h] [ebp-24h]
  float v91; // [esp+3Ch] [ebp-20h]
  float v92; // [esp+40h] [ebp-1Ch]
  float v93; // [esp+44h] [ebp-18h]
  float v94; // [esp+48h] [ebp-14h]
  float v95; // [esp+4Ch] [ebp-10h]
  int v96; // [esp+58h] [ebp-4h]

  v5 = renderFlags | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x86380d*/
  v6 = *NiGeometry_GetPropertyState(geometry, &j); /*0x863817*/
  if ( *(float *)&j != 0.0 ) /*0x86381f*/
  {
    v7 = j; /*0x863821*/
    if ( !InterlockedDecrement(j + 1) ) /*0x863827*/
      (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x86383d*/
  }
  v8 = this; /*0x86383f*/
  v9 = *((_DWORD *)this + 7); /*0x863843*/
  v10 = (v9 & 2) != 0; /*0x863848*/
  v74 = v10; /*0x863855*/
  if ( (v9 & 0x100000) == 0 || (v77 = 0, OB_ShaderPassControl_010201A0[2]) )// [Verified] Lighting30 pass setup also gates property passInfo bit 0x100000 using OB_ShaderPassControl.bFullBrightLighting. /*0x86385b*/
    v77 = 1; /*0x863869*/
  if ( (unsigned __int16)*(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x863878*/
  {
    BSShaderLightingProperty__GetFirstActiveNonShadowLight(this); /*0x863880*/
    if ( *((_DWORD *)this + 0x11) ) /*0x863885*/
    {
      v11 = *(_DWORD *)(*((_DWORD *)this + 0xF) + 8); /*0x86388e*/
      if ( *(_BYTE *)(v11 + 8) ) /*0x863891*/
        **(_DWORD **)(v11 + 0xC) = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17]; /*0x86389f*/
      if ( *((_DWORD *)this + 0x11) ) /*0x8638a1*/
        return (NiTPointerList__BSImageSpaceShader *)((char *)v8 + 0x38); /*0x8638a5*/
    }
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this + 2); /*0x8638b0*/
    v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8638b7*/
    emitMode = (int)v12; /*0x8638c1*/
    if ( v10 ) /*0x8638c5*/
    {
      v96 = 1; /*0x8638f5*/
      if ( v12 ) /*0x8638fd*/
      {
        v13 = RenderPass_Construct(v12, geometry, 0x155u, 1u, 1u, *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17]);// Native Lighting30 base builder constructs selector 0x155. /*0x863915*/
        goto LABEL_18; /*0x86391d*/
      }
    }
    else
    {
      v96 = 0; /*0x8638c9*/
      if ( v12 ) /*0x8638d1*/
      {
        v13 = RenderPass_Construct(v12, geometry, 0x154u, 1u, 1u, *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17]);// Native Lighting30 base builder constructs selector 0x154. /*0x8638e9*/
LABEL_18:
        emitMode = (int)v13; /*0x863921*/
        v96 = 0xFFFFFFFF; /*0x86392c*/
        NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x38), (void **)&emitMode); /*0x863934*/
        v8 = this; /*0x863939*/
        return (NiTPointerList__BSImageSpaceShader *)((char *)v8 + 0x38); /*0x863940*/
      }
    }
    v13 = 0; /*0x86391f*/
    goto LABEL_18; /*0x86391f*/
  }
  if ( (unsigned __int16)*(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] == 6 ) /*0x863949*/
  {
    if ( *((_DWORD *)this + 0x15) ) /*0x86394f*/
      return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x48); /*0x863a0e*/
    if ( (v9 & 0x100000) != 0 ) /*0x86395d*/
    {
      v15 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x86395f*/
      emitMode = (int)v15; /*0x863967*/
      v96 = 2; /*0x86396d*/
      if ( v15 ) /*0x863975*/
      {
        v16 = RenderPass_Construct(v15, geometry, 0x15Du, 1u, 0, 0); /*0x863988*/
LABEL_31:
        v96 = 0xFFFFFFFF; /*0x8639f2*/
        emitMode = (int)v16; /*0x863a02*/
        NiTPointerList__AddTail((BSTextureManager *)this + 1, (void **)&emitMode); /*0x863a06*/
        return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x48); /*0x863a06*/
      }
    }
    else
    {
      v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x863992*/
      emitMode = (int)v17; /*0x86399c*/
      if ( v10 ) /*0x8639a0*/
      {
        v96 = 4; /*0x8639cb*/
        if ( v17 ) /*0x8639d3*/
        {
          v16 = RenderPass_Construct(v17, geometry, 0x15Cu, 1u, 0, 0); /*0x8639e6*/
          goto LABEL_31; /*0x8639ee*/
        }
      }
      else
      {
        v96 = 3; /*0x8639a4*/
        if ( v17 ) /*0x8639ac*/
        {
          v16 = RenderPass_Construct(v17, geometry, 0x15Bu, 1u, 0, 0); /*0x8639bf*/
          goto LABEL_31; /*0x8639c7*/
        }
      }
    }
    v16 = 0; /*0x8639f0*/
    goto LABEL_31; /*0x8639f0*/
  }
  v81 = (*((_DWORD *)this + 7) & 0x8000) != 0; /*0x863a18*/
  v82 = (v9 & 0x10000) != 0; /*0x863a22*/
  v78 = (*((_DWORD *)this + 7) & 0x800) != 0; /*0x863a2c*/
  v79 = (*((_DWORD *)this + 7) & 0x400) != 0; /*0x863a42*/
  v80 = (*(int (__thiscall **)(Lighting30ShaderProperty *, _DWORD))(*(_DWORD *)this + 0x90))(this, 0) != 0; /*0x863a4b*/
  v19 = 0; /*0x863a98*/
  if ( !OB_RendererGlobalState_010201A0[0x1DB] ) /*0x863a50*/
  {
    if ( LODWORD(unk_B43108[0]) ) /*0x863a59*/
    {
      if ( (OB_RendererGlobalState_010201A0[0xA7] & 0x20) != 0 && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x863a72*/
      {
        v18 = *((_DWORD *)this + 7); /*0x863a76*/
        if ( (v18 & 0x2000) == 0 && sub_7E5D00() && v18 >> 0x1C != 1 ) /*0x863a92*/
          v19 = 1; /*0x863a57*/
      }
    }
  }
  v20 = this; /*0x863a9a*/
  v21 = *((_DWORD *)this + 7); /*0x863a9e*/
  v22 = geometry; /*0x863aa1*/
  v75 = (v21 & 0x80) != 0; /*0x863ab0*/
  v76 = (v21 & 0x20000) != 0; /*0x863aba*/
  v83 = (v21 & 0x200000) != 0; /*0x863ac4*/
  v73 = geometry->member.geomData->member.m_pkColor != 0; /*0x863acd*/
  if ( *((_DWORD *)this + 0x38) ) /*0x863ad2*/
    v19 = 0; /*0x863adb*/
  if ( (v21 & 0x80000) != 0 ) /*0x863ae2*/
  {
    v87 = *(float *)(*((_DWORD *)*NiGeometry_GetPropertyState(geometry, &v85) + 4) + 0x50); /*0x863b02*/
    if ( *(float *)&v85 != 0.0 ) /*0x863b06*/
    {
      v23 = v85; /*0x863b08*/
      if ( !InterlockedDecrement(v85 + 1) ) /*0x863b0e*/
        (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x863b24*/
    }
    v24 = *((_DWORD *)v6 + 2); /*0x863b28*/
    v25 = v87; /*0x863b33*/
    if ( v87 == 1.0 ) /*0x863b38*/
    {
      if ( v24 ) /*0x863b3c*/
      {
        if ( (*(_BYTE *)(v24 + 0x18) & 1) != 0 ) /*0x863b42*/
        {
          *(_WORD *)(v24 + 0x18) &= ~1u; /*0x863b44*/
          *((_DWORD *)this + 9) = 0; /*0x863b4e*/
        }
      }
    }
    else if ( v25 > 0.0 ) /*0x863b60*/
    {
      if ( v24 ) /*0x863b64*/
      {
        if ( (*(_BYTE *)(v24 + 0x18) & 1) == 0 ) /*0x863b6a*/
        {
          *(_WORD *)(v24 + 0x18) |= 1u; /*0x863b70*/
          *((_DWORD *)this + 9) = 0; /*0x863b75*/
        }
      }
    }
    v22 = geometry; /*0x863b80*/
    *((float *)this + 8) = v25; /*0x863b84*/
    v20 = this; /*0x863b87*/
  }
  v85 = *((volatile LONG **)v20 + 0x29); /*0x863b94*/
  if ( v75 && *(float *)&OB_RendererGlobalState_010201A0[0x207] > 0.0 ) /*0x863bab*/
  {
    x = v22->member.super.m_kWorldBound.Center.x; /*0x863bb7*/
    y = v22->member.super.m_kWorldBound.Center.y; /*0x863bba*/
    v89 = flt_B46638[8]; /*0x863bbd*/
    v28 = flt_B46638[9]; /*0x863bc1*/
    v92 = x; /*0x863bc7*/
    z = v22->member.super.m_kWorldBound.Center.z; /*0x863bcb*/
    v90 = v28; /*0x863bce*/
    Radius = v22->member.super.m_kWorldBound.Radius; /*0x863bd8*/
    v91 = flt_B46638[0xA]; /*0x863bdb*/
    v93 = y; /*0x863bdf*/
    v94 = z; /*0x863be7*/
    v95 = Radius; /*0x863bf3*/
    v87 = v92 - v89; /*0x863bf7*/
    *(float *)&j = y - v90; /*0x863c03*/
    *(float *)&v85 = z - v91; /*0x863c0f*/
    v89 = v87; /*0x863c17*/
    v90 = *(float *)&j; /*0x863c1f*/
    v91 = *(float *)&v85; /*0x863c27*/
    v31 = NiPoint3_Length(&v89); /*0x863c2b*/
    *(float *)&j = v31 - v95; /*0x863c39*/
    v32 = *(float *)&j; /*0x863c3d*/
    if ( v76 ) /*0x863c41*/
    {
      v33 = *(float *)&OB_RendererGlobalState_010201A0[0x203]; /*0x863c43*/
      if ( v33 <= v32 ) /*0x863c50*/
      {
        v34 = v32 - v33; /*0x863c58*/
        v35 = *(float *)&OB_RendererGlobalState_010201A0[0x207] - v33; /*0x863c5a*/
LABEL_65:
        v37 = v34 / v35; /*0x863c8a*/
        v38 = 1.0; /*0x863c8c*/
        if ( v37 <= 1.0 ) /*0x863c95*/
          v38 = v37; /*0x863c9d*/
        *(float *)&v85 = 1.0 - v38; /*0x863ca1*/
        goto LABEL_68; /*0x863ca1*/
      }
    }
    else
    {
      v36 = *(float *)&OB_RendererGlobalState_010201A0[0x1FB]; /*0x863c62*/
      if ( v36 <= v32 && *(float *)&OB_RendererGlobalState_010201A0[0x1FF] != 0.0 ) /*0x863c82*/
      {
        v34 = v32 - v36; /*0x863c86*/
        v35 = *(float *)&OB_RendererGlobalState_010201A0[0x1FF] - v36; /*0x863c88*/
        goto LABEL_65; /*0x863c88*/
      }
    }
    *(float *)&v85 = 1.0; /*0x863cf4*/
    v42 = (float)1.0; /*0x863cf8*/
LABEL_73:
    v41 = 0.0; /*0x863cd4*/
    if ( 0.0 != *((float *)v20 + 0x29) ) /*0x863ce1*/
      goto LABEL_77; /*0x863ce1*/
    goto LABEL_74; /*0x863ce1*/
  }
LABEL_68:
  v39 = 0.0; /*0x863ca5*/
  v40 = *(float *)&v85; /*0x863cb1*/
  if ( *(float *)&v85 == 0.0 ) /*0x863cb6*/
  {
    v41 = 0.0; /*0x863cb8*/
    v42 = *(float *)&v85; /*0x863cb8*/
    if ( *((float *)v20 + 0x29) > 0.0 ) /*0x863cc5*/
    {
LABEL_74:
      *((_DWORD *)v20 + 9) = 0; /*0x863ce3*/
      goto LABEL_77; /*0x863cea*/
    }
    v40 = *(float *)&v85; /*0x863cc7*/
    v39 = 0.0; /*0x863cc7*/
  }
  if ( v40 > v39 ) /*0x863cd0*/
  {
    v42 = v40; /*0x863cd2*/
    goto LABEL_73; /*0x863cd2*/
  }
  v43 = v40; /*0x863cfe*/
  v41 = v39; /*0x863cfe*/
  v42 = v43; /*0x863cfe*/
LABEL_77:
  *((float *)v20 + 0x29) = v42; /*0x863d00*/
  if ( v42 == v41 ) /*0x863d0f*/
    v75 = 0; /*0x863d11*/
  if ( *((_DWORD *)v20 + 9) == v5 ) /*0x863d19*/
    return (NiTPointerList__BSImageSpaceShader *)((char *)v20 + 0x28); /*0x863d19*/
  BSShaderProperty_ClearRenderPassLists((BSShaderProperty *)v20); /*0x863d21*/
  if ( 0.0 == *((float *)v20 + 8) || !v77 ) /*0x863d3b*/
    return (NiTPointerList__BSImageSpaceShader *)((char *)v20 + 0x28); /*0x863d3b*/
  if ( v81 ) /*0x863d46*/
  {
    v44 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x863d4a*/
    emitMode = (int)v44; /*0x863d52*/
    v96 = 5; /*0x863d58*/
    if ( v44 ) /*0x863d60*/
      v45 = RenderPass_Construct(v44, geometry, 0, 1u, 0, 0); /*0x863d70*/
    else
      v45 = 0; /*0x863d7a*/
    emitMode = (int)v45; /*0x863d82*/
    v96 = 0xFFFFFFFF; /*0x863d8c*/
    v45->selector_04 = v74 + 0x156;             // Lighting30 Refract selector = 0x156 + passInfoBit2, yielding 0x156 or 0x157 within the Lighting30 resolver domain. /*0x863d9a*/
    NiTList_AddHead((_DWORD *)v20 + 0xA, &emitMode); /*0x863da3*/
    goto LABEL_184; /*0x863da8*/
  }
  if ( v82 ) /*0x863db2*/
  {
    v46 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x863db6*/
    emitMode = (int)v46; /*0x863dbe*/
    v96 = 6; /*0x863dc4*/
    if ( v46 ) /*0x863dcc*/
      v47 = RenderPass_Construct(v46, geometry, 0, 1u, 0, 0); /*0x863ddc*/
    else
      v47 = 0; /*0x863de6*/
    v96 = 0xFFFFFFFF; /*0x863df0*/
    emitMode = (int)v47; /*0x863df8*/
    v47->selector_04 = 0x158;                   // Lighting30 RefractF selector = 0x158, within the Lighting30 resolver domain. /*0x863dfc*/
    NiTList_AddHead((_DWORD *)v20 + 0xA, &emitMode); /*0x863e02*/
    goto LABEL_184; /*0x863e07*/
  }
  v48 = *(float *)(GetShadowSceneNode(*((_DWORD *)v20 + 7) >> 0x1C) + 0x118); /*0x863e1b*/
  v88 = v48; /*0x863e23*/
  *(float *)&v49 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x863e27*/
  v87 = *(float *)&v49; /*0x863e2f*/
  v96 = 7; /*0x863e35*/
  if ( *(float *)&v49 == 0.0 ) /*0x863e3d*/
    *(float *)&v50 = 0.0; /*0x863e59*/
  else
    *(float *)&v50 = COERCE_FLOAT(RenderPass_Construct(v49, geometry, 0, 1u, 0, 0)); /*0x863e55*/
  v96 = 0xFFFFFFFF; /*0x863e61*/
  v85 = (volatile LONG *)v50; /*0x863e69*/
  v50->lightCount_08 = 1; /*0x863e6d*/
  for ( i = BSShaderLightingProperty__GetFirstActiveNonShadowLight(this); /*0x863e78*/
        i;
        i = BSShaderLightingProperty__GetNextActiveNonShadowLight(this) )
  {
    if ( !*((_BYTE *)i + 0xF4) ) /*0x863e80*/
      ++v50->lightCount_08; /*0x863e89*/
  }
  if ( v50->lightCount_08 ) /*0x863e98*/
  {
    v50->lightArray_0C = (void **)FormHeapAlloc(4 * v50->lightCount_08); /*0x863ebd*/
    FirstActiveNonShadowLight = BSShaderLightingProperty__GetFirstActiveNonShadowLight(this); /*0x863ec0*/
    *(float *)v50->lightArray_0C = v48; /*0x863eca*/
    for ( j = (volatile LONG *)1; /*0x863ed4*/
          FirstActiveNonShadowLight;
          FirstActiveNonShadowLight = BSShaderLightingProperty__GetNextActiveNonShadowLight(this) )
    {
      if ( !*((_BYTE *)FirstActiveNonShadowLight + 0xF4) ) /*0x863ed6*/
      {
        v53 = j; /*0x863edf*/
        v50->lightArray_0C[(_DWORD)j] = FirstActiveNonShadowLight; /*0x863ee6*/
        j = (volatile LONG *)((char *)v53 + 1); /*0x863eec*/
      }
    }
    v50->lightCount_08 = (unsigned __int8)j; /*0x863eff*/
  }
  else
  {
    v50->lightArray_0C = 0; /*0x863f04*/
  }
  sub_434980(this, 0x1000000, 0); /*0x863f14*/
  if ( (*((_DWORD *)this + 7) & 0x40000) != 0 )
  {
    v54 = v19 ? 0x13C : 0x12F;
LABEL_134:
    v50->selector_04 = v54; /*0x86406a*/
    goto LABEL_135; /*0x86406a*/
  }
  if ( !v74 )
  {
    if ( v78 )
    {
      if ( v73 )
        v54 = v19 ? 0x144 : 0x137;
      else
        v54 = v19 ? 0x13D : 0x130;
    }
    else if ( v79 )
    {
      v54 = v19 ? 0x13E : 0x131;
    }
    else if ( v80 )
    {
      if ( v73 )
        v54 = v19 ? 0x145 : 0x138;
      else
        v54 = v19 ? 0x140 : 0x133;
    }
    else if ( v73 )
    {
      v54 = v19 ? 0x142 : 0x135;
    }
    else
    {
      v54 = v19 ? 0x13A : 0x12D;
    }
    goto LABEL_134; /*0x863f5a*/
  }
  if ( !v78 )
  {
    if ( v79 )
    {
      v54 = v19 ? 0x13F : 0x132;
    }
    else if ( v80 )
    {
      if ( v73 )
        v54 = v19 ? 0x146 : 0x139;
      else
        v54 = v19 ? 0x141 : 0x134;
    }
    else if ( v73 )
    {
      v54 = v19 ? 0x143 : 0x136;
    }
    else
    {
      v54 = v19 ? 0x13B : 0x12E;
    }
    goto LABEL_134; /*0x864019*/
  }
  if ( unk_B42E8C )
    unk_B42E8C("SHADER ERROR : no shader to handle BSSM_3x_SPx ( skinned & parallax )", 0);
LABEL_135:
  NiTList_AddHead((_DWORD *)this + 0xA, &v85); /*0x86406e*/
  if ( *((float *)this + 8) < 1.0 && (inited = BSShaderAccumulator_GetOrCreateGlobal(), sub_7AA380(inited)) ) /*0x864090*/
  {
    *(float *)&v56 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x86409b*/
    v87 = *(float *)&v56; /*0x8640a3*/
    v96 = 8; /*0x8640a9*/
    if ( *(float *)&v56 == 0.0 ) /*0x8640b1*/
      *(float *)&v57 = 0.0; /*0x8640cb*/
    else
      *(float *)&v57 = COERCE_FLOAT(RenderPass_Construct(v56, geometry, 0, 1u, 0, 0)); /*0x8640c1*/
    v58 = v74; /*0x8640cd*/
    v96 = 0xFFFFFFFF; /*0x8640dd*/
    v87 = *(float *)&v57; /*0x8640e5*/
    v57->selector_04 = v74 + 4; /*0x8640ec*/
    NiTList_AddHead((_DWORD *)this + 0xA, &v87); /*0x8640f2*/
  }
  else
  {
    v58 = v74; /*0x8640f9*/
  }
  if ( *((_DWORD *)this + 0x38) ) /*0x8640fd*/
  {
    *(float *)&v59 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x864108*/
    v87 = *(float *)&v59; /*0x864110*/
    v96 = 9; /*0x864116*/
    if ( *(float *)&v59 == 0.0 ) /*0x86411e*/
      *(float *)&v60 = 0.0; /*0x864138*/
    else
      *(float *)&v60 = COERCE_FLOAT(RenderPass_Construct(v59, geometry, 0, 1u, 0, 0)); /*0x86412e*/
    v87 = *(float *)&v60; /*0x864141*/
    v96 = 0xFFFFFFFF; /*0x864147*/
    v60->selector_04 = v58 + 0x15E; /*0x864155*/
    NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x28), (void **)&v87); /*0x86415e*/
  }
  if ( v75 ) /*0x864168*/
  {
    if ( OB_RendererGlobalState_010201A0[0x1DB] ) /*0x86416e*/
    {
      if ( !v76 ) /*0x86417c*/
      {
        if ( !v83 ) /*0x864187*/
        {
          if ( v58 ) /*0x86418b*/
          {
            v62 = v73 + 0x14B; /*0x8641e7*/
            goto LABEL_154; /*0x8641e9*/
          }
          v61 = 2 * v73 + 0x148; /*0x864196*/
LABEL_153:
          v62 = v61; /*0x86419d*/
LABEL_154:
          v63 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x86419f*/
          v88 = *(float *)&v63; /*0x8641a9*/
          v96 = 0xC; /*0x8641af*/
          if ( v63 ) /*0x8641b7*/
            *(float *)&v64 = COERCE_FLOAT(RenderPass_Construct(v63, geometry, 0, 0, 0, 0)); /*0x8641cb*/
          else
            *(float *)&v64 = 0.0; /*0x86427f*/
          v64->selector_04 = v62; /*0x864281*/
          goto LABEL_170; /*0x864281*/
        }
LABEL_158:
        if ( v58 ) /*0x8641f4*/
        {
          v62 = v73 + 0x14B; /*0x864204*/
          goto LABEL_154; /*0x864206*/
        }
        v61 = 2 * v73 + 0x147; /*0x864211*/
        goto LABEL_153; /*0x864218*/
      }
    }
    else if ( !v76 ) /*0x8641f0*/
    {
      goto LABEL_158; /*0x8641f0*/
    }
    *(float *)&v65 = COERCE_FLOAT(BSShaderLightingProperty__GetFirstActiveNonShadowLight(this)); /*0x864223*/
    *(float *)&v66 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x864225*/
    if ( *(float *)&v65 == 0.0 ) /*0x86422f*/
    {
      v87 = *(float *)&v66; /*0x864244*/
      v96 = 0xB; /*0x86424a*/
      if ( *(float *)&v66 != 0.0 ) /*0x864252*/
      {
        v72 = v88; /*0x864258*/
        goto LABEL_166; /*0x864258*/
      }
    }
    else
    {
      v88 = *(float *)&v66; /*0x864231*/
      v96 = 0xA; /*0x864237*/
      if ( *(float *)&v66 != 0.0 ) /*0x86423f*/
      {
        v72 = *(float *)&v65; /*0x864241*/
LABEL_166:
        *(float *)&v64 = COERCE_FLOAT(RenderPass_Construct(v66, geometry, 0, 0, 1u, v72)); /*0x864259*/
        v64->selector_04 = 0x14D; /*0x86426d*/
LABEL_170:
        j = (volatile LONG *)v64; /*0x864285*/
        v96 = 0xFFFFFFFF; /*0x864290*/
        NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x28), (void **)&j); /*0x864298*/
        goto LABEL_171; /*0x864298*/
      }
    }
    *(float *)&v64 = 0.0; /*0x864275*/
    *(_WORD *)4 = 0x14D; /*0x864277*/
    goto LABEL_170; /*0x86427d*/
  }
LABEL_171:
  v67 = *((_DWORD *)this + 0x23);               // [Verified] The Lighting30 3x-decal loop seeds remaining work from the inherited decalDataList item count at property+0x8C; it emits one 3x decal RenderPass per package-sized batch. /*0x86429d*/
  if ( v67 > 0 ) /*0x8642a5*/
  {
    v68 = emitMode; /*0x8642ab*/
    do /*0x8642c0*/
    {                                           // [Verified] Tests Lighting30ShaderProperty flag 0x100 to select the decal variant: clear selects 3x decal base, set selects the alpha variant.
      if ( (*((_DWORD *)this + 7) & 0x100) != 0 ) /*0x8642cb*/
      {
        if ( v68 != 1 ) /*0x86430e*/
        {
LABEL_182:
          ++*passCount; /*0x864362*/
          goto LABEL_183; /*0x864362*/
        }
        v71 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x864312*/
        emitMode = (int)v71; /*0x86431a*/
        v96 = 0xE; /*0x864320*/
        if ( !v71 ) /*0x864324*/
        {
LABEL_180:
          *(float *)&v70 = 0.0; /*0x864341*/
          goto LABEL_181; /*0x864341*/
        }
        *(float *)&v70 = COERCE_FLOAT(RenderPass_Construct(v71, geometry, 0x153u, 0, 0, 0));// [Verified] Constructs selector 0x153, which BSShaderProperty_GetRenderPassName maps to BSSM_3XDECAL_A. /*0x864337*/
      }
      else
      {
        if ( v68 != 1 ) /*0x8642d0*/
          goto LABEL_182; /*0x8642d0*/
        v69 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8642d8*/
        emitMode = (int)v69; /*0x8642e0*/
        v96 = 0xD; /*0x8642e6*/
        if ( !v69 ) /*0x8642ee*/
          goto LABEL_180; /*0x8642ee*/
        *(float *)&v70 = COERCE_FLOAT(RenderPass_Construct(v69, geometry, 0x152u, 0, 0, 0));// [Verified] Constructs selector 0x152, which BSShaderProperty_GetRenderPassName maps to BSSM_3XDECAL. /*0x864301*/
      }
LABEL_181:
      v96 = 0xFFFFFFFF; /*0x864343*/
      v85 = (volatile LONG *)v70; /*0x864357*/
      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x28), (void **)&v85); /*0x86435b*/
LABEL_183:
      v67 -= *(_DWORD *)&OB_ShaderPassControl_010201A0[4];// [Verified] Decrements remaining decalDataList count by OB_ShaderPassControl.decalPassBatchSize and repeats until exhausted; the same 2/6/8 batch policy is used by Lighting30 3x decal selectors. /*0x864366*/
    }
    while ( v67 > 0 ); /*0x8642c0*/
  }
LABEL_184:
  v20 = this; /*0x864374*/
  *((_DWORD *)this + 9) = renderFlags | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x864388*/
  return (NiTPointerList__BSImageSpaceShader *)((char *)v20 + 0x28);// End of complete 993-instruction Lighting30_BuildBasePasses audit: bounded selector ranges exclude 0x14E..0x151. Those selector IDs are consumer-only in retail Oblivion 1.2.416. /*0x86438e*/
}
