_DWORD *__thiscall sub_8F5C20(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2);
  *this = &off_A9B38C;
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 0xC))(dword_BA7D98, *(this + 3));
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
