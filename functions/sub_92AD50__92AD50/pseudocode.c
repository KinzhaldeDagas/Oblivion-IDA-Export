_DWORD *__thiscall sub_92AD50(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx

  v3 = *(this + 5);
  *this = &off_AA1B70;
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v4 = *(this + 4);
  if ( *(_WORD *)(v4 + 4) )
  {
    if ( !--*(_WORD *)(v4 + 6) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
