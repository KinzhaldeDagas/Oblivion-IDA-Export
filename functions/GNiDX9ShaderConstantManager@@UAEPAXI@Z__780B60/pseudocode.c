NiDX9ShaderConstantManager *__thiscall NiDX9ShaderConstantManager::`scalar deleting destructor'(
        NiDX9ShaderConstantManager *this,
        char a2)
{
  *(_DWORD *)this = &NiDX9ShaderConstantManager::`vftable';
  NiD3DShaderConstantManager::~NiD3DShaderConstantManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
