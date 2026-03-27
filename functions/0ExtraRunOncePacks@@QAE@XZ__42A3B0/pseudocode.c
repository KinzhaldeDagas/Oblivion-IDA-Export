ExtraRunOncePacks *__thiscall ExtraRunOncePacks::ExtraRunOncePacks(ExtraRunOncePacks *this)
{
  *((_BYTE *)this + 4) = 0x21;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraRunOncePacks::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
