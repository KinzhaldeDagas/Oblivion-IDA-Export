ExtraSound *__thiscall ExtraSound::ExtraSound(ExtraSound *this, int a2)
{
  *((_BYTE *)this + 4) = 0x5B;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraSound::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
