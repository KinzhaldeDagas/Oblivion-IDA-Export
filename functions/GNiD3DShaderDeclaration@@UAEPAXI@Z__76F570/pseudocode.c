NiD3DShaderDeclaration *__thiscall NiD3DShaderDeclaration::`scalar deleting destructor'(
        NiD3DShaderDeclaration *this,
        char a2)
{
  NiD3DShaderDeclaration::~NiD3DShaderDeclaration(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
