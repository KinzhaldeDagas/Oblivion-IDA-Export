void __thiscall NiD3DShader::SetDeclaration(NiD3DShader *this, NiD3DShaderDeclaration *a2)
{
  NiD3DShaderDeclaration *ShaderDeclaration; // esi

  ShaderDeclaration = this->member.ShaderDeclaration; /*0x77a404*/
  if ( ShaderDeclaration != a2 ) /*0x77a40e*/
  {
    if ( ShaderDeclaration ) /*0x77a412*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) ) /*0x77a418*/
        (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x77a42e*/
    }
    this->member.ShaderDeclaration = a2; /*0x77a432*/
    if ( a2 ) /*0x77a435*/
      InterlockedIncrement((volatile LONG *)&a2->member); /*0x77a43b*/
  }
}
