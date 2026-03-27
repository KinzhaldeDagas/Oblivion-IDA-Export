ShaderDefinition *__thiscall ShaderDefinition::Init(ShaderDefinition *this)
{
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSShader *shader; // edi

  this->ShaderDeclaration = 0;
  this->shader = 0;
  ShaderDeclaration = this->ShaderDeclaration;
  v3 = InterlockedDecrement;
  if ( this->ShaderDeclaration )
  {
    if ( !v3((volatile LONG *)&ShaderDeclaration->members) )
    {
      if ( ShaderDeclaration )
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    }
    this->ShaderDeclaration = 0;
  }
  shader = this->shader;
  if ( shader )
  {
    if ( !v3((volatile LONG *)&shader->member) )
      shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    this->shader = 0;
  }
  return this;
}
