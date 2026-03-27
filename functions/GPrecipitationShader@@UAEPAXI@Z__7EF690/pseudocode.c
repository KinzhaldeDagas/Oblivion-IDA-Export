BSShader *__thiscall PrecipitationShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  PrecipitationShader::~PrecipitationShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
