SkyShader *__thiscall SkyShader::`scalar deleting destructor'(SkyShader *this, char a2)
{
  SkyShader::~SkyShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
