NiDX9ShaderConstantManager *__thiscall NiDX9ShaderConstantManager::`scalar deleting destructor'(
        NiDX9ShaderConstantManager *this,
        char a2)
{
  *(_DWORD *)this = &NiDX9ShaderConstantManager::`vftable'; /*0x780b63*/
  NiD3DShaderConstantManager::~NiD3DShaderConstantManager(this); /*0x780b69*/
  if ( (a2 & 1) != 0 ) /*0x780b73*/
    FormHeapFree((unsigned int)this); /*0x780b76*/
  return this; /*0x780b80*/
}
