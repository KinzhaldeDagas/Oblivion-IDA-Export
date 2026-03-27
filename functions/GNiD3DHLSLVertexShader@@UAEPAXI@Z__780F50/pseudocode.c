NiD3DHLSLVertexShader *__thiscall NiD3DHLSLVertexShader::`scalar deleting destructor'(
        NiD3DHLSLVertexShader *this,
        char a2)
{
  NiD3DHLSLVertexShader::~NiD3DHLSLVertexShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
