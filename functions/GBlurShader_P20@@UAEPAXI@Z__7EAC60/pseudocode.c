BSImageSpaceShader *__thiscall BlurShader_P20::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  BlurShader_P20::~BlurShader_P20(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
