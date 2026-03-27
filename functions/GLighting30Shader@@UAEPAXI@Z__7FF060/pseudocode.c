BSShader *__thiscall Lighting30Shader::`scalar deleting destructor'(BSShader *this, char a2)
{
  Lighting30Shader::~Lighting30Shader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
