NiD3DShaderConstantManager *__thiscall NiD3DShaderConstantManager::`scalar deleting destructor'(
        NiD3DShaderConstantManager *this,
        char a2)
{
  NiD3DShaderConstantManager::~NiD3DShaderConstantManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
