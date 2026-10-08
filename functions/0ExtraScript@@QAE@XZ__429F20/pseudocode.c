ExtraScript *__thiscall ExtraScript::ExtraScript(ExtraScript *this, int a2)
{
  *((_BYTE *)this + 4) = 0x12; /*0x429f28*/
  *((_DWORD *)this + 2) = 0; /*0x429f2c*/
  *(_DWORD *)this = &ExtraScript::`vftable'; /*0x429f2f*/
  *((_DWORD *)this + 3) = a2; /*0x429f35*/
  *((_DWORD *)this + 4) = 0; /*0x429f38*/
  return this; /*0x429f3b*/
}
