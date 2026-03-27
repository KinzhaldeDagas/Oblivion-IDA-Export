NiD3DPixelShader *__thiscall NiD3DPixelShader::`scalar deleting destructor'(NiD3DPixelShader *this, char a2)
{
  NiD3DPixelShader::~NiD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
