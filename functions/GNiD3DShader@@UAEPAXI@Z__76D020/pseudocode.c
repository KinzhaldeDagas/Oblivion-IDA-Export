NiD3DShader *__thiscall NiD3DShader::`scalar deleting destructor'(NiD3DShader *this, char a2)
{
  NiD3DShader::~NiD3DShader(this); /*0x76d023*/
  if ( (a2 & 1) != 0 ) /*0x76d02d*/
    FormHeapFree((unsigned int)this); /*0x76d030*/
  return this; /*0x76d03a*/
}
