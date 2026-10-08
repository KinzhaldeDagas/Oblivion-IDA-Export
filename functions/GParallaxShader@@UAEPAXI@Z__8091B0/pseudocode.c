BSShader *__thiscall ParallaxShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  ParallaxShader::~ParallaxShader(this); /*0x8091b3*/
  if ( (a2 & 1) != 0 ) /*0x8091bd*/
    FormHeapFree((unsigned int)this); /*0x8091c0*/
  return this; /*0x8091ca*/
}
