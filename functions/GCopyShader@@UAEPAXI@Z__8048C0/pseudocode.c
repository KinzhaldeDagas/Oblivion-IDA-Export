BSImageSpaceShader *__thiscall CopyShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  CopyShader::~CopyShader(this); /*0x8048c3*/
  if ( (a2 & 1) != 0 ) /*0x8048cd*/
    FormHeapFree((unsigned int)this); /*0x8048d0*/
  return this; /*0x8048da*/
}
