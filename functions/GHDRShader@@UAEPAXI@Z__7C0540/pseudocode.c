HDRShader *__thiscall HDRShader::`scalar deleting destructor'(HDRShader *this, char a2)
{
  HDRShader::~HDRShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
