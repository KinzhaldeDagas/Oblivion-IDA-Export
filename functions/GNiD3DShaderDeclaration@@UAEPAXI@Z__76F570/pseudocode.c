NiD3DShaderDeclaration *__thiscall NiD3DShaderDeclaration::`scalar deleting destructor'(
        NiD3DShaderDeclaration *this,
        char a2)
{
  NiD3DShaderDeclaration::~NiD3DShaderDeclaration(this); /*0x76f573*/
  if ( (a2 & 1) != 0 ) /*0x76f57d*/
    FormHeapFree((unsigned int)this); /*0x76f580*/
  return this; /*0x76f58a*/
}
