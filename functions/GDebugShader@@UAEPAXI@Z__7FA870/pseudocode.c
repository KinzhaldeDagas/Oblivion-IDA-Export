BSShader *__thiscall DebugShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  DebugShader::~DebugShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
