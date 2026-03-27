BSShaderProperty *__thiscall sub_85BBE0(BSShaderProperty *this)
{
  BSShaderProperty::BSShaderProperty(this);
  *((_DWORD *)this + 0x1B) = 0;
  *((_BYTE *)this + 0x70) = 0;
  this->vtbl = &WaterShaderProperty::`vftable';
  isLava = 0;
  *((float *)this + 0x1F) = 1.0;
  *((_BYTE *)this + 0x71) = 0;
  *((_BYTE *)this + 0x72) = 0;
  *((float *)this + 0x20) = 0.0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_WORD *)this + 0x42) = 0;
  return this;
}
