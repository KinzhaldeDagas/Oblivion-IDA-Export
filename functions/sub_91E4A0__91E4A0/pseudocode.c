int __thiscall sub_91E4A0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx

  v2 = *(this + 9);
  v3 = this + 0xA;
  *this = &off_A9D86C;
  *(this + 2) = &off_A9D854;
  *(this + 8) = off_A9D84C;
  *(this + 0xA) = &off_A9D840;
  if ( v2 )
  {
    v4 = 0;
    if ( *(int *)(v2 + 0x60) > 0 )
    {
      do
        sub_898A80(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v4++), (int)v3);
      while ( v4 < *(_DWORD *)(*(this + 9) + 0x60) );
    }
  }
  v5 = *(this + 0xD);
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    sub_8A75D0(v6, (_DWORD *)*(this + 0xB), 4 * v5, 0x14);
  }
  *v3 = &off_A9D2B4;
  return sub_949180(this);
}
