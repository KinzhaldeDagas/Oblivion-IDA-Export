void __thiscall RenderTriShapes(NiDX9Renderer *this, NiGeometry *a2)
{
  NiDX9Renderer *v2; // ebp
  bool v4; // al
  NiGeometryBufferData *BuffData; // edi
  bool v6; // bl
  UInt32 m_uiRefCount; // eax
  char *v8; // ecx
  int v9; // eax
  unsigned __int16 *v10; // esi
  INT *v11; // ebx
  unsigned int v12; // ebp
  UINT v13; // edi
  INT v14; // eax
  UINT v15; // esi
  bool v16; // zf
  UInt32 v17; // esi
  UINT v18; // ebp
  UInt16 *ArrayLengths; // eax
  UINT TriCount; // ebx
  char *v22; // [esp+20h] [ebp-10h]
  NiObject *v23; // [esp+24h] [ebp-Ch]
  D3DPRIMITIVETYPE v24; // [esp+28h] [ebp-8h]
  NiGeometryData *geomData; // [esp+2Ch] [ebp-4h]
  NiObject *skinData; // [esp+34h] [ebp+4h]
  unsigned __int16 *v27; // [esp+34h] [ebp+4h]

  v2 = this;
  if ( !this->member.lostDevice )
  {
    geomData = a2->member.geomData;
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() )
    {
      skinData = a2->member.skinData;
      v4 = sub_768890(v2, a2, 0);
      BuffData = a2->member.geomData->member.BuffData;
      v6 = v4;
      v23 = NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader);
      ((void (__thiscall *)(NiObject *))v23->__vftable->Unk_12)(v23);
      (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)v2->member.renderState->member.ShaderConstantManager
                                                           + 4))(v2->member.renderState->member.ShaderConstantManager);
      if ( v6 )
      {
        m_uiRefCount = skinData[1].members.m_uiRefCount;
        v8 = *(char **)(m_uiRefCount + 8);
        v9 = *(_DWORD *)(m_uiRefCount + 0xC);
        v24 = (*(_WORD *)(v9 + 0x22) != 0) + 4;
        if ( v8 )
        {
          v10 = (unsigned __int16 *)(v9 + 0x20);
          v27 = (unsigned __int16 *)(v9 + 0x20);
          v22 = v8;
          do
          {
            if ( v23 == (NiObject *)v2->member.defaultShader && *v10 > v2->member.HWBones )
            {
              TESTexture::ClearComponentReferences(v8);
            }
            else
            {
              v11 = *((INT **)v10 + 2);
              v12 = 0;
              v13 = 0;
              if ( v11[0x11] )
              {
                do
                {
                  v14 = v11[0x12];
                  if ( v14 )
                    v15 = *(unsigned __int16 *)(v14 + 2 * v12) - 2;
                  else
                    v15 = v11[0xF];
                  this->member.device->lpVtbl->DrawIndexedPrimitive(
                    this->member.device,
                    v24,
                    v11[0xD],
                    0,
                    v27[0xFFFFFFFE],
                    v13,
                    v15);
                  ++v12;
                  v13 += v15 + 2;
                }
                while ( v12 < v11[0x11] );
                v10 = v27;
              }
              v2 = this;
            }
            v10 += 0x16;
            v16 = v22-- == (char *)1;
            v27 = v10;
          }
          while ( !v16 );
          geomData->member.m_usDirtyFlags &= 0xF000u;
          return;
        }
        goto LABEL_26;
      }
      if ( !BuffData->IB )
      {
        v2->member.device->lpVtbl->DrawPrimitive(
          v2->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          BuffData->TriCount);
        goto LABEL_26;
      }
      v17 = 0;
      v18 = 0;
      if ( !BuffData->NumArrays )
      {
LABEL_26:
        geomData->member.m_usDirtyFlags &= 0xF000u;
        return;
      }
      do
      {
        ArrayLengths = BuffData->ArrayLengths;
        if ( ArrayLengths )
          TriCount = ArrayLengths[v17] - 2;
        else
          TriCount = BuffData->TriCount;
        this->member.device->lpVtbl->DrawIndexedPrimitive(
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          0,
          BuffData->VertCount,
          v18,
          TriCount);
        ++v17;
        v18 += TriCount + 2;
      }
      while ( v17 < BuffData->NumArrays );
      geomData->member.m_usDirtyFlags &= 0xF000u;
    }
  }
}
