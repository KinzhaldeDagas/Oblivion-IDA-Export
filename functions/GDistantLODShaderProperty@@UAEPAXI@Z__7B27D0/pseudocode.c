DistantLODShaderProperty *__thiscall DistantLODShaderProperty::`scalar deleting destructor'(
        DistantLODShaderProperty *this,
        char a2)
{
  DistantLODShaderProperty::~DistantLODShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
