BSShader *__thiscall DebugShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  DebugShader::~DebugShader(this); /*0x7fa873*/
  if ( (a2 & 1) != 0 ) /*0x7fa87d*/
    FormHeapFree((unsigned int)this); /*0x7fa880*/
  return this; /*0x7fa88a*/
}
