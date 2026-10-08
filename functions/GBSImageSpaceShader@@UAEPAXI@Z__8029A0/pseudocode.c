BSImageSpaceShader *__thiscall BSImageSpaceShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x8029a3*/
  if ( (a2 & 1) != 0 ) /*0x8029ad*/
    FormHeapFree((unsigned int)this); /*0x8029b0*/
  return this; /*0x8029ba*/
}
