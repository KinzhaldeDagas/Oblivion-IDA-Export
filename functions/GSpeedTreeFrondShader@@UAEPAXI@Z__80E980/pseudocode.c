BSShader *__thiscall SpeedTreeFrondShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeFrondShader::~SpeedTreeFrondShader(this); /*0x80e983*/
  if ( (a2 & 1) != 0 ) /*0x80e98d*/
    FormHeapFree((unsigned int)this); /*0x80e990*/
  return this; /*0x80e99a*/
}
