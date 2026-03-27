BoltShader *__thiscall BoltShader::`scalar deleting destructor'(BoltShader *this, char a2)
{
  BoltShader::~BoltShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
