NiD3DShaderProgramFactory *__thiscall NiD3DShaderProgramFactory::`scalar deleting destructor'(
        NiD3DShaderProgramFactory *this,
        char a2)
{
  NiD3DShaderProgramFactory::~NiD3DShaderProgramFactory(this); /*0x77f703*/
  if ( (a2 & 1) != 0 ) /*0x77f70d*/
    FormHeapFree((unsigned int)this); /*0x77f710*/
  return this; /*0x77f71a*/
}
