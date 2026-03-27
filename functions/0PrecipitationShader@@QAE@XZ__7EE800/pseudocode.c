PrecipitationShader *__thiscall PrecipitationShader::PrecipitationShader(PrecipitationShader *this)
{
  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &PrecipitationShader::`vftable';
  *((_DWORD *)this + 0x2B) = 0;
  *((float *)this + 0x2C) = 0.0;
  *((float *)this + 0x2D) = 0.0;
  *((float *)this + 0x2E) = 0.0;
  *((float *)this + 0x28) = 0.0;
  *((float *)this + 0x29) = 0.0;
  *((float *)this + 0x2A) = 0.0;
  *((_DWORD *)this + 0x2C) = dword_B25AC4;
  *((_DWORD *)this + 0x2D) = dword_B25AC8;
  *((_DWORD *)this + 0x2E) = dword_B25ACC;
  *((_BYTE *)this + 0x20) = 1;
  return this;
}
