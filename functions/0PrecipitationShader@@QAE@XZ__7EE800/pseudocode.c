PrecipitationShader *__thiscall PrecipitationShader::PrecipitationShader(PrecipitationShader *this)
{
  BSShader::BSShader((BSShader *)this); /*0x7ee806*/
  *(_DWORD *)this = &PrecipitationShader::`vftable'; /*0x7ee80d*/
  *((_DWORD *)this + 0x2B) = 0; /*0x7ee813*/
  *((float *)this + 0x2C) = 0.0; /*0x7ee81d*/
  *((float *)this + 0x2D) = 0.0; /*0x7ee823*/
  *((float *)this + 0x2E) = 0.0; /*0x7ee829*/
  *((float *)this + 0x28) = 0.0; /*0x7ee837*/
  *((float *)this + 0x29) = 0.0; /*0x7ee84d*/
  *((float *)this + 0x2A) = 0.0; /*0x7ee853*/
  *((_DWORD *)this + 0x2C) = LODWORD(stru_B25AC4.x); /*0x7ee85e*/
  *((_DWORD *)this + 0x2D) = LODWORD(stru_B25AC4.y); /*0x7ee86a*/
  *((_DWORD *)this + 0x2E) = LODWORD(stru_B25AC4.z); /*0x7ee876*/
  *((_BYTE *)this + 0x20) = 1; /*0x7ee87c*/
  return this; /*0x7ee882*/
}
