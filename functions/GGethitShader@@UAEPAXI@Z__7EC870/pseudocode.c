GethitShader *__thiscall GethitShader::`scalar deleting destructor'(GethitShader *this, char a2)
{
  GethitShader::~GethitShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
