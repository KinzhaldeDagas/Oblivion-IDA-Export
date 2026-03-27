Lighting30ShaderProperty *__thiscall Lighting30ShaderProperty::`scalar deleting destructor'(
        Lighting30ShaderProperty *this,
        char a2)
{
  Lighting30ShaderProperty::~Lighting30ShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
