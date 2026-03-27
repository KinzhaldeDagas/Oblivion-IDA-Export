NiD3DShaderFactory *__thiscall NiD3DShaderFactory::`scalar deleting destructor'(NiD3DShaderFactory *this, char a2)
{
  NiD3DShaderFactory::~NiD3DShaderFactory(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
