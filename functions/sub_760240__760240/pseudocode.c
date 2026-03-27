void __thiscall sub_760240(NiD3DPass *this)
{
  NiD3DShaderConstantMap *PixelConstantMap; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiD3DPixelShader *PixelShader; // edi
  NiD3DShaderConstantMap *VertexConstantMap; // edi
  NiD3DVertexShader *VertexShader; // edi
  NiTArray_NiD3DTextureStage *p_Stages; // ebp
  NiD3DVertexShader *v8; // edi
  NiD3DShaderConstantMap *v9; // edi
  NiD3DPixelShader *v10; // edi
  NiD3DShaderConstantMap *v11; // esi
  NiD3DPass *RenderStateGroup; // [esp-4h] [ebp-14h]

  RenderStateGroup = (NiD3DPass *)this->RenderStateGroup;
  this->__vftable = (NiD3DPassVtbl *)&NiD3DPass::`vftable';
  sub_772E30(RenderStateGroup);
  PixelConstantMap = this->PixelConstantMap;
  v3 = InterlockedDecrement;
  if ( PixelConstantMap )
  {
    if ( !v3((volatile LONG *)&PixelConstantMap->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1);
    this->PixelConstantMap = 0;
  }
  FormHeapFree((unsigned int)this->PixelShaderProgramFile);
  FormHeapFree((unsigned int)this->PixelShaderEntryPoint);
  FormHeapFree((unsigned int)this->PixelShaderTarget);
  PixelShader = this->PixelShader;
  if ( PixelShader )
  {
    if ( !v3((volatile LONG *)PixelShader + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    this->PixelShader = 0;
  }
  VertexConstantMap = this->VertexConstantMap;
  if ( VertexConstantMap )
  {
    if ( !v3((volatile LONG *)&VertexConstantMap->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1);
    this->VertexConstantMap = 0;
  }
  FormHeapFree((unsigned int)this->VertexShaderProgramFile);
  FormHeapFree((unsigned int)this->VertexShaderEntryPoint);
  FormHeapFree((unsigned int)this->VertexShaderTarget);
  VertexShader = this->VertexShader;
  if ( VertexShader )
  {
    if ( !v3((volatile LONG *)VertexShader + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    this->VertexShader = 0;
  }
  p_Stages = &this->Stages;
  sub_75FF80(&this->Stages);
  this->CurrentStage = 0;
  this->StageCount = 0;
  this->TexturesPerPass = 0;
  v8 = this->VertexShader;
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1);
  }
  v9 = this->VertexConstantMap;
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))v9->_vtbl->Destroy)(v9, 1);
  }
  v10 = this->PixelShader;
  if ( v10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v10 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1);
  }
  v11 = this->PixelConstantMap;
  if ( v11 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v11->Unk04) )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))v11->_vtbl->Destroy)(v11, 1);
  }
  NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(p_Stages);
}
