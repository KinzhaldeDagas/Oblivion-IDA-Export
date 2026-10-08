NiShaderFactory *__thiscall NiShaderFactory::`scalar deleting destructor'(NiShaderFactory *this, char a2)
{
  NiShaderFactory::~NiShaderFactory(this); /*0x738593*/
  if ( (a2 & 1) != 0 ) /*0x73859d*/
    FormHeapFree((unsigned int)this); /*0x7385a0*/
  return this; /*0x7385aa*/
}
