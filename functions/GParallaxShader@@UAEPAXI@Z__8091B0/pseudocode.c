BSShader *__thiscall ParallaxShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  ParallaxShader::~ParallaxShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
