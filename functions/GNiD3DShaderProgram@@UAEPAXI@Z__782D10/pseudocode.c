NiD3DShaderProgram *__thiscall NiD3DShaderProgram::`scalar deleting destructor'(NiD3DShaderProgram *this, char a2)
{
  NiD3DShaderProgram::~NiD3DShaderProgram(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
