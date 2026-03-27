int __thiscall sub_91E860(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ecx

  v2 = *(this + 9);
  v3 = this + 0xA;
  *this = &off_A9D8B8;
  *(this + 2) = &off_A9D8A0;
  *(this + 8) = off_A9D84C;
  *(this + 0xA) = &off_A9D894;
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
  v5 = *(this + 0xC);
  if ( v5 > 0 )
  {
    v6 = 0;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xB) + v6))(v6 + *(this + 0xB), 0);
      v6 += 0x80;
      --v5;
    }
    while ( v5 );
  }
  v7 = *(this + 0xD);
  if ( v7 >= 0 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    sub_8A75D0(v8, (_DWORD *)*(this + 0xB), v7 << 7, 0x14);
  }
  *v3 = &off_A9D2B4;
  return sub_949180(this);
}
