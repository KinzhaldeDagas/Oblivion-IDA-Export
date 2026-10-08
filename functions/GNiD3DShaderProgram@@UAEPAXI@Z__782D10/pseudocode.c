NiD3DShaderProgram *__thiscall NiD3DShaderProgram::`scalar deleting destructor'(NiD3DShaderProgram *this, char a2)
{
  NiD3DShaderProgram::~NiD3DShaderProgram(this); /*0x782d13*/
  if ( (a2 & 1) != 0 ) /*0x782d1d*/
    FormHeapFree((unsigned int)this); /*0x782d20*/
  return this; /*0x782d2a*/
}
