_DWORD *__thiscall sub_942E60(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // edi

  v3 = *(this + 2);
  *this = &off_AA2444;
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    sub_8B0E60((_DWORD *)*(this + 3));
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v4, 0xC, 5);
  }
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      6);
  return this;
}
