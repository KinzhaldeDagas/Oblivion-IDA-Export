BSShader *__thiscall BSShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  BSShader::~BSShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
