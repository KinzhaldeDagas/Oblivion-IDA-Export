ExtraScript *__thiscall ExtraScript::ExtraScript(ExtraScript *this, int a2)
{
  *((_BYTE *)this + 4) = 0x12;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraScript::`vftable';
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  return this;
}
