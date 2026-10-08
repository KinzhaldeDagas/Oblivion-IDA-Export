NiD3DHLSLVertexShader *__thiscall NiD3DHLSLVertexShader::`scalar deleting destructor'(
        NiD3DHLSLVertexShader *this,
        char a2)
{
  NiD3DHLSLVertexShader::~NiD3DHLSLVertexShader(this); /*0x780f53*/
  if ( (a2 & 1) != 0 ) /*0x780f5d*/
    FormHeapFree((unsigned int)this); /*0x780f60*/
  return this; /*0x780f6a*/
}
