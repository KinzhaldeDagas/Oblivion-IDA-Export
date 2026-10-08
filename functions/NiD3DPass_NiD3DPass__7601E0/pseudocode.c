// DeferredRendering: NiD3DPass ctor authoritatively defines pass layout: name +0x04, stages +0x20, render-state group +0x30, PS map/file/entry/target/shader +0x34..0x44, VS map/file/entry/target/shader +0x48..0x58, SoftwareVP +0x5C.
NiD3DPass *__thiscall NiD3DPass_NiD3DPass(NiD3DPass *this)
{
  this->__vftable = (NiD3DPassVtbl *)&NiD3DPass::`vftable'; /*0x7601e6*/
  this->CurrentStage = 0; /*0x7601ec*/
  this->StageCount = 0; /*0x7601ef*/
  this->TexturesPerPass = 0; /*0x7601f2*/
  NiTArray<NiPointer<NiD3DTextureStage>>::NiTArray<NiPointer<NiD3DTextureStage>>(&this->Stages, dword_B28CB0, 1u); /*0x760200*/
  this->RenderStateGroup = 0; /*0x760205*/
  this->PixelConstantMap = 0; /*0x760208*/
  this->PixelShaderProgramFile = 0; /*0x76020b*/
  this->PixelShaderEntryPoint = 0; /*0x76020e*/
  this->PixelShaderTarget = 0; /*0x760211*/
  this->PixelShader = 0; /*0x760214*/
  this->VertexConstantMap = 0; /*0x760217*/
  this->VertexShaderProgramFile = 0; /*0x76021a*/
  this->VertexShaderEntryPoint = 0; /*0x76021d*/
  this->VertexShaderTarget = 0; /*0x760220*/
  this->VertexShader = 0; /*0x760223*/
  this->SoftwareVP = 0; /*0x760226*/
  this->RendererOwned = 0; /*0x760229*/
  this->RefCount = 0; /*0x76022c*/
  this->Name[0] = 0; /*0x76022f*/
  return this; /*0x760234*/
}
