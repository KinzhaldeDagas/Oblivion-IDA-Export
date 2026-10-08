NiD3DVertexShader *__thiscall NiD3DVertexShader::`scalar deleting destructor'(NiD3DVertexShader *this, char a2)
{
  NiD3DVertexShader::~NiD3DVertexShader(this); /*0x780db3*/
  if ( (a2 & 1) != 0 ) /*0x780dbd*/
    FormHeapFree((unsigned int)this); /*0x780dc0*/
  return this; /*0x780dca*/
}
