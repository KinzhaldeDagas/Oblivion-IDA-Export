int __thiscall sub_90F130(_DWORD *this)
{
  int v2; // ecx
  int i; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 2);
  *this = &off_A9CAA8;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  for ( i = 0; i < *(this + 4); ++i )
  {
    v4 = *(_DWORD *)(*(this + 3) + 4 * i);
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  result = *(this + 5);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    result = sub_8A75D0(v6, (_DWORD *)*(this + 3), 4 * result, 0x14);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
