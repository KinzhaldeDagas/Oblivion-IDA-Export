ShaderDefinition *__thiscall ShaderDefinition::Init(ShaderDefinition *this)
{
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSShader *shader; // edi

  this->ShaderDeclaration = 0; /*0x7aed2a*/
  this->shader = 0; /*0x7aed38*/
  ShaderDeclaration = this->ShaderDeclaration; /*0x7aed3f*/
  v3 = InterlockedDecrement; /*0x7aed43*/
  if ( this->ShaderDeclaration ) /*0x7aed3f*/
  {
    if ( !v3((volatile LONG *)&ShaderDeclaration->members) ) /*0x7aed54*/
    {
      if ( ShaderDeclaration ) /*0x7aed5c*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7aed66*/
    }
    this->ShaderDeclaration = 0; /*0x7aed68*/
  }
  shader = this->shader; /*0x7aed6e*/
  if ( shader ) /*0x7aed73*/
  {
    if ( !v3((volatile LONG *)&shader->member) ) /*0x7aed79*/
      shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7aed8b*/
    this->shader = 0; /*0x7aed8d*/
  }
  return this; /*0x7aed96*/
}
