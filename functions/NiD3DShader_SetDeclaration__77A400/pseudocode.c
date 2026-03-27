void __thiscall NiD3DShader::SetDeclaration(NiD3DShader *this, NiD3DShaderDeclaration *a2)
{
  NiD3DShaderDeclaration *ShaderDeclaration; // esi

  ShaderDeclaration = this->member.ShaderDeclaration;
  if ( ShaderDeclaration != a2 )
  {
    if ( ShaderDeclaration )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) )
        (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    }
    this->member.ShaderDeclaration = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->member);
  }
}
