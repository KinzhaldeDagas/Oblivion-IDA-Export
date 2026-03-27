NiD3DPass *__thiscall NiD3DPass_NiD3DPass(NiD3DPass *this)
{
  this->__vftable = (NiD3DPassVtbl *)&NiD3DPass::`vftable';
  this->CurrentStage = 0;
  this->StageCount = 0;
  this->TexturesPerPass = 0;
  NiTArray<NiPointer<NiD3DTextureStage>>::NiTArray<NiPointer<NiD3DTextureStage>>(&this->Stages, dword_B28CB0, 1u);
  this->RenderStateGroup = 0;
  this->PixelConstantMap = 0;
  this->PixelShaderProgramFile = 0;
  this->PixelShaderEntryPoint = 0;
  this->PixelShaderTarget = 0;
  this->PixelShader = 0;
  this->VertexConstantMap = 0;
  this->VertexShaderProgramFile = 0;
  this->VertexShaderEntryPoint = 0;
  this->VertexShaderTarget = 0;
  this->VertexShader = 0;
  this->SoftwareVP = 0;
  this->RendererOwned = 0;
  this->RefCount = 0;
  this->Name[0] = 0;
  return this;
}
