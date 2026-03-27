NiD3DHLSLPixelShader *__thiscall NiD3DHLSLPixelShader::`scalar deleting destructor'(
        NiD3DHLSLPixelShader *this,
        char a2)
{
  NiD3DHLSLPixelShader::~NiD3DHLSLPixelShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
