BSShader *__thiscall ShadowLightShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  ShadowLightShader::~ShadowLightShader(this); /*0x7d1eb3*/
  if ( (a2 & 1) != 0 ) /*0x7d1ebd*/
    FormHeapFree((unsigned int)this); /*0x7d1ec0*/
  return this; /*0x7d1eca*/
}
