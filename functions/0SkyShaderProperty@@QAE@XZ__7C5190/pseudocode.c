SkyShaderProperty *__thiscall SkyShaderProperty::SkyShaderProperty(SkyShaderProperty *this)
{
  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this); /*0x7c51ba*/
  *(_DWORD *)this = &SkyShaderProperty::`vftable'; /*0x7c51c1*/
  *((float *)this + 0x1B) = 0.0; /*0x7c51c7*/
  *((float *)this + 0x1C) = 0.0; /*0x7c51ca*/
  *((float *)this + 0x1D) = 0.0; /*0x7c51cf*/
  *((float *)this + 0x1E) = 0.0; /*0x7c51d6*/
  *((_DWORD *)this + 0x1F) = 0; /*0x7c51d9*/
  *((float *)this + 0x20) = 0.0; /*0x7c520a*/
  *((_DWORD *)this + 0x22) = 8; /*0x7c5210*/
  *((_WORD *)this + 0x42) = 0; /*0x7c521a*/
  *((_DWORD *)this + 0x1B) = dword_B25AE0; /*0x7c5227*/
  *((_DWORD *)this + 0x1C) = dword_B25AE4; /*0x7c5230*/
  *((_DWORD *)this + 0x1D) = dword_B25AE8; /*0x7c5238*/
  *((_DWORD *)this + 0x1E) = dword_B25AEC; /*0x7c5241*/
  return this; /*0x7c5246*/
}
