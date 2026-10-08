// DeferredRendering implementation: TriStrips draw path confirms shader interface setup occurs before final D3D draw. Current deferred resolve stays EndScene-only and opt-in.
void __thiscall RenderTriStrips(NiDX9Renderer *this, NiGeometry *a2)
{
  float x; // ebx
  bool v5; // al
  NiGeometryBufferData *BuffData; // edi
  NiD3DShader *v7; // esi
  NiDX9RenderState *renderState; // ecx
  UInt32 m_uiRefCount; // eax
  char *v10; // ecx
  int v11; // eax
  unsigned __int16 *v12; // edx
  INT *v13; // ebx
  UINT v14; // edi
  INT v15; // eax
  UINT v16; // esi
  bool v17; // cf
  bool v18; // zf
  UINT v19; // ebx
  UInt16 *ArrayLengths; // eax
  UINT TriCount; // esi
  int v22; // [esp+1Ch] [ebp-24h]
  NiObject *skinData; // [esp+20h] [ebp-20h]
  char *v24; // [esp+20h] [ebp-20h]
  D3DPRIMITIVETYPE v25; // [esp+24h] [ebp-1Ch]
  NiD3DShader *v26; // [esp+28h] [ebp-18h]
  NiGeometryData *geomData; // [esp+2Ch] [ebp-14h]
  float y; // [esp+34h] [ebp-Ch]
  float z; // [esp+38h] [ebp-8h]
  float Radius; // [esp+3Ch] [ebp-4h]
  bool v31; // [esp+44h] [ebp+4h]
  int v32; // [esp+44h] [ebp+4h]
  int v33; // [esp+44h] [ebp+4h]

  if ( !this->member.lostDevice ) /*0x769706*/
  {
    geomData = a2->member.geomData; /*0x769723*/
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() ) /*0x769727*/
    {
      x = a2->member.super.m_kWorldBound.Center.x; /*0x76973f*/
      skinData = a2->member.skinData; /*0x769743*/
      y = a2->member.super.m_kWorldBound.Center.y; /*0x76974c*/
      z = a2->member.super.m_kWorldBound.Center.z; /*0x769753*/
      Radius = a2->member.super.m_kWorldBound.Radius; /*0x769757*/
      v5 = sub_768890(this, a2, 0); /*0x76975b*/
      BuffData = a2->member.geomData->member.BuffData; /*0x76976c*/
      v31 = v5; /*0x769775*/
      v7 = (NiD3DShader *)NiRTTI_Cast(&MEMORY[0xB42858], a2->member.shader); /*0x76977e*/
      v26 = v7; /*0x76978a*/
      v7->__vftable->Unk48((NiD3DShaderInterface *)v7); /*0x76978e*/
      this->member.camUp.y = x; /*0x76979c*/
      this->member.camUp.z = y; /*0x7697a2*/
      renderState = this->member.renderState; /*0x7697a8*/
      this->member.modelCamRight.x = z; /*0x7697ae*/
      this->member.modelCamRight.y = Radius; /*0x7697b4*/
      (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)renderState->member.ShaderConstantManager + 4))(renderState->member.ShaderConstantManager); /*0x7697c5*/
      if ( v31 ) /*0x7697cc*/
      {
        m_uiRefCount = skinData[1].members.m_uiRefCount; /*0x7697d6*/
        v10 = *(char **)(m_uiRefCount + 8); /*0x7697d9*/
        v11 = *(_DWORD *)(m_uiRefCount + 0xC); /*0x7697dc*/
        v25 = (*(_WORD *)(v11 + 0x22) != 0) + 4; /*0x7697ed*/
        if ( v10 ) /*0x7697f1*/
        {
          v12 = (unsigned __int16 *)(v11 + 0x20); /*0x7697f7*/
          v22 = v11 + 0x20; /*0x7697fa*/
          v24 = v10; /*0x7697fe*/
          do /*0x769899*/
          {
            if ( v7 == this->member.defaultShader && *v12 > this->member.HWBones ) /*0x769813*/
            {
              Shared_NoOpVirtual_60D0A0(v10); /*0x76981b*/
            }
            else
            {
              v13 = *((INT **)v12 + 2); /*0x769825*/
              v14 = 0; /*0x769828*/
              v32 = 0; /*0x76982d*/
              if ( v13[0x11] ) /*0x76982a*/
              {
                do /*0x769883*/
                {
                  v15 = v13[0x12]; /*0x769833*/
                  if ( v15 ) /*0x769838*/
                    v16 = *(unsigned __int16 *)(v15 + 2 * v32) - 2; /*0x769842*/
                  else
                    v16 = v13[0xF]; /*0x769847*/
                  this->member.device->lpVtbl->DrawIndexedPrimitive( /*0x76986f*/
                    this->member.device,
                    v25,
                    v13[0xD],
                    0,
                    *(unsigned __int16 *)(v22 - 4),
                    v14,
                    v16);
                  v17 = v32 + 1 < (unsigned int)v13[0x11]; /*0x769878*/
                  v14 += v16 + 2; /*0x76987b*/
                  ++v32; /*0x76987f*/
                }
                while ( v17 ); /*0x769883*/
                v7 = v26; /*0x769885*/
              }
            }
            v12 = (unsigned __int16 *)(v22 + 0x2C); /*0x76988d*/
            v18 = v24-- == (char *)1; /*0x769890*/
            v22 += 0x2C; /*0x769895*/
          }
          while ( !v18 ); /*0x769899*/
          geomData->member.m_usDirtyFlags &= 0xF000u; /*0x7698a3*/
          return; /*0x7698b0*/
        }
        goto LABEL_25; /*0x7697f1*/
      }
      if ( !BuffData->IB ) /*0x7698b7*/
      {
        this->member.device->lpVtbl->DrawPrimitive( /*0x769940*/
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          BuffData->TriCount);
        goto LABEL_25; /*0x769940*/
      }
      v19 = 0; /*0x7698b9*/
      v33 = 0; /*0x7698be*/
      if ( !BuffData->NumArrays ) /*0x7698c2*/
      {
LABEL_25:
        geomData->member.m_usDirtyFlags &= 0xF000u; /*0x769942*/
        return; /*0x769946*/
      }
      do /*0x76990e*/
      {
        ArrayLengths = BuffData->ArrayLengths; /*0x7698c4*/
        if ( ArrayLengths ) /*0x7698c9*/
          TriCount = ArrayLengths[v33] - 2; /*0x7698d3*/
        else
          TriCount = BuffData->TriCount; /*0x7698d8*/
        this->member.device->lpVtbl->DrawIndexedPrimitive( /*0x7698fa*/
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          0,
          BuffData->VertCount,
          v19,
          TriCount);
        v17 = v33 + 1 < BuffData->NumArrays; /*0x769903*/
        v19 += TriCount + 2; /*0x769906*/
        ++v33; /*0x76990a*/
      }
      while ( v17 ); /*0x76990e*/
      geomData->member.m_usDirtyFlags &= 0xF000u; /*0x769914*/
    }
  }
}
