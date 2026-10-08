_DWORD *__thiscall sub_709E60(_DWORD *this)
{
  *this = &NiRefObject::`vftable'; /*0x709e6b*/
  *(this + 1) = 0; /*0x709e71*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x709e74*/
  *((_BYTE *)this + 8) = 0; /*0x709e7a*/
  *(this + 3) = 0; /*0x709e7d*/
  *(this + 4) = 0; /*0x709e80*/
  *(this + 5) = 0; /*0x709e83*/
  *(this + 6) = 0; /*0x709e86*/
  *(this + 7) = 0; /*0x709e89*/
  *this = &NiDynamicEffectState::`vftable'; /*0x709e8c*/
  return this; /*0x709e94*/
}
