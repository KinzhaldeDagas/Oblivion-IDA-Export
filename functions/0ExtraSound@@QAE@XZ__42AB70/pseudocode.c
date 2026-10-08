ExtraSound *__thiscall ExtraSound::ExtraSound(ExtraSound *this, int a2)
{
  *((_BYTE *)this + 4) = 0x5B; /*0x42ab76*/
  *((_DWORD *)this + 2) = 0; /*0x42ab7a*/
  *(_DWORD *)this = &ExtraSound::`vftable'; /*0x42ab81*/
  *((_DWORD *)this + 3) = a2; /*0x42ab87*/
  return this; /*0x42ab8a*/
}
