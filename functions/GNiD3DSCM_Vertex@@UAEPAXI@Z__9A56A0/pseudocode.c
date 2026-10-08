NiD3DShaderConstantMap *__thiscall NiD3DSCM_Vertex::`scalar deleting destructor'(NiD3DShaderConstantMap *this, char a2)
{
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DSCM_Vertex::`vftable'; /*0x9a56a3*/
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap(this); /*0x9a56a9*/
  if ( (a2 & 1) != 0 ) /*0x9a56b3*/
    FormHeapFree((unsigned int)this); /*0x9a56b6*/
  return this; /*0x9a56c0*/
}
