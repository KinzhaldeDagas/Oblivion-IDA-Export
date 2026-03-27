BSShaderProperty *__thiscall sub_7EFA80(
        BSShaderProperty *this,
        int a2,
        float a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  BSShaderProperty::BSShaderProperty(this);
  *((float *)this + 0x1D) = a3;
  *((_DWORD *)this + 0x1B) = a2;
  this->vtbl = &PrecipitationShaderProperty::`vftable';
  *((_DWORD *)this + 0x1E) = *a5;
  *((_DWORD *)this + 0x1F) = a5[1];
  *((_DWORD *)this + 0x20) = a5[2];
  *((_DWORD *)this + 0x21) = *a6;
  *((_DWORD *)this + 0x22) = a6[1];
  *((_DWORD *)this + 0x23) = a6[2];
  *((_DWORD *)this + 0x24) = *a4;
  *((_DWORD *)this + 0x25) = a4[1];
  *((_DWORD *)this + 0x26) = a4[2];
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x28) = 3;
  *((_DWORD *)this + 0x2A) = a7;
  *((_DWORD *)this + 0x29) = a8 != 0;
  return this;
}
