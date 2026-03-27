BSImageSpaceShader *__thiscall BlurShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BlurShader::~BlurShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
