BSShader *__thiscall TallGrassShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  TallGrassShader::~TallGrassShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
