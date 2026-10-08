GethitShader *__thiscall GethitShader::`scalar deleting destructor'(GethitShader *this, char a2)
{
  GethitShader::~GethitShader(this); /*0x7ec873*/
  if ( (a2 & 1) != 0 ) /*0x7ec87d*/
    FormHeapFree((unsigned int)this); /*0x7ec880*/
  return this; /*0x7ec88a*/
}
