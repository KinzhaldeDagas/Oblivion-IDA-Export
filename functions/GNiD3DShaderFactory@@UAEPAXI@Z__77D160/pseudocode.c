NiD3DShaderFactory *__thiscall NiD3DShaderFactory::`scalar deleting destructor'(NiD3DShaderFactory *this, char a2)
{
  NiD3DShaderFactory::~NiD3DShaderFactory(this); /*0x77d163*/
  if ( (a2 & 1) != 0 ) /*0x77d16d*/
    FormHeapFree((unsigned int)this); /*0x77d170*/
  return this; /*0x77d17a*/
}
