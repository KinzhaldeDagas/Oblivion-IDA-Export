BSImageSpaceShader *__thiscall BlurShader_P20::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BlurShader_P20::~BlurShader_P20(this); /*0x7eac63*/
  if ( (a2 & 1) != 0 ) /*0x7eac6d*/
    FormHeapFree((unsigned int)this); /*0x7eac70*/
  return this; /*0x7eac7a*/
}
