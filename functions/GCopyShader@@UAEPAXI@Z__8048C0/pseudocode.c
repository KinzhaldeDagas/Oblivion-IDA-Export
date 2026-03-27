BSImageSpaceShader *__thiscall CopyShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  CopyShader::~CopyShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
