SkyShader *__thiscall SkyShader::`scalar deleting destructor'(SkyShader *this, char a2)
{
  SkyShader::~SkyShader(this); /*0x7bd3b3*/
  if ( (a2 & 1) != 0 ) /*0x7bd3bd*/
    FormHeapFree((unsigned int)this); /*0x7bd3c0*/
  return this; /*0x7bd3ca*/
}
