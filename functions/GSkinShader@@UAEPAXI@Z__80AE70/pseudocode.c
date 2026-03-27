BSShader *__thiscall SkinShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SkinShader::~SkinShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
