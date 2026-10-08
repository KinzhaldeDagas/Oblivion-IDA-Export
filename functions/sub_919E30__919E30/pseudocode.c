_DWORD *__thiscall sub_919E30(char *this)
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

  v2 = *((_DWORD *)this + 9); /*0x919e34*/
  *(_DWORD *)this = &off_A9D370; /*0x919e3a*/
  *((_DWORD *)this + 2) = &off_A9D358; /*0x919e40*/
  *((_DWORD *)this + 8) = off_A9D350; /*0x919e47*/
  *((_DWORD *)this + 0xA) = off_A9D33C; /*0x919e4e*/
  *((_DWORD *)this + 0xB) = &off_A9D330; /*0x919e55*/
  if ( v2 ) /*0x919e5c*/
  {
    v3 = *(_DWORD *)(v2 + 0x60); /*0x919e5e*/
    for ( i = 0; i < v3; ++i ) /*0x919e65*/
      sub_919C40(this, *(int **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * i)); /*0x919e73*/
  }
  v5 = *((_DWORD *)this + 0x10); /*0x919e7d*/
  if ( v5 > 0 ) /*0x919e82*/
  {
    v6 = 0; /*0x919e84*/
    do /*0x919e96*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*((_DWORD *)this + 0xF) + v6))(v6 + *((_DWORD *)this + 0xF), 0); /*0x919e90*/
      v6 += 0x70; /*0x919e92*/
      --v5; /*0x919e95*/
    }
    while ( v5 ); /*0x919e96*/
  }
  v7 = *((_DWORD *)this + 0x11); /*0x919e98*/
  v8 = MEMORY[0xBA9DE4]; /*0x919e9d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x919ea3*/
  if ( v7 >= 0 ) /*0x919eaa*/
  {
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v8] + 0x19C); /*0x919eaf*/
    if ( !v10 ) /*0x919eb7*/
      v10 = unk_BA7D9C; /*0x919eb9*/
    sub_8A75D0(v10, *((_DWORD **)this + 0xF), 0x70 * (v7 & 0x3FFFFFFF), 0x14); /*0x919ece*/
  }
  v11 = *((_DWORD *)this + 0xE); /*0x919ed3*/
  if ( v11 >= 0 ) /*0x919ed8*/
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v8] + 0x19C); /*0x919edd*/
    if ( !v12 ) /*0x919ee5*/
      v12 = unk_BA7D9C; /*0x919ee7*/
    sub_8A75D0(v12, *((_DWORD **)this + 0xC), 4 * v11, 0x14); /*0x919efc*/
  }
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x919f01*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x919f09*/
  return sub_949180(this); /*0x919f08*/
}
