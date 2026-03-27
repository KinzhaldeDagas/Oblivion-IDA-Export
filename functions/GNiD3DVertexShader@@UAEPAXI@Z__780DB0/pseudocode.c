NiD3DVertexShader *__thiscall NiD3DVertexShader::`scalar deleting destructor'(NiD3DVertexShader *this, char a2)
{
  NiD3DVertexShader::~NiD3DVertexShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
