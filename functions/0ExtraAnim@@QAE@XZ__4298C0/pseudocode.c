ExtraAnim *__thiscall ExtraAnim::ExtraAnim(ExtraAnim *this, int a2)
{
  *((_BYTE *)this + 4) = 0x15;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraAnim::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
