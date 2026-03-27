int __thiscall sub_91FED0(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax

  v4 = *(this + 2);
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  a4[7] = v4;
  v6 = *(_DWORD **)(v5 + 0x19C);
  v7 = v6[8];
  v8 = (v4 + 0x10) & 0xFFFFFFF0;
  if ( v7 + v8 > v6[0xB] )
  {
    v9 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, v8);
  }
  else
  {
    v6[8] = v7 + v8;
    v9 = v7;
  }
  a4[6] = v9;
  a4[2] = 0x3E8;
  a4[3] = 0x3E8;
  a4[1] = 0x3E8;
  a4[4] = 3;
  a4[5] = 4;
  *a4 = 2;
  return 0;
}
