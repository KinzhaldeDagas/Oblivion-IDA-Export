NiD3DShaderConstantManager *__thiscall NiD3DShaderConstantManager::`scalar deleting destructor'(
        NiD3DShaderConstantManager *this,
        char a2)
{
  NiD3DShaderConstantManager::~NiD3DShaderConstantManager(this); /*0x782bd3*/
  if ( (a2 & 1) != 0 ) /*0x782bdd*/
    FormHeapFree((unsigned int)this); /*0x782be0*/
  return this; /*0x782bea*/
}
