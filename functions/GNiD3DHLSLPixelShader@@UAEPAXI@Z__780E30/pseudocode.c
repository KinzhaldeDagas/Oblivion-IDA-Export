NiD3DHLSLPixelShader *__thiscall NiD3DHLSLPixelShader::`scalar deleting destructor'(
        NiD3DHLSLPixelShader *this,
        char a2)
{
  NiD3DHLSLPixelShader::~NiD3DHLSLPixelShader(this); /*0x780e33*/
  if ( (a2 & 1) != 0 ) /*0x780e3d*/
    FormHeapFree((unsigned int)this); /*0x780e40*/
  return this; /*0x780e4a*/
}
