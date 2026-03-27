SkyShaderProperty *__thiscall SkyShaderProperty::SkyShaderProperty(SkyShaderProperty *this)
{
  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this);
  *(_DWORD *)this = &SkyShaderProperty::`vftable';
  *((float *)this + 0x1B) = 0.0;
  *((float *)this + 0x1C) = 0.0;
  *((float *)this + 0x1D) = 0.0;
  *((float *)this + 0x1E) = 0.0;
  *((_DWORD *)this + 0x1F) = 0;
  *((float *)this + 0x20) = 0.0;
  *((_DWORD *)this + 0x22) = 8;
  *((_WORD *)this + 0x42) = 0;
  *((_DWORD *)this + 0x1B) = dword_B25AE0;
  *((_DWORD *)this + 0x1C) = dword_B25AE4;
  *((_DWORD *)this + 0x1D) = dword_B25AE8;
  *((_DWORD *)this + 0x1E) = dword_B25AEC;
  return this;
}
