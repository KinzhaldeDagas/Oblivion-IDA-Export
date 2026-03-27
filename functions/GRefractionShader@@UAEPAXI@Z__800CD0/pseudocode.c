RefractionShader *__thiscall RefractionShader::`scalar deleting destructor'(RefractionShader *this, char a2)
{
  RefractionShader::~RefractionShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
