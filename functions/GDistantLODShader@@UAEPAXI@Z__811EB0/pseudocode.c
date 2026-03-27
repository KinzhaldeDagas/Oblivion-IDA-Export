BSShader *__thiscall DistantLODShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  DistantLODShader::~DistantLODShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
