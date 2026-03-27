BSImageSpaceShader *__thiscall BSImageSpaceShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BSImageSpaceShader::~BSImageSpaceShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
