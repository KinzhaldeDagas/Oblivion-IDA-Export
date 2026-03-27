int __thiscall sub_919290(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // ecx

  v2 = *(this + 9);
  *this = (int)&off_A9D2EC;
  *(this + 2) = (int)&off_A9D2D4;
  *(this + 8) = (int)off_A9D84C;
  *(this + 0xA) = (int)&off_A9D2C8;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(v2 + 0x60) > 0 )
    {
      do
        sub_898A80(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v3++), (int)(this + 0xA));
      while ( v3 < *(_DWORD *)(*(this + 9) + 0x60) );
    }
  }
  v4 = *(this + 0x10);
  if ( v4 > 0 )
  {
    v5 = 0;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xF) + v5))(v5 + *(this + 0xF), 0);
      v5 += 0x80;
      --v4;
    }
    while ( v4 );
  }
  v6 = *(this + 0x11);
  v7 = TlsIndex;
  if ( v6 >= 0 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    sub_8A75D0(v8, (_DWORD *)*(this + 0xF), v6 << 7, 0x14);
  }
  v9 = *(this + 0xD);
  if ( v9 > 0 )
  {
    v10 = 0;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xC) + v10))(v10 + *(this + 0xC), 0);
      v10 += 0x80;
      --v9;
    }
    while ( v9 );
  }
  v11 = *(this + 0xE);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    sub_8A75D0(v12, (_DWORD *)*(this + 0xC), v11 << 7, 0x14);
  }
  *(this + 0xA) = (int)&off_A9D2B4;
  return sub_949180(this);
}
