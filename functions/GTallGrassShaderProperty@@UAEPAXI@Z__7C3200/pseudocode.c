TallGrassShaderProperty *__thiscall TallGrassShaderProperty::`scalar deleting destructor'(
        TallGrassShaderProperty *this,
        char a2)
{
  TallGrassShaderProperty::~TallGrassShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
