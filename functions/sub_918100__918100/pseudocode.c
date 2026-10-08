_WORD *__thiscall sub_918100(_WORD *this)
{
  *(_DWORD *)this = &off_A9D190; /*0x918102*/
  *(this + 3) = 1; /*0x91810d*/
  *(this + 7) = 1; /*0x918111*/
  *((_DWORD *)this + 2) = &off_A9D144; /*0x918115*/
  *((_DWORD *)this + 4) = 0; /*0x91811e*/
  *(this + 0xD) = 1; /*0x918121*/
  *((_DWORD *)this + 5) = &off_A9D170; /*0x918125*/
  *((_DWORD *)this + 7) = 0; /*0x91812c*/
  *((_DWORD *)this + 4) = this; /*0x91812f*/
  *((_DWORD *)this + 7) = this; /*0x918132*/
  return this; /*0x918135*/
}
