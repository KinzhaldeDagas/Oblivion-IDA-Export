NiD3DShaderConstantMap *__thiscall NiD3DShaderConstantMap::`scalar deleting destructor'(
        NiD3DShaderConstantMap *this,
        char a2)
{
  NiD3DShaderConstantMap::~NiD3DShaderConstantMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
