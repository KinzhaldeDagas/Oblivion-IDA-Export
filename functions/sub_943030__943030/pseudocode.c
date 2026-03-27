_DWORD *__thiscall sub_943030(_DWORD *this, char a2)
{
  sub_8B0E60(this + 2);
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this;
}
