_DWORD *__thiscall sub_948510(_DWORD *this, char a2)
{
  *(this + 2) = &off_AA2B10; /*0x948518*/
  *(this + 2) = &off_AA2984; /*0x94851f*/
  *this = &hkBaseObject::`vftable'; /*0x948526*/
  if ( (a2 & 1) != 0 ) /*0x94852c*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94853e*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x948543*/
}
