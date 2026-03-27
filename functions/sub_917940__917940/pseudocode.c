_DWORD *__thiscall sub_917940(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 4);
  *this = &off_A9D0E8;
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
