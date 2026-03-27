BSImageSpaceShader *__thiscall MenuBGShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  MenuBGShader::~MenuBGShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
