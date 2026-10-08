BSShader *__thiscall BSShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  BSShader::~BSShader(this); /*0x8025d3*/
  if ( (a2 & 1) != 0 ) /*0x8025dd*/
    FormHeapFree((unsigned int)this); /*0x8025e0*/
  return this; /*0x8025ea*/
}
