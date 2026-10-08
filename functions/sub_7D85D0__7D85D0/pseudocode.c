// BSShaderPPLightingProperty RenderPass-list producer and cache owner. In emit mode, a matching (renderMode<<8)|buildFlags key reuses the property-owned list; on a miss it clears the lists and dispatches virtual +0x98 for shader-package class 1 or +0x9C for class >=2. Conditional Hair reaches this function only when B42F3E is enabled and flags this+0x1C contain 0x8000/0x10000; class >=2 then completes Hair's path to the inherited high-selector producer. A later class>=3/feature-0x10 path can append a mode-5 caster.
NiTPointerList__BSImageSpaceShader *__thiscall BSShaderPPLightingProperty_BuildRenderPasses(
        NiTPointerList__BSImageSpaceShader *this,
        NiGeometry *a2,
        int a3,
        _WORD *a4,
        int a5)
{
  NiPropertyState *v7; // ebx
  NiPropertyState *v8; // edi
  int v9; // ecx
  int v10; // eax
  NiProperty *NiPropertyByID; // eax
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  bool v16; // bl
  float x; // eax
  float y; // ecx
  float z; // edx
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // st2
  double v27; // st5
  double v28; // st5
  double v29; // st5
  double v30; // st4
  double v31; // st4
  double v32; // rt0
  double v33; // st4
  double v34; // st3
  double v35; // st6
  double v36; // st6
  double v37; // st6
  double v38; // st7
  double v39; // rtt
  double v40; // rt0
  double v41; // st6
  double v42; // st7
  NiProperty *v43; // ecx
  NiProperty *v44; // eax
  int v45; // eax
  float v46; // [esp+18h] [ebp-40h]
  float v47; // [esp+1Ch] [ebp-3Ch]
  NiPropertyState *v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  NiPropertyState *output; // [esp+28h] [ebp-30h] BYREF
  float v51; // [esp+2Ch] [ebp-2Ch]
  float v52; // [esp+30h] [ebp-28h]
  float v53; // [esp+34h] [ebp-24h]
  float v54; // [esp+38h] [ebp-20h]
  float v55; // [esp+3Ch] [ebp-1Ch]
  float v56; // [esp+40h] [ebp-18h]
  float v57; // [esp+44h] [ebp-14h]
  float v58; // [esp+48h] [ebp-10h]
  float v59; // [esp+4Ch] [ebp-Ch]
  float v60; // [esp+50h] [ebp-8h]
  float Radius; // [esp+54h] [ebp-4h]
  char v62; // [esp+5Ch] [ebp+4h]
  float v63; // [esp+5Ch] [ebp+4h]

  v7 = *NiGeometry_GetPropertyState(a2, &output); /*0x7d85e9*/
  v48 = v7; /*0x7d85f1*/
  if ( output ) /*0x7d85f5*/
  {
    v8 = output; /*0x7d85f7*/
    if ( !InterlockedDecrement((volatile LONG *)output + 1) ) /*0x7d85fd*/
      (**(void (__thiscall ***)(NiPropertyState *, int))v8)(v8, 1); /*0x7d8613*/
  }
  v9 = a3 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x7d8622*/
  v49 = v9; /*0x7d862a*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x7d862e*/
  {
    BSShaderLightingProperty__GetFirstActiveNonShadowLight((MEF_LightingPropertyIterationView32 *)this); /*0x7d8636*/
    if ( !*((_DWORD *)this + 0x11) ) /*0x7d863b*/
      goto LABEL_9; /*0x7d863b*/
    v10 = *(_DWORD *)(*((_DWORD *)this + 0xF) + 8); /*0x7d8644*/
    if ( *(_BYTE *)(v10 + 8) ) /*0x7d8647*/
      **(_DWORD **)(v10 + 0xC) = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17]; /*0x7d8655*/
    if ( !*((_DWORD *)this + 0x11) ) /*0x7d8657*/
    {
LABEL_9:
      if ( (_BYTE)a5 ) /*0x7d8662*/
      {
        if ( v7 ) /*0x7d8666*/
        {
          NiTPointerList::FreeAllNodes(this + 2); /*0x7d866b*/
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 0); /*0x7d8674*/
          if ( !NiPropertyByID && (NiPropertyByID = *((NiProperty **)v7 + 2)) == 0 /*0x7d8694*/
            || (LOBYTE(a3) = 1, ((int)NiPropertyByID[1].vtbl & 0x200) == 0) )
          {
            LOBYTE(a3) = 0; /*0x7d8696*/
          }
          BSShaderLightingProperty_AppendMode5CasterPass(this, (int)a2, a2->member.skinData != 0, a3);// Oblivion mode-5 PP-lighting admission: skinData presence and NiAlphaProperty flag 0x200 select exactly one caster bucket 6..9. /*0x7d86ae*/
        }
      }
    }
    return this + 2; /*0x7d86bd*/
  }
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 6 ) /*0x7d86c4*/
  {
    v14 = *((_DWORD *)this + 7); /*0x7d86f9*/
    v47 = *((float *)this + 0x27); /*0x7d8702*/
    v46 = *((float *)this + 0x29); /*0x7d870c*/
    v15 = 0.0; /*0x7d8710*/
    if ( (v14 & 0x80) == 0 || (v62 = 1, *(float *)&OB_RendererGlobalState_010201A0[0x207] <= 0.0) ) /*0x7d8724*/
      v62 = 0; /*0x7d8726*/
    v16 = (v14 & 1) != 0 && *(float *)&OB_RendererGlobalState_010201A0[0x1F7] > 0.0; /*0x7d873d*/
    if ( !v62 && !v16 ) /*0x7d874c*/
      goto LABEL_55; /*0x7d874c*/
    x = a2->member.super.m_kWorldBound.Center.x; /*0x7d8754*/
    y = a2->member.super.m_kWorldBound.Center.y; /*0x7d875d*/
    v52 = flt_B46638[8]; /*0x7d8760*/
    z = a2->member.super.m_kWorldBound.Center.z; /*0x7d8764*/
    v20 = flt_B46638[9]; /*0x7d8767*/
    v58 = x; /*0x7d876d*/
    v53 = v20; /*0x7d8771*/
    v59 = y; /*0x7d8775*/
    v21 = flt_B46638[0xA]; /*0x7d8779*/
    v60 = z; /*0x7d877f*/
    v54 = v21; /*0x7d8783*/
    Radius = a2->member.super.m_kWorldBound.Radius; /*0x7d878e*/
    v55 = x - v52; /*0x7d8796*/
    v56 = y - v53; /*0x7d87a2*/
    v57 = z - v54; /*0x7d87ae*/
    v51 = v56 * v56 + v55 * v55 + v57 * v57; /*0x7d87ce*/
    v51 = sqrt(v51); /*0x7d87db*/
    v51 = v51 - Radius; /*0x7d87ec*/
    v22 = v51; /*0x7d87f2*/
    if ( !v62 ) /*0x7d87f6*/
    {
      v27 = 0.0; /*0x7d8887*/
      goto LABEL_44; /*0x7d8887*/
    }
    if ( (*(_DWORD *)(this + 1) & 0x20000) != 0 ) /*0x7d8803*/
    {
      v23 = *(float *)&OB_RendererGlobalState_010201A0[0x203]; /*0x7d8805*/
      if ( v23 <= v22 ) /*0x7d8812*/
      {
        v24 = 0.0; /*0x7d8814*/
        v25 = 0.0; /*0x7d8816*/
        v26 = *(float *)&OB_RendererGlobalState_010201A0[0x207]; /*0x7d8818*/
LABEL_38:
        if ( v26 != v25 ) /*0x7d885a*/
        {
          v28 = (v22 - v23) / (v26 - v23); /*0x7d8864*/
          v15 = v24; /*0x7d8866*/
          if ( v28 <= 1.0 ) /*0x7d886f*/
          {
            v31 = v28; /*0x7d887d*/
            v29 = 1.0; /*0x7d887d*/
            v30 = 1.0 - v31; /*0x7d887f*/
          }
          else
          {
            v29 = 1.0; /*0x7d8871*/
            v30 = 1.0 - 1.0; /*0x7d8875*/
          }
          v46 = v30; /*0x7d8877*/
LABEL_45:
          if ( v16 ) /*0x7d888d*/
          {
            v33 = *(float *)&OB_RendererGlobalState_010201A0[0x1F3]; /*0x7d888f*/
            if ( v33 > v22 ) /*0x7d889c*/
            {
              v47 = 1.0; /*0x7d88f7*/
              goto LABEL_58; /*0x7d88fb*/
            }
            v34 = *(float *)&OB_RendererGlobalState_010201A0[0x1F7]; /*0x7d88aa*/
            if ( v34 == v15 ) /*0x7d88af*/
            {
              v47 = 1.0; /*0x7d8907*/
              goto LABEL_58; /*0x7d890b*/
            }
            if ( v34 < v22 ) /*0x7d88b8*/
            {
              v47 = v15; /*0x7d88c2*/
              goto LABEL_56; /*0x7d88c6*/
            }
            v35 = (v22 - v33) / (v34 - v33); /*0x7d88ce*/
            if ( v29 >= v35 ) /*0x7d88d7*/
              v47 = v29 - v35; /*0x7d88e9*/
            else
              v47 = v29 - v29; /*0x7d88df*/
          }
LABEL_55:
          if ( v15 != v47 ) /*0x7d891a*/
          {
LABEL_57:
            if ( v15 >= v47 ) /*0x7d8932*/
              goto LABEL_59; /*0x7d8932*/
LABEL_58:
            if ( v15 != *((float *)this + 0x27) ) /*0x7d893f*/
            {
LABEL_59:
              v36 = v46; /*0x7d8941*/
              if ( v46 == v15 ) /*0x7d8950*/
              {
                v37 = v15; /*0x7d8952*/
                v38 = v46; /*0x7d8952*/
                if ( v37 < *((float *)this + 0x29) ) /*0x7d895f*/
                {
                  *((_DWORD *)this + 9) = 0; /*0x7d8993*/
                  goto LABEL_68; /*0x7d8996*/
                }
                v39 = v37; /*0x7d8961*/
                v36 = v46; /*0x7d8961*/
                v15 = v39; /*0x7d8961*/
              }
              if ( v36 <= v15 ) /*0x7d896a*/
              {
                v38 = v36; /*0x7d8998*/
              }
              else
              {
                v40 = v36; /*0x7d896c*/
                v41 = v15; /*0x7d896c*/
                v38 = v40; /*0x7d896c*/
                if ( v41 == *((float *)this + 0x29) ) /*0x7d8979*/
                  *((_DWORD *)this + 9) = 0; /*0x7d897d*/
              }
LABEL_68:
              *((float *)this + 0x27) = v47; /*0x7d899c*/
              *((float *)this + 0x29) = v38; /*0x7d89ac*/
              if ( v48 ) /*0x7d89b2*/
                sub_7E2430((int)this, *(float *)(*((_DWORD *)v48 + 4) + 0x50)); /*0x7d89c0*/
              if ( (*(_DWORD *)(this + 1) & 0x80000) == 0 ) /*0x7d89cc*/
              {
LABEL_84:
                if ( *((_DWORD *)this + 9) == v49 && (_BYTE)a5 ) /*0x7d8a44*/
                  return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28);// Emit-mode cache hit returns the existing property-owned pass list without rebuilding or reallocating its RenderPass records. /*0x7d8a44*/
                if ( (_BYTE)a5 == 1 ) /*0x7d8a51*/
                {
                  BSShaderProperty_ClearRenderPassLists((BSShaderProperty *)this);// Emit-mode cache miss: destroy every old property-owned RenderPass/list node before producing the replacement cached list. /*0x7d8a55*/
                  if ( 0.0 == *((float *)this + 8) ) /*0x7d8a64*/
                    return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28); /*0x7d8a64*/
                  *((_DWORD *)this + 9) = v49;  // Base-builder ShaderPackage dispatch only: class 1 calls property +0x98; class >=2 calls +0x9C. This dispatch is not an independent entry from the accumulator. /*0x7d8a6e*/
                }
                else
                {
                  *a4 = 0; /*0x7d8a73*/
                }
                if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] == 1 ) /*0x7d8a80*/
                {
                  ((void (__thiscall *)(NiTPointerList__BSImageSpaceShader *, NiGeometry *, int, _WORD *, int))this->__vftable[0xC].FreeNode)( /*0x7d8a91*/
                    this,
                    a2,
                    a3,
                    a4,
                    a5);
                }
                else if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 )// Class >=2 dispatches +0x9C only after entering this base +0x5C builder. Exact Lighting30 never enters it; flagged Hair enters it but +0x9C returns through the earlier Refract/RefractF branch before the high-selector path. /*0x7d8a96*/
                {
                  ((void (__thiscall *)(NiTPointerList__BSImageSpaceShader *, NiGeometry *, int, _WORD *, int))this->__vftable[0xD].Destructor)( /*0x7d8aaa*/
                    this,
                    a2,
                    a3,
                    a4,
                    a5);                        // Sole BSShaderProperty-family virtual +0x9C invocation in Oblivion .text. Calls class-1 +0x98 or class>=2 +0x9C from the base +0x5C builder; no alternate Lighting30 rendering entry invokes the inherited slot.
                }
                if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 3 /*0x7d8ac6*/
                  || (OB_RendererGlobalState_010201A0[0xA7] & 0x10) == 0 )
                {
                  goto LABEL_103; /*0x7d8ac6*/
                }
                if ( (_BYTE)a5 ) /*0x7d8aca*/
                {
                  if ( v48 ) /*0x7d8ad1*/
                  {
                    v44 = NiNode_GetNiPropertyByID((NiNode *)a2, 0); /*0x7d8ad7*/
                    if ( !v44 && (v44 = *((NiProperty **)v48 + 2)) == 0 /*0x7d8afb*/
                      || (LOBYTE(a3) = 1, ((int)v44[1].vtbl & 0x200) == 0) )
                    {
                      LOBYTE(a3) = 0; /*0x7d8afd*/
                    }
                    BSShaderLightingProperty_AppendMode5CasterPass(this, (int)a2, a2->member.skinData != 0, a3); /*0x7d8b15*/
                  }
LABEL_103:
                  if ( (_BYTE)a5 ) /*0x7d8b1c*/
                  {
                    if ( *((_DWORD *)this + 0xD) ) /*0x7d8b1e*/
                    {
                      v45 = *(_DWORD *)(*((_DWORD *)this + 0xC) + 8); /*0x7d8b27*/
                      if ( v45 ) /*0x7d8b2c*/
                        *(_BYTE *)(v45 + 7) = 1; /*0x7d8b2e*/
                    }
                  }
                }
                return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x28); /*0x7d8b33*/
              }
              if ( v48 ) /*0x7d89d0*/
                v42 = *(float *)(*((_DWORD *)v48 + 4) + 0x50); /*0x7d89d5*/
              else
                v42 = 1.0; /*0x7d89da*/
              v63 = v42; /*0x7d89dc*/
              v43 = NiNode_GetNiPropertyByID((NiNode *)a2, 0); /*0x7d89f2*/
              if ( v63 == 1.0 ) /*0x7d8a01*/
              {
                if ( !v43 || ((int)v43[1].vtbl & 1) == 0 ) /*0x7d8a0b*/
                  goto LABEL_83; /*0x7d8a0b*/
                LOWORD(v43[1].vtbl) &= ~1u; /*0x7d8a0d*/
              }
              else
              {
                if ( v63 <= 0.0 || !v43 || ((int)v43[1].vtbl & 1) != 0 ) /*0x7d8a28*/
                  goto LABEL_83; /*0x7d8a28*/
                LOWORD(v43[1].vtbl) |= 1u; /*0x7d8a2a*/
              }
              *((_DWORD *)this + 9) = 0; /*0x7d8a2f*/
LABEL_83:
              *((float *)this + 8) = v63; /*0x7d8a32*/
              goto LABEL_84; /*0x7d8a32*/
            }
LABEL_65:
            v38 = v46; /*0x7d8982*/
            *((_DWORD *)this + 9) = 0; /*0x7d898a*/
            goto LABEL_68; /*0x7d898d*/
          }
LABEL_56:
          if ( v15 < *((float *)this + 0x27) ) /*0x7d8927*/
            goto LABEL_65; /*0x7d8927*/
          goto LABEL_57; /*0x7d8927*/
        }
        v27 = v24; /*0x7d882e*/
        v46 = 1.0; /*0x7d8832*/
LABEL_44:
        v32 = v27; /*0x7d8889*/
        v29 = 1.0; /*0x7d8889*/
        v15 = v32; /*0x7d8889*/
        goto LABEL_45; /*0x7d8889*/
      }
    }
    else
    {
      v23 = *(float *)&OB_RendererGlobalState_010201A0[0x1FB]; /*0x7d8838*/
      if ( v23 <= v22 ) /*0x7d8845*/
      {
        v24 = 0.0; /*0x7d8847*/
        v25 = 0.0; /*0x7d8849*/
        v26 = *(float *)&OB_RendererGlobalState_010201A0[0x1FF]; /*0x7d884b*/
        goto LABEL_38; /*0x7d884b*/
      }
    }
    v27 = 0.0; /*0x7d8822*/
    v46 = 1.0; /*0x7d8826*/
    goto LABEL_44; /*0x7d882a*/
  }
  if ( !*((_DWORD *)this + 0x15) ) /*0x7d86c6*/
  {
    v13 = *((_DWORD *)this + 7); /*0x7d86cc*/
    LOBYTE(v9) = (v13 & 0x100000) != 0; /*0x7d86d4*/
    sub_85ABD0((BSTextureManager *)this, (int)a2, (v13 & 2) != 0, v9); /*0x7d86e1*/
  }
  return (NiTPointerList__BSImageSpaceShader *)((char *)this + 0x48); /*0x7d86b3*/
}
