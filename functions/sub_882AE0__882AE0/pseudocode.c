// HairShaderProperty render-pass producer at vtable +0x5C. Normally constructs Hair selectors 0xE0 (no enabled light) or 0xE1 (active-light path), plus local mode/caster work. If renderer B42F3E is enabled and flags at this+0x1C contain 0x8000 or 0x10000, it delegates to BSShaderPPLightingProperty_BuildRenderPasses; shader-package class >=2 then invokes Hair vtable +0x9C and can emit inherited 0x177/0x178/0x179 records.
NiTPointerList__BSImageSpaceShader *__thiscall HairShaderProperty_BuildRenderPasses(
        HairShaderProperty *this,
        NiGeometry *geometry,
        int renderFlags,
        unsigned __int16 *passCount,
        int emitMode)
{                                               // Hair conditional fallback gate 1/3: renderer global B42F3E (OB_RendererGlobalState_010201A0+0xA5) must be nonzero. WinMain copies bDoImageSpaceEffect into this byte at 0x40E8CB.
  int v6; // eax
  int v8; // edi
  int v9; // ebx
  float v10; // ebp
  RenderPass_DecodedLayout *v11; // eax
  RenderPass_DecodedLayout *v12; // eax
  ShadowSceneLight *v13; // ebx
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  float y; // edx
  float z; // ecx
  float Radius; // edx
  float *v21; // edi
  double v22; // st7
  double v23; // st7
  bool v24; // c0
  bool v25; // c3
  double v26; // st7
  double v27; // st7
  float v28; // edx
  float v29; // eax
  int v30; // eax
  ShadowSceneLight *v31; // edi
  ShadowSceneLight *v32; // eax
  ShadowSceneLight *v33; // eax
  ShadowSceneLight *NextActiveLight; // eax
  ShadowSceneLight *v35; // eax
  RenderPass_DecodedLayout *v36; // eax
  RenderPass_DecodedLayout *v37; // eax
  NiProperty *NiPropertyByID; // edi
  bool v39; // zf
  float v40; // [esp+14h] [ebp-38h]
  float v41; // [esp+14h] [ebp-38h]
  float v42; // [esp+18h] [ebp-34h]
  float v43; // [esp+18h] [ebp-34h]
  float v44; // [esp+1Ch] [ebp-30h]
  float v45; // [esp+1Ch] [ebp-30h]
  float v46; // [esp+1Ch] [ebp-30h]
  float v47; // [esp+20h] [ebp-2Ch]
  float v48; // [esp+24h] [ebp-28h] BYREF
  float v49; // [esp+28h] [ebp-24h]
  float v50; // [esp+2Ch] [ebp-20h]
  float x; // [esp+30h] [ebp-1Ch]
  float v52; // [esp+34h] [ebp-18h]
  float v53; // [esp+38h] [ebp-14h]
  float v54; // [esp+3Ch] [ebp-10h]
  int v55; // [esp+48h] [ebp-4h]

  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x882b09*/
  {
    v6 = *((_DWORD *)this + 7);                 // Hair conditional fallback gate 2/3: HairShaderProperty flags at this+0x1C must contain 0x8000 or 0x10000; otherwise the local Hair E0/E1 producer remains active. /*0x882b12*/
    if ( (v6 & 0x8000) != 0 || (v6 & 0x10000) != 0 ) /*0x882b21*/
      return BSShaderPPLightingProperty_BuildRenderPasses( /*0x882b3e*/
               (NiTPointerList__BSImageSpaceShader *)this,
               geometry,
               renderFlags,
               passCount,
               emitMode);                       // Flagged Hair fallback call into base +0x5C. The required Refract/RefractF bit remains set and forces the class>=2 +0x9C early refraction return; class 1 uses +0x98, which has no high-selector construction.
  }
  v8 = renderFlags | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0.pad_00D[6] << 8); /*0x882b50*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 5 ) /*0x882b58*/
    return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x38); /*0x882b5d*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 6 ) /*0x882b66*/
  {
    sub_85ABD0((BSTextureManager *)this, geometry, geometry->member.skinData != 0, 0); /*0x882b7c*/
    return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x48); /*0x882b84*/
  }
  v9 = emitMode; /*0x882b8c*/
  if ( *((_DWORD *)this + 9) != v8 || !(_BYTE)emitMode ) /*0x882b94*/
  {
    if ( (_BYTE)emitMode == 1 ) /*0x882b9d*/
    {
      BSShaderProperty_ClearRenderPassLists((BSShaderProperty *)this); /*0x882b9f*/
      *((_DWORD *)this + 9) = v8; /*0x882ba4*/
    }
    else
    {
      *passCount = 0; /*0x882bad*/
    }
    v10 = *(float *)(GetShadowSceneNode(*((_DWORD *)this + 7) >> 0x1C) + 0x118); /*0x882bc1*/
    if ( (unsigned __int16)BSShaderLightingProperty__CountFrustumVisibleEnabledLights(this) ) /*0x882bcc*/
    {
      *(float *)&v13 = COERCE_FLOAT(BSShaderLightingProperty__GetFirstActiveLight(this)); /*0x882c45*/
      v14 = (float *)*ShadowSceneLight_GetLightRef((_DWORD *)LODWORD(v10), &renderFlags); /*0x882c53*/
      v15 = v14[0x3B]; /*0x882c55*/
      v16 = v14[0x3C]; /*0x882c5b*/
      v17 = v14[0x3D]; /*0x882c61*/
      v48 = v15; /*0x882c67*/
      v49 = v16; /*0x882c6f*/
      v50 = v17; /*0x882c73*/
      NiPointerSlot_Release((void **)&renderFlags); /*0x882c77*/
      v47 = sub_8823C0(&v48); /*0x882c85*/
      y = geometry->member.super.m_kWorldBound.Center.y; /*0x882c90*/
      x = geometry->member.super.m_kWorldBound.Center.x; /*0x882c93*/
      z = geometry->member.super.m_kWorldBound.Center.z; /*0x882c97*/
      v52 = y; /*0x882c9a*/
      Radius = geometry->member.super.m_kWorldBound.Radius; /*0x882c9e*/
      v53 = z; /*0x882ca5*/
      v54 = Radius; /*0x882cac*/
      v21 = (float *)*ShadowSceneLight_GetLightRef(v13, &renderFlags); /*0x882cb5*/
      NiPointerSlot_Release((void **)&renderFlags); /*0x882cbb*/
      v40 = v21[0x22] - x; /*0x882cce*/
      v42 = v21[0x23] - v52; /*0x882cdc*/
      v44 = v21[0x24] - v53; /*0x882cea*/
      v48 = v40; /*0x882cf2*/
      v49 = v42; /*0x882cfa*/
      v50 = v44; /*0x882d02*/
      v22 = NiPoint3_Length(&v48); /*0x882d06*/
      v23 = v22 - v54; /*0x882d0b*/
      v24 = v23 > 0.0; /*0x882d11*/
      v25 = 0.0 == v23; /*0x882d11*/
      v26 = 0.0; /*0x882d15*/
      if ( v24 || v25 ) /*0x882d17*/
      {
        v45 = v21[0x22] - x; /*0x882d2c*/
        v43 = v21[0x23] - v52; /*0x882d3a*/
        v41 = v21[0x24] - v53; /*0x882d48*/
        v48 = v45; /*0x882d50*/
        v49 = v43; /*0x882d58*/
        v50 = v41; /*0x882d60*/
        v27 = NiPoint3_Length(&v48); /*0x882d64*/
        v26 = v27 - v54; /*0x882d69*/
      }
      v46 = v26; /*0x882d73*/
      v28 = v21[0x3C]; /*0x882d77*/
      v29 = v21[0x3D]; /*0x882d7d*/
      v48 = v21[0x3B]; /*0x882d83*/
      v49 = v28; /*0x882d8b*/
      v50 = v29; /*0x882d8f*/
      *(float *)&renderFlags = sub_8823C0(&v48) * (v46 * (1.0 / v46)); /*0x882da6*/
      if ( *(float *)&renderFlags >= (double)v47 ) /*0x882db9*/
      {
        *((_DWORD *)this + 7) |= 0x400u; /*0x882e09*/
        v48 = *(float *)&v13; /*0x882e12*/
        *((_DWORD *)this + 9) = 0; /*0x882e18*/
        if ( v47 <= 0.0 ) /*0x882e22*/
        {
          NextActiveLight = BSShaderLightingProperty__GetNextActiveLight(this); /*0x882e51*/
          if ( NextActiveLight ) /*0x882e58*/
          {
            v10 = *(float *)&NextActiveLight; /*0x882e5c*/
            v35 = BSShaderLightingProperty__GetNextActiveLight(this); /*0x882e5e*/
            *((_DWORD *)this + 7) |= 0x800u; /*0x882e63*/
            v31 = v35; /*0x882e6a*/
            *((_DWORD *)this + 9) = 0; /*0x882e73*/
            sub_434980(this, 0x1000, v35 != 0); /*0x882e7c*/
          }
          else
          {
            v10 = 0.0; /*0x882e83*/
            v31 = 0; /*0x882e85*/
            *((_DWORD *)this + 7) &= 0xFFFFE7FF; /*0x882e87*/
            *((_DWORD *)this + 9) = 0; /*0x882e8e*/
          }
        }
        else
        {
          v33 = BSShaderLightingProperty__GetNextActiveLight(this); /*0x882e24*/
          *((_DWORD *)this + 9) = 0; /*0x882e2b*/
          if ( v33 ) /*0x882e2e*/
          {
            *((_DWORD *)this + 7) |= 0x1800u; /*0x882e30*/
            v31 = v33; /*0x882e37*/
          }
          else
          {
            v31 = 0; /*0x882e44*/
            *((_DWORD *)this + 7) = *((_DWORD *)this + 7) & 0xFFFFE7FF | 0x800; /*0x882e4c*/
          }
        }
      }
      else
      {
        *((_DWORD *)this + 7) &= 0xFFFFE3FF; /*0x882dbb*/
        v30 = *((_DWORD *)this + 7); /*0x882dc4*/
        v31 = 0; /*0x882dc7*/
        v48 = v10; /*0x882dc9*/
        v10 = 0.0; /*0x882dcd*/
        *((_DWORD *)this + 9) = 0; /*0x882dd1*/
        if ( *(float *)&v13 != 0.0 ) /*0x882dd4*/
        {
          v10 = *(float *)&v13; /*0x882ddb*/
          *((_DWORD *)this + 7) = v30 | 0x800; /*0x882ddd*/
          *((_DWORD *)this + 9) = 0; /*0x882de0*/
        }
        v32 = BSShaderLightingProperty__GetNextActiveLight(this); /*0x882de5*/
        if ( v32 ) /*0x882dec*/
        {
          *((_DWORD *)this + 7) |= 0x1000u; /*0x882df2*/
          v31 = v32; /*0x882df9*/
          *((_DWORD *)this + 9) = 0; /*0x882dfb*/
        }
      }
      if ( (_BYTE)emitMode == 1 ) /*0x882e96*/
      {
        *(float *)&v36 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x882e9a*/
        renderFlags = (int)v36; /*0x882ea2*/
        v55 = 1; /*0x882ea8*/
        if ( *(float *)&v36 == 0.0 ) /*0x882eb0*/
          *(float *)&v37 = 0.0; /*0x882ed2*/
        else
          *(float *)&v37 = COERCE_FLOAT(RenderPass_Construct(v36, geometry, 0xE1u, 1u, 3u, v48, v10, v31)); /*0x882ec8*/
        renderFlags = (int)v37; /*0x882ed4*/
        v55 = 0xFFFFFFFF; /*0x882ee0*/
        NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x28), (void **)&renderFlags); /*0x882ee8*/
        v9 = emitMode; /*0x882eed*/
        goto LABEL_41; /*0x882ef1*/
      }
      v9 = emitMode; /*0x882ef3*/
    }
    else if ( (_BYTE)v9 == 1 ) /*0x882bde*/
    {
      v11 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x882be6*/
      emitMode = (int)v11; /*0x882bee*/
      v55 = 0; /*0x882bf4*/
      if ( v11 ) /*0x882bf8*/
        *(float *)&v12 = COERCE_FLOAT(RenderPass_Construct(v11, geometry, 0xE0u, 1u, 1u, v10)); /*0x882c0a*/
      else
        *(float *)&v12 = 0.0; /*0x882c14*/
      v55 = 0xFFFFFFFF; /*0x882c1e*/
      renderFlags = (int)v12; /*0x882c26*/
      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x28), (void **)&renderFlags); /*0x882c2a*/
      *((_DWORD *)this + 7) &= 0xFFFFE3FF; /*0x882c2f*/
      *((_DWORD *)this + 9) = 0; /*0x882c36*/
      goto LABEL_41; /*0x882c39*/
    }
    ++*passCount; /*0x882efb*/
LABEL_41:
    if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 3 /*0x882f19*/
      && (OB_RendererGlobalState_010201A0.pad_00D[0x9A] & 0x10) != 0 )
    {
      if ( (_BYTE)v9 ) /*0x882f1d*/
      {
        NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x882f2c*/
        if ( !NiPropertyByID /*0x882f5f*/
          && (NiPropertyByID = *((NiProperty **)*NiGeometry_GetPropertyState(geometry, (NiPropertyState **)&renderFlags)
                               + 2),
              NiPointerSlot_Release((void **)&renderFlags),
              !NiPropertyByID)
          || (v39 = ((int)NiPropertyByID[1].vtbl & 0x200) == 0, LOBYTE(emitMode) = 1, v39) )
        {
          LOBYTE(emitMode) = 0; /*0x882f61*/
        }
        BSShaderLightingProperty_AppendMode5CasterPass(this, (int)geometry, geometry->member.skinData != 0, emitMode); /*0x882f79*/
      }
    }
  }
  if ( *((_DWORD *)this + 0x38) ) /*0x882f7e*/
  {
    LOBYTE(emitMode) = 1; /*0x882f9b*/
    BSShaderProperty_AppendTextureEffectPass((BSShaderProperty *)this, geometry, passCount, v9, (char *)&emitMode, 0); /*0x882fa0*/
  }
  return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28); /*0x882fa8*/
}
