BSShader *__thiscall HairShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  HairShader::~HairShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
