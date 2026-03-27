SpeedTreeLeafShaderProperty *__thiscall SpeedTreeLeafShaderProperty::`scalar deleting destructor'(
        SpeedTreeLeafShaderProperty *this,
        char a2)
{
  SpeedTreeLeafShaderProperty::~SpeedTreeLeafShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
