BSShaderProperty *__thiscall sub_7EFA10(BSShaderProperty *this)
{
  BSShaderProperty::BSShaderProperty(this);
  *((float *)this + 0x1D) = 0.0;
  *((_DWORD *)this + 0x1B) = 0;
  this->vtbl = &PrecipitationShaderProperty::`vftable';
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x29) = 1;
  return this;
}
