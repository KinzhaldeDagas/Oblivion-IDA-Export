BSShader *__thiscall HairShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  HairShader::~HairShader(this); /*0x80d0f3*/
  if ( (a2 & 1) != 0 ) /*0x80d0fd*/
    FormHeapFree((unsigned int)this); /*0x80d100*/
  return this; /*0x80d10a*/
}
