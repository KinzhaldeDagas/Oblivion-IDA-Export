NiD3DShaderConstantMap *__thiscall NiD3DSCM_Vertex::`scalar deleting destructor'(NiD3DShaderConstantMap *this, char a2)
{
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DSCM_Vertex::`vftable';
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
