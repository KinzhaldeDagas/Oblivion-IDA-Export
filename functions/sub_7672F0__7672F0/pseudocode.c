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

  v7 = a2;
  if ( !a2 || (defaultShader = (NiD3DShader *)NiRTTI_Cast(&NiD3DShaderInterfaceString, a2->member.shader)) == 0 )
    defaultShader = this->member.defaultShader;
  v10 = a7;
  result = defaultShader->__vftable->Unk28(
             (NiD3DShaderInterface *)defaultShader,
             (int)a2,
             (int)a4,
             (int)a7,
             (int)this->member.super.propertyState,
             (unsigned int)this->member.super.dynamicEffectState,
             (int)a5,
             a6);
  if ( !result )
  {
    defaultShader->__vftable->Unk2C(
      (NiD3DShaderInterface *)defaultShader,
      (UInt32)a2,
      (UInt32)a4,
      (UInt32)a7,
      (UInt32)this->member.super.propertyState,
      (UInt32)this->member.super.dynamicEffectState,
      (UInt32)a5,
      a6);
    if ( defaultShader->__vftable->Unk48((NiD3DShaderInterface *)defaultShader) )
    {
      do
      {
        defaultShader->__vftable->Unk30(
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          (int)a4,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          (int)a5,
          a6);
        defaultShader->__vftable->Unk34(
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          a4,
          0,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          a5,
          a6);
        v10 = (NiGeometryBufferData *)defaultShader->__vftable->Unk3C(
                                        (NiD3DShaderInterface *)defaultShader,
                                        (UInt32)v7,
                                        0,
                                        (UInt32)v10,
                                        (UInt32)this->member.super.propertyState);
        defaultShader->__vftable->SetupShaderPrograms(
          (NiD3DShaderInterface *)defaultShader,
          (int)v7,
          a4,
          0,
          (int)v10,
          (int)this->member.super.propertyState,
          (int)this->member.super.dynamicEffectState,
          a5,
          a6);
        (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)this->member.renderState->member.ShaderConstantManager
                                                             + 4))(this->member.renderState->member.ShaderConstantManager);
        if ( v10->IB )
        {
          v16 = 0;
          v15 = 0;
          if ( v10->NumArrays )
          {
            do
            {
              ArrayLengths = v10->ArrayLengths;
              if ( ArrayLengths )
                TriCount = ArrayLengths[v15] - 2;
              else
                TriCount = v10->TriCount;
              this->member.device->lpVtbl->DrawIndexedPrimitive(
                this->member.device,
                v10->PrimitiveType,
                v10->BaseVertexIndex,
                0,
                v10->VertCount,
                (UINT)v16,
                TriCount);
              v14 = v15 + 1 < v10->NumArrays;
              v16 = (NiGeometryBufferData *)((char *)v16 + TriCount + 2);
              ++v15;
            }
            while ( v14 );
            v7 = a2;
          }
        }
        else
        {
          this->member.device->lpVtbl->DrawPrimitive(
            this->member.device,
            v10->PrimitiveType,
            v10->BaseVertexIndex,
            v10->TriCount);
        }
        defaultShader->__vftable->Unk40(
          (NiD3DShaderInterface *)defaultShader,
          (UInt32)v7,
          (UInt32)a4,
          0,
          (UInt32)v10,
          (UInt32)this->member.super.propertyState,
          (UInt32)this->member.super.dynamicEffectState,
          (UInt32)a5,
          a6);
      }
      while ( defaultShader->__vftable->Unk4C((NiD3DShaderInterface *)defaultShader) );
    }
    defaultShader->__vftable->Unk44(
      (NiD3DShaderInterface *)defaultShader,
      (UInt32)v7,
      (UInt32)a4,
      (UInt32)v10,
      (UInt32)this->member.super.propertyState,
      (UInt32)this->member.super.dynamicEffectState,
      (UInt32)a5,
      a6);
    return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))this->member.renderState->vtbl->SetVar_0FF5)(
             this->member.renderState,
             0);
  }
  return result;
}
