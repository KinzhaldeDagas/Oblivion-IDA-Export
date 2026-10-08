// CULLING standalone pipeline audit 2026-09-27: descriptive DrawGeometryBuffers name replaces RenderTriShapes. Verified native slot +0x168 in NiDX9Renderer table 0xA88EA4. Body performs shader/constant setup then may issue zero or multiple D3D9 draws: skinned indexed loop at 0x769622, ordinary indexed array loop at 0x7696A6, non-indexed draw at 0x7696E4. Lost device, zero vertices, zero arrays and hardware-bone constraints can skip draw attempts. It also clears lower geometry dirty bits with &=0xF000; preserve state/update semantics. These are observed Oblivion backend facts, independent of the DX11 project. Entry alone cannot prove GPU work or MainWorld ownership.
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

  v2 = this; /*0x7694f4*/
  if ( !this->member.lostDevice ) /*0x7694f6*/
  {
    geomData = a2->member.geomData; /*0x769517*/
    if ( ((unsigned __int16 (*)(void))geomData->__vftable->GetNumVertices)() ) /*0x76951b*/
    {
      skinData = a2->member.skinData; /*0x769533*/
      v4 = sub_768890(v2, a2, 0); /*0x769537*/
      BuffData = a2->member.geomData->member.BuffData; /*0x769548*/
      v6 = v4; /*0x769551*/
      v23 = NiRTTI_Cast(&MEMORY[0xB42858], a2->member.shader); /*0x76955a*/
      ((void (__thiscall *)(NiObject *))v23->__vftable->Unk_12)(v23); /*0x769566*/
      (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)v2->member.renderState->member.ShaderConstantManager /*0x769579*/
                                                           + 4))(v2->member.renderState->member.ShaderConstantManager);
      if ( v6 ) /*0x76957d*/
      {
        m_uiRefCount = skinData[1].members.m_uiRefCount; /*0x769587*/
        v8 = *(char **)(m_uiRefCount + 8); /*0x76958a*/
        v9 = *(_DWORD *)(m_uiRefCount + 0xC); /*0x76958d*/
        v24 = (*(_WORD *)(v9 + 0x22) != 0) + 4; /*0x76959e*/
        if ( v8 ) /*0x7695a2*/
        {
          v10 = (unsigned __int16 *)(v9 + 0x20); /*0x7695a8*/
          v27 = (unsigned __int16 *)(v9 + 0x20); /*0x7695ab*/
          v22 = v8; /*0x7695af*/
          do /*0x769644*/
          {
            if ( v23 == (NiObject *)v2->member.defaultShader && *v10 > v2->member.HWBones ) /*0x7695c8*/
            {
              Shared_NoOpVirtual_60D0A0(v8); /*0x7695d0*/
            }
            else
            {
              v11 = *((INT **)v10 + 2); /*0x7695da*/
              v12 = 0; /*0x7695dd*/
              v13 = 0; /*0x7695df*/
              if ( v11[0x11] ) /*0x7695e1*/
              {
                do /*0x76962e*/
                {
                  v14 = v11[0x12]; /*0x7695e6*/
                  if ( v14 ) /*0x7695eb*/
                    v15 = *(unsigned __int16 *)(v14 + 2 * v12) - 2; /*0x7695f1*/
                  else
                    v15 = v11[0xF]; /*0x7695f6*/
                  this->member.device->lpVtbl->DrawIndexedPrimitive( /*0x769622*/
                    this->member.device,
                    v24,
                    v11[0xD],
                    0,
                    v27[0xFFFFFFFE],
                    v13,
                    v15);
                  ++v12; /*0x769624*/
                  v13 += v15 + 2; /*0x76962a*/
                }
                while ( v12 < v11[0x11] ); /*0x76962e*/
                v10 = v27; /*0x769630*/
              }
              v2 = this; /*0x769634*/
            }
            v10 += 0x16; /*0x769638*/
            v16 = v22-- == (char *)1; /*0x76963b*/
            v27 = v10; /*0x769640*/
          }
          while ( !v16 ); /*0x769644*/
          geomData->member.m_usDirtyFlags &= 0xF000u; /*0x76964e*/
          return; /*0x76965b*/
        }
        goto LABEL_26; /*0x7695a2*/
      }
      if ( !BuffData->IB ) /*0x769662*/
      {
        v2->member.device->lpVtbl->DrawPrimitive( /*0x7696e4*/
          v2->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          BuffData->TriCount);
        goto LABEL_26; /*0x7696e4*/
      }
      v17 = 0; /*0x769664*/
      v18 = 0; /*0x769666*/
      if ( !BuffData->NumArrays ) /*0x76966b*/
      {
LABEL_26:
        geomData->member.m_usDirtyFlags &= 0xF000u; /*0x7696e6*/
        return; /*0x7696ea*/
      }
      do /*0x7696b2*/
      {
        ArrayLengths = BuffData->ArrayLengths; /*0x769670*/
        if ( ArrayLengths ) /*0x769675*/
          TriCount = ArrayLengths[v17] - 2; /*0x76967b*/
        else
          TriCount = BuffData->TriCount; /*0x769680*/
        this->member.device->lpVtbl->DrawIndexedPrimitive( /*0x7696a6*/
          this->member.device,
          BuffData->PrimitiveType,
          BuffData->BaseVertexIndex,
          0,
          BuffData->VertCount,
          v18,
          TriCount);
        ++v17; /*0x7696a8*/
        v18 += TriCount + 2; /*0x7696ae*/
      }
      while ( v17 < BuffData->NumArrays ); /*0x7696b2*/
      geomData->member.m_usDirtyFlags &= 0xF000u; /*0x7696b8*/
    }
  }
}
