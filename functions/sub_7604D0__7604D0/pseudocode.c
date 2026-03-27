void __thiscall sub_7604D0(NiD3DPass *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  NiD3DShaderConstantMap *PixelConstantMap; // edi
  NiD3DPixelShader *PixelShader; // edi
  NiD3DShaderConstantMap *VertexConstantMap; // edi
  NiD3DVertexShader *VertexShader; // edi
  unsigned int *v7; // ecx
  char *VertexShaderTarget; // [esp-1Ch] [ebp-30h]
  char *VertexShaderEntryPoint; // [esp-18h] [ebp-2Ch]
  char *VertexShaderProgramFile; // [esp-14h] [ebp-28h]
  char *PixelShaderTarget; // [esp-10h] [ebp-24h]
  char *PixelShaderEntryPoint; // [esp-Ch] [ebp-20h]
  char *PixelShaderProgramFile; // [esp-8h] [ebp-1Ch]
  NiD3DPass *a2; // [esp+10h] [ebp-4h] BYREF

  if ( this->RendererOwned )
  {
    v2 = InterlockedDecrement;
    PixelConstantMap = this->PixelConstantMap;
    if ( PixelConstantMap )
    {
      if ( !v2((volatile LONG *)&PixelConstantMap->Unk04) )
        ((void (__thiscall *)(NiD3DShaderConstantMap *, int))PixelConstantMap->_vtbl->Destroy)(PixelConstantMap, 1);
      this->PixelConstantMap = 0;
    }
    PixelShader = this->PixelShader;
    if ( PixelShader )
    {
      if ( !v2((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
      this->PixelShader = 0;
    }
    VertexConstantMap = this->VertexConstantMap;
    if ( VertexConstantMap )
    {
      if ( !v2((volatile LONG *)&VertexConstantMap->Unk04) )
        ((void (__thiscall *)(NiD3DShaderConstantMap *, int))VertexConstantMap->_vtbl->Destroy)(VertexConstantMap, 1);
      this->VertexConstantMap = 0;
    }
    VertexShader = this->VertexShader;
    if ( VertexShader )
    {
      if ( !v2((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
      this->VertexShader = 0;
    }
    sub_772E30((NiD3DPass *)this->RenderStateGroup);
    PixelShaderProgramFile = this->PixelShaderProgramFile;
    this->RenderStateGroup = 0;
    FormHeapFree((unsigned int)PixelShaderProgramFile);
    PixelShaderEntryPoint = this->PixelShaderEntryPoint;
    this->PixelShaderProgramFile = 0;
    FormHeapFree((unsigned int)PixelShaderEntryPoint);
    PixelShaderTarget = this->PixelShaderTarget;
    this->PixelShaderEntryPoint = 0;
    FormHeapFree((unsigned int)PixelShaderTarget);
    VertexShaderProgramFile = this->VertexShaderProgramFile;
    this->PixelShaderTarget = 0;
    FormHeapFree((unsigned int)VertexShaderProgramFile);
    VertexShaderEntryPoint = this->VertexShaderEntryPoint;
    this->VertexShaderProgramFile = 0;
    FormHeapFree((unsigned int)VertexShaderEntryPoint);
    VertexShaderTarget = this->VertexShaderTarget;
    this->VertexShaderEntryPoint = 0;
    FormHeapFree((unsigned int)VertexShaderTarget);
    this->VertexShaderTarget = 0;
    sub_75FF80(&this->Stages);
    this->CurrentStage = 0;
    this->StageCount = 0;
    this->TexturesPerPass = 0;
    this->SoftwareVP = 0;
    v7 = (unsigned int *)dword_B42044;
    a2 = this;
    sub_73A5E0(v7, &a2);
  }
  else
  {
    this->__vftable->Destroy(this, 1u);
  }
}
