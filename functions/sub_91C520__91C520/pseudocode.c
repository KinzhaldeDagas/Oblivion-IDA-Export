int __thiscall sub_91C520(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = *(this + 0xD) - 1;
  *this = (int)&off_A9D5E0;
  *(this + 2) = (int)&off_A9D5C8;
  *(this + 8) = (int)off_A9D5C0;
  *(this + 0xA) = (int)off_A9D5AC;
  for ( *(this + 0xB) = (int)&off_A9D5A0; v2 >= 0; --v2 )
    sub_91C470(this, v2);
  v3 = *(this + 0xE);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, (_DWORD *)*(this + 0xC), 4 * v3, 0x14);
  }
  *(this + 0xB) = (int)&off_A9D2B4;
  *(this + 0xA) = (int)&hkEntityListener::`vftable';
  return sub_949180(this);
}
