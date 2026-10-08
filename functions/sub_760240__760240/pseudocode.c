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
  NiD3DRenderStateGroup *RenderStateGroup; // [esp-4h] [ebp-14h]

  RenderStateGroup = this->RenderStateGroup; /*0x760249*/
  this->__vftable = (NiD3DPassVtbl *)&NiD3DPass::`vftable'; /*0x76024a*/
  NiD3DRenderStateGroup_ReleaseToPool((OblivionPooledRenderStateGroupPrefix *)RenderStateGroup); /*0x760250*/
  PixelConstantMap = this->PixelConstantMap; /*0x760255*/
  v3 = InterlockedDecrement; /*0x760258*/
  if ( PixelConstantMap ) /*0x760265*/
  {
    if ( !v3((volatile LONG *)&PixelConstantMap->Unk04) ) /*0x76026b*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1); /*0x76027d*/
    this->PixelConstantMap = 0; /*0x76027f*/
  }
  FormHeapFree((unsigned int)this->PixelShaderProgramFile); /*0x760286*/
  FormHeapFree((unsigned int)this->PixelShaderEntryPoint); /*0x76028f*/
  FormHeapFree((unsigned int)this->PixelShaderTarget); /*0x760298*/
  PixelShader = this->PixelShader; /*0x76029d*/
  if ( PixelShader ) /*0x7602a5*/
  {
    if ( !v3((volatile LONG *)PixelShader + 1) ) /*0x7602ab*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x7602bd*/
    this->PixelShader = 0; /*0x7602bf*/
  }
  VertexConstantMap = this->VertexConstantMap; /*0x7602c2*/
  if ( VertexConstantMap ) /*0x7602c7*/
  {
    if ( !v3((volatile LONG *)&VertexConstantMap->Unk04) ) /*0x7602cd*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1); /*0x7602df*/
    this->VertexConstantMap = 0; /*0x7602e1*/
  }
  FormHeapFree((unsigned int)this->VertexShaderProgramFile); /*0x7602e8*/
  FormHeapFree((unsigned int)this->VertexShaderEntryPoint); /*0x7602f1*/
  FormHeapFree((unsigned int)this->VertexShaderTarget); /*0x7602fa*/
  VertexShader = this->VertexShader; /*0x7602ff*/
  if ( VertexShader ) /*0x760307*/
  {
    if ( !v3((volatile LONG *)VertexShader + 1) ) /*0x76030d*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x76031f*/
    this->VertexShader = 0; /*0x760321*/
  }
  p_Stages = &this->Stages; /*0x760324*/
  sub_75FF80(&this->Stages); /*0x760329*/
  this->CurrentStage = 0; /*0x76032e*/
  this->StageCount = 0; /*0x760331*/
  this->TexturesPerPass = 0; /*0x760334*/
  v8 = this->VertexShader; /*0x760337*/
  if ( v8 ) /*0x76033c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x760342*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v8)(v8, 1); /*0x760358*/
  }
  v9 = this->VertexConstantMap; /*0x76035a*/
  if ( v9 ) /*0x76035f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->Unk04) ) /*0x760365*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))v9->_vtbl->Destroy)(v9, 1); /*0x76037b*/
  }
  v10 = this->PixelShader; /*0x76037d*/
  if ( v10 ) /*0x760382*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v10 + 1) ) /*0x760388*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v10)(v10, 1); /*0x76039e*/
  }
  v11 = this->PixelConstantMap; /*0x7603a0*/
  if ( v11 ) /*0x7603a5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v11->Unk04) ) /*0x7603ab*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, int))v11->_vtbl->Destroy)(v11, 1); /*0x7603c1*/
  }
  NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(p_Stages); /*0x7603c9*/
}
