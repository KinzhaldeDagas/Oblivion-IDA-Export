NiD3DShaderProgramFactory *__thiscall NiD3DShaderProgramFactory::`scalar deleting destructor'(
        NiD3DShaderProgramFactory *this,
        char a2)
{
  NiD3DShaderProgramFactory::~NiD3DShaderProgramFactory(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
