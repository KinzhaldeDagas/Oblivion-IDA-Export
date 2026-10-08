NighteyeShader *__thiscall NighteyeShader::`scalar deleting destructor'(NighteyeShader *this, char a2)
{
  NighteyeShader::~NighteyeShader(this); /*0x7f58b3*/
  if ( (a2 & 1) != 0 ) /*0x7f58bd*/
    FormHeapFree((unsigned int)this); /*0x7f58c0*/
  return this; /*0x7f58ca*/
}
