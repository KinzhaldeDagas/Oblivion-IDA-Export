// Constructs Oblivion ExtraPersuasionPercent (type 0x46) with zeroed payload fields.
float *__thiscall ExtraPersuasionPercent_ctor(float *this)
{
  *(this + 3) = 0.0; /*0x42a6e4*/
  *((_BYTE *)this + 4) = 0x46; /*0x42a6e7*/
  *(this + 4) = 0.0; /*0x42a6eb*/
  *(this + 2) = 0.0; /*0x42a6ee*/
  *(_DWORD *)this = &ExtraPersuasionPercent::`vftable'; /*0x42a6f5*/
  return this; /*0x42a6fb*/
}
