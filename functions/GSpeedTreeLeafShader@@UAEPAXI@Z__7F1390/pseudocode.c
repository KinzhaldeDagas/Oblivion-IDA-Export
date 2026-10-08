BSShader *__thiscall SpeedTreeLeafShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeLeafShader::~SpeedTreeLeafShader(this); /*0x7f1393*/
  if ( (a2 & 1) != 0 ) /*0x7f139d*/
    FormHeapFree((unsigned int)this); /*0x7f13a0*/
  return this; /*0x7f13aa*/
}
