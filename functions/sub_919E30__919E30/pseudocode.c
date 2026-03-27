int __thiscall sub_919E30(char *this)
{
  int v2; // eax
  int v3; // ebx
  int i; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx

  v2 = *((_DWORD *)this + 9);
  *(_DWORD *)this = &off_A9D370;
  *((_DWORD *)this + 2) = &off_A9D358;
  *((_DWORD *)this + 8) = off_A9D350;
  *((_DWORD *)this + 0xA) = off_A9D33C;
  *((_DWORD *)this + 0xB) = &off_A9D330;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x60);
    for ( i = 0; i < v3; ++i )
      sub_919C40(this, *(int **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * i));
  }
  v5 = *((_DWORD *)this + 0x10);
  if ( v5 > 0 )
  {
    v6 = 0;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*((_DWORD *)this + 0xF) + v6))(v6 + *((_DWORD *)this + 0xF), 0);
      v6 += 0x70;
      --v5;
    }
    while ( v5 );
  }
  v7 = *((_DWORD *)this + 0x11);
  v8 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v7 >= 0 )
  {
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v8] + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    sub_8A75D0(v10, *((_DWORD **)this + 0xF), 0x70 * (v7 & 0x3FFFFFFF), 0x14);
  }
  v11 = *((_DWORD *)this + 0xE);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v8] + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    sub_8A75D0(v12, *((_DWORD **)this + 0xC), 4 * v11, 0x14);
  }
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  return sub_949180(this);
}
