BoltShaderProperty *__thiscall BoltShaderProperty::`scalar deleting destructor'(BoltShaderProperty *this, char a2)
{
  BoltShaderProperty::~BoltShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
