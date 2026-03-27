ExtraLight *__thiscall ExtraLight::ExtraLight(ExtraLight *this, int a2)
{
  *((_BYTE *)this + 4) = 0x30;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraLight::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
