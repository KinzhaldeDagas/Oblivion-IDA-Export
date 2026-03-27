int __thiscall sub_91CAB0(char *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx

  v2 = *((_DWORD *)this + 9);
  *(_DWORD *)this = &off_A9D6B0;
  *((_DWORD *)this + 2) = &off_A9D698;
  *((_DWORD *)this + 8) = off_A9D350;
  *((_DWORD *)this + 0xA) = off_A9D684;
  *((_DWORD *)this + 0xB) = &off_A9D678;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(v2 + 0x60) > 0 )
    {
      do
        sub_919C40(this, *(int **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++));
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) );
    }
  }
  v4 = *((_DWORD *)this + 0xE);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, *((_DWORD **)this + 0xC), 4 * v4, 0x14);
  }
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  return sub_949180(this);
}
