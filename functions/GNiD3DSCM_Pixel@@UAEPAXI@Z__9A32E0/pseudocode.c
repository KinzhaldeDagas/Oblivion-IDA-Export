NiD3DSCM_Pixel *__thiscall NiD3DSCM_Pixel::`scalar deleting destructor'(NiD3DSCM_Pixel *this, char a2)
{
  this->Destroy = (void (__thiscall *)(NiD3DShaderConstantMap *))&NiD3DSCM_Pixel::`vftable';
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap((NiD3DShaderConstantMap *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
