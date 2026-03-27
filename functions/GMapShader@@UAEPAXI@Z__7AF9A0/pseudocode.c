BSImageSpaceShader *__thiscall MapShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  MapShader::~MapShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
