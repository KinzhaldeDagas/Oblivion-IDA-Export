BSImageSpaceShader *__thiscall BlurShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BlurShader::~BlurShader(this); /*0x7b0d03*/
  if ( (a2 & 1) != 0 ) /*0x7b0d0d*/
    FormHeapFree((unsigned int)this); /*0x7b0d10*/
  return this; /*0x7b0d1a*/
}
