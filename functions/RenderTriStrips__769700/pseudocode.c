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

  if ( !this->member.lostDevice )
  {
    geomData = a2->member.geomData;
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() )
    {
      x = a2->member.super.m_kWorldBound.Center.x;
      skinData = a2->member.skinData;
      y = a2->member.super.m_kWorldBound.Center.y;
      z = a2->member.super.m_kWorldBound.Center.z;
      Radius = a2->member.super.m_kWorldBound.Radius;
      v5 = sub_768890(this, a2, 0);
      BuffData = a2->member.geomData->member.BuffData;
      v31 = v5;
      v7 = (NiD3DShader *)NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader);
      v26 = v7;
      v7->__vftable->Unk48((NiD3DShaderInterface *)v7);
      this->member.camUp.y = x;
      this->member.camUp.z = y;
      renderState = this->member.renderState;
      this->member.modelCamRight.x = z;
      this->member.modelCamRight.y = Radius;
      (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)renderState->member.ShaderConstantManager + 4))(renderState->member.ShaderConstantManager);
      if ( v31 )
      {
        m_uiRefCount = skinData[1].members.m_uiRefCount;
        v10 = *(char **)(m_uiRefCount + 8);
        v11 = *(_DWORD *)(m_uiRefCount + 0xC);
        v25 = (*(_WORD *)(v11 + 0x22) != 0) + 4;
        if ( v10 )
        {
          v12 = (unsigned __int16 *)(v11 + 0x20);
          v22 = v11 + 0x20;
          v24 = v10;
          do
          {
            if ( v7 == this->member.defaultShader && *v12 > this->member.HWBones )
            {
              TESTexture::ClearComponentReferences(v10);
            }
            else
            {
              v13 = *((INT **)v12 + 2);
              v14 = 0;
              v32 = 0;
              if ( v13[0x11] )
              {
                do
                {
                  v15 = v13[0x12];
                  if ( v15 )
                    v16 = *(unsigned __int16 *)(v15 + 2 * v32) - 2;
                  else
                    v16 = v13[0xF];
                  this->member.device->lpVtbl->DrawIndexedPrimitive(
                    this->member.device,
                    v25,
                    v13[0xD],
                    0,
                    *(unsigned __int16 *)(v22 - 4),
                    v14,
                    v16);
                  v17 = v32 + 1 < (unsigned int)v13[0x11];
                  v14 += v16 + 2;
                  ++v32;
                }
                while ( v17 );
                v7 = v26;
              }
            }
            v12 = (unsigned __int16 *)(v22 + 0x2C);
            v18 = v24-- == (char *)1;
            v22 += 0x2C;
          }
          while ( !v18 );
          geomData->member.m_usDirtyFlags &= 0xF000u;
          return;
        }
        goto LABEL_25;
      }
      if ( !BuffData->IB )
      {
        this->member.device->lpVtbl->DrawPrimitive(
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          BuffData->TriCount);
        goto LABEL_25;
      }
      v19 = 0;
      v33 = 0;
      if ( !BuffData->NumArrays )
      {
LABEL_25:
        geomData->member.m_usDirtyFlags &= 0xF000u;
        return;
      }
      do
      {
        ArrayLengths = BuffData->ArrayLengths;
        if ( ArrayLengths )
          TriCount = ArrayLengths[v33] - 2;
        else
          TriCount = BuffData->TriCount;
        this->member.device->lpVtbl->DrawIndexedPrimitive(
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          0,
          BuffData->VertCount,
          v19,
          TriCount);
        v17 = v33 + 1 < BuffData->NumArrays;
        v19 += TriCount + 2;
        ++v33;
      }
      while ( v17 );
      geomData->member.m_usDirtyFlags &= 0xF000u;
    }
  }
}
