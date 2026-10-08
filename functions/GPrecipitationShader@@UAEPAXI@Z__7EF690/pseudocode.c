BSShader *__thiscall PrecipitationShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  PrecipitationShader::~PrecipitationShader(this); /*0x7ef693*/
  if ( (a2 & 1) != 0 ) /*0x7ef69d*/
    FormHeapFree((unsigned int)this); /*0x7ef6a0*/
  return this; /*0x7ef6aa*/
}
