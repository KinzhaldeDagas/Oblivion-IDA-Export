NiD3DShaderConstantMap *__thiscall NiD3DShaderConstantMap::`scalar deleting destructor'(
        NiD3DShaderConstantMap *this,
        char a2)
{
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap(this); /*0x9a4733*/
  if ( (a2 & 1) != 0 ) /*0x9a473d*/
    FormHeapFree((unsigned int)this); /*0x9a4740*/
  return this; /*0x9a474a*/
}
