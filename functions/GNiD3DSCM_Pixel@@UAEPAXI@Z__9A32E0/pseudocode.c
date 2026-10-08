NiD3DSCM_Pixel *__thiscall NiD3DSCM_Pixel::`scalar deleting destructor'(NiD3DSCM_Pixel *this, char a2)
{
  this->Destroy = (void (__thiscall *)(NiD3DShaderConstantMap *))&NiD3DSCM_Pixel::`vftable'; /*0x9a32e3*/
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap((NiD3DShaderConstantMap *)this); /*0x9a32e9*/
  if ( (a2 & 1) != 0 ) /*0x9a32f3*/
    FormHeapFree((unsigned int)this); /*0x9a32f6*/
  return this; /*0x9a3300*/
}
