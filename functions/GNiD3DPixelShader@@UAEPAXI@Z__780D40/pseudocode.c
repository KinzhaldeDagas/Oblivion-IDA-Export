NiD3DPixelShader *__thiscall NiD3DPixelShader::`scalar deleting destructor'(NiD3DPixelShader *this, char a2)
{
  NiD3DPixelShader::~NiD3DPixelShader(this); /*0x780d43*/
  if ( (a2 & 1) != 0 ) /*0x780d4d*/
    FormHeapFree((unsigned int)this); /*0x780d50*/
  return this; /*0x780d5a*/
}
