HDRShader *__thiscall HDRShader::`scalar deleting destructor'(HDRShader *this, char a2)
{
  HDRShader::~HDRShader(this); /*0x7c0543*/
  if ( (a2 & 1) != 0 ) /*0x7c054d*/
    FormHeapFree((unsigned int)this); /*0x7c0550*/
  return this; /*0x7c055a*/
}
