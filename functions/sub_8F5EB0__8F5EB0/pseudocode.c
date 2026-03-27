char __thiscall sub_8F5EB0(int *this)
{
  int v2; // ecx
  int v3; // ecx
  char result; // al

  *this = (int)&off_A9B3BC;
  sub_8F5C80(this);
  v2 = *(this + 2);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x10))(v2);
  v3 = *(this + 2);
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 4) )
    {
      if ( !--*(_WORD *)(v3 + 6) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  result = *((_BYTE *)this + 0x18);
  if ( result )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 0xC))(dword_BA7D98, *(this + 3));
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
