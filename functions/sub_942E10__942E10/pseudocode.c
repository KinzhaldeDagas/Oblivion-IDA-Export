int __thiscall sub_942E10(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi

  v2 = *(this + 2);
  *this = &off_AA2444;
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    sub_8B0E60((_DWORD *)*(this + 3));
    result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v4, 0xC, 5);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
