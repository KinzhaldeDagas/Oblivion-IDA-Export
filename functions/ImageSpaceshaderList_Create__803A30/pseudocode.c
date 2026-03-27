// Treat this list as a de facto subclass of a standard NiTPointerList as this is bigger of 3 UInt32
NiTPointerList__BSImageSpaceShader *__thiscall ImageSpaceshaderList::Create(NiTPointerList__BSImageSpaceShader *this)
{
  UInt32 renderTarget; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiGeometry *unk10; // edi
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // eax
  ShaderDefinition *v7; // eax
  BSShader *v8; // eax
  ShaderDefinition *v9; // eax
  BSShader *v10; // eax
  ShaderDefinition *v11; // eax
  BSShader *v12; // eax
  ShaderDefinition *v13; // eax

  this->numItems = 0;
  this->start = 0;
  this->end = 0;
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<BSImageSpaceShader *>::`vftable';
  this->unk10 = 0;
  this->renderTarget = 0;
  NiTPointerList::FreeAllNodes(this);
  renderTarget = this->renderTarget;
  v3 = InterlockedDecrement;
  if ( renderTarget )
  {
    if ( !v3((volatile LONG *)(renderTarget + 4)) )
      (**(void (__thiscall ***)(UInt32, int))renderTarget)(renderTarget, 1);
    this->renderTarget = 0;
  }
  this->unk18 = 0;
  unk10 = this->unk10;
  if ( unk10 )
  {
    if ( !v3((volatile LONG *)&unk10->member) )
      unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1);
    this->unk10 = 0;
  }
  ShaderDefinition = GetShaderDefinition(0x12u);
  if ( ShaderDefinition )
  {
    shader = ShaderDefinition->shader;
    if ( shader )
      AddImageSpaceShader(this, shader);
  }
  if ( UseHDR )
    v7 = GetShaderDefinition(8u);
  else
    v7 = GetShaderDefinition(7u);
  if ( v7 )
  {
    v8 = v7->shader;
    if ( v8 )
      AddImageSpaceShader(this, v8);
  }
  if ( enableRefraction )
  {
    v9 = GetShaderDefinition(0x15u);
    if ( v9 )
    {
      v10 = v9->shader;
      if ( v10 )
        AddImageSpaceShader(this, v10);
    }
  }
  v11 = GetShaderDefinition(0xBu);
  if ( v11 )
  {
    v12 = v11->shader;
    if ( v12 )
      AddImageSpaceShader(this, v12);
  }
  v13 = GetShaderDefinition(0xCu);
  if ( v13 )
    this->unk18 = v13->shader;
  return this;
}
