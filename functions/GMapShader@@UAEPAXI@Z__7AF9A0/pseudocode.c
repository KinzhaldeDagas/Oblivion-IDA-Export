BSImageSpaceShader *__thiscall MapShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  MapShader::~MapShader(this); /*0x7af9a3*/
  if ( (a2 & 1) != 0 ) /*0x7af9ad*/
    FormHeapFree((unsigned int)this); /*0x7af9b0*/
  return this; /*0x7af9ba*/
}
