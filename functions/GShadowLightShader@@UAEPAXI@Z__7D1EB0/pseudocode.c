BSShader *__thiscall ShadowLightShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  ShadowLightShader::~ShadowLightShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
