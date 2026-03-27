NiD3DShader *__thiscall NiD3DShader::`scalar deleting destructor'(NiD3DShader *this, char a2)
{
  NiD3DShader::~NiD3DShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
