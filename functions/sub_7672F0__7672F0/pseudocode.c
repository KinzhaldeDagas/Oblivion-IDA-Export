// Rigid geometry renderer. Selects the concrete NiD3DShader from geometry state, calls vtable +0x28 preparation and +0x2C SetupRenderPass, then vtable +0x48 BeginPassLoop. Zero queued passes skip all pass state and D3D draw calls; this covers Lighting30 high records and conditionally reachable Hair high records.
int __thiscall sub_7672F0(
        NiDX9Renderer *this,
        NiGeometry *a2,
        NiGeometryData *a3,
        _DWORD *a4,
        float *a5,
        UInt32 a6,
        NiGeometryBufferData *a7)
{
  NiGeometry *v7; // ebp
  NiD3DShader *defaultShader; // ebx
  NiGeometryBufferData *v10; // esi
  int result; // eax
  UInt16 *ArrayLengths; // eax
  UINT TriCount; // ebp
  bool v14; // cf
  int v15; // [esp+C4h] [ebp-4h]
  NiGeometryBufferData *v16; // [esp+E0h] [ebp+18h]

  v7 = a2; /*0x7672f3*/
  if ( !a2 || (defaultShader = (NiD3DShader *)NiRTTI_Cast(&MEMORY[0xB42858], a2->member.shader)) == 0 ) /*0x767317*/
    defaultShader = this->member.defaultShader; /*0x767319*/
  v10 = a7; /*0x767327*/
  result = defaultShader->__vftable->Unk28( /*0x767343*/
             (NiD3DShaderInterface *)defaultShader,
             (int)a2,
             (int)a4,
             (int)a7,
             (int)this->member.super.propertyState,
             (unsigned int)this->member.super.dynamicEffectState,
             (int)a5,
             a6);                               // NiD3DShader vtable +0x28: render preflight.
  if ( !result )                                // Non-skinned geometry render path forwards renderer->propertyState to the selected shader. For the failing cloned Arrow:0 this pointer is null. /*0x767347*/
  {
    defaultShader->__vftable->Unk2C( /*0x76736d*/
      (NiD3DShaderInterface *)defaultShader,
      (UInt32)a2,
      (UInt32)a4,
      (UInt32)a7,
      (UInt32)this->member.super.propertyState,
      (UInt32)this->member.super.dynamicEffectState,
      (UInt32)a5,
      a6);                                      // Rigid geometry invokes the selected concrete NiD3DShader vtable +0x2C. For Hair, HairShader_SetupRenderPass resets the queue and returns 0 for inherited high selectors; for Lighting30 its high selectors likewise queue no pass.
    if ( defaultShader->__vftable->Unk48((NiD3DShaderInterface *)defaultShader) )// Rigid BeginPassLoop guard: PassCount zero skips pass state, constants, programs/buffers, and DrawIndexedPrimitive/DrawPrimitive. This proves no draw for both Lighting30 high records and conditionally reachable Hair high records. /*0x767376*/
    {
      do /*0x7674ce*/
      {
        defaultShader->__vftable->Unk30( /*0x7673a0*/
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          (int)a4,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          (int)a5,
          a6);                                  // NiD3DShader vtable +0x30: apply current pass render state and texture stages.
        defaultShader->__vftable->Unk34( /*0x7673c4*/
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          a4,
          0,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          a5,
          a6);                                  // NiD3DShader vtable +0x34: write per-object/per-light render constants.
        v10 = (NiGeometryBufferData *)defaultShader->__vftable->Unk3C( /*0x7673ed*/
                                        (NiD3DShaderInterface *)defaultShader,
                                        (UInt32)v7,
                                        0,
                                        (UInt32)v10,
                                        (UInt32)this->member.super.propertyState);// NiD3DShader vtable +0x3C: bind vertex streams and index buffer.
        defaultShader->__vftable->SetupShaderPrograms( /*0x7673fb*/
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          a4,
          0,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          a5,
          a6);                                  // NiD3DShader vtable +0x38: bind current shaders and apply pass/shader constant maps.
        (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)this->member.renderState->member.ShaderConstantManager /*0x76740e*/
                                                             + 4))(this->member.renderState->member.ShaderConstantManager);// NiDX9ShaderConstantManager vtable +4 is a no-op in Oblivion DX9; constant maps were uploaded by SetupShaderPrograms.
        if ( v10->IB ) /*0x767412*/
        {
          v16 = 0; /*0x76741a*/
          v15 = 0; /*0x76741e*/
          if ( v10->NumArrays ) /*0x767417*/
          {
            do /*0x76747e*/
            {
              ArrayLengths = v10->ArrayLengths; /*0x767428*/
              if ( ArrayLengths ) /*0x76742d*/
                TriCount = ArrayLengths[v15] - 2; /*0x767437*/
              else
                TriCount = v10->TriCount; /*0x76743c*/
              this->member.device->lpVtbl->DrawIndexedPrimitive( /*0x767462*/
                this->member.device,
                v10->PrimitiveType,
                v10->BaseVertexIndex,
                0,
                v10->VertCount,
                (UINT)v16,
                TriCount);                      // Actual D3D DrawIndexedPrimitive after Lighting30 state, constants, geometry, and shaders are bound.
              v14 = v15 + 1 < v10->NumArrays; /*0x767473*/
              v16 = (NiGeometryBufferData *)((char *)v16 + TriCount + 2); /*0x767476*/
              ++v15; /*0x76747a*/
            }
            while ( v14 ); /*0x76747e*/
            v7 = a2; /*0x767480*/
          }
        }
        else
        {
          this->member.device->lpVtbl->DrawPrimitive( /*0x7674a1*/
            this->member.device,
            v10->PrimitiveType,
            v10->BaseVertexIndex,
            v10->TriCount);                     // Actual D3D DrawPrimitive fallback after Lighting30 setup.
        }
        defaultShader->__vftable->Unk40( /*0x7674c5*/
          (NiD3DShaderInterface *)defaultShader,
          (UInt32)v7,
          (UInt32)a4,
          0,
          (UInt32)v10,
          (UInt32)this->member.super.propertyState,
          (UInt32)this->member.super.dynamicEffectState,
          (UInt32)a5,
          a6);                                  // NiD3DShader vtable +0x40: end current pass.
      }
      while ( defaultShader->__vftable->Unk4C((NiD3DShaderInterface *)defaultShader) );// NiD3DShader vtable +0x4C: advance/refcount next pass. /*0x7674ce*/
    }
    defaultShader->__vftable->Unk44( /*0x7674f8*/
      (NiD3DShaderInterface *)defaultShader,
      (UInt32)v7,
      (UInt32)a4,
      (UInt32)v10,
      (UInt32)this->member.super.propertyState,
      (UInt32)this->member.super.dynamicEffectState,
      (UInt32)a5,
      a6);                                      // Rigid path always calls shader vtable +0x44 finish after setup, including the zero-pass invalid-selector path.
    return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.renderState->vtbl->SetVar_0FF5)( /*0x76750c*/
             this->member.renderState,
             0);
  }
  return result; /*0x76750e*/
}
