int __thiscall sub_8E8A10(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 5);
  v3 = 0;
  *this = (int)&off_A9AC24;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(_DWORD *)(*(this + 4) + 8 * v3);
      if ( *(_WORD *)(v4 + 4) )
      {
        if ( !--*(_WORD *)(v4 + 6) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      ++v3;
    }
    while ( v3 < *(this + 5) );
  }
  result = *(this + 6);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    result = sub_8A75D0(v6, (_DWORD *)*(this + 4), 8 * result, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
