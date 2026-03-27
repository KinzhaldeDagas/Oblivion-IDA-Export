void __usercall def_93412A(
        unsigned int a1@<ebx>,
        _DWORD *a2@<edi>,
        unsigned int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx

  if ( a3 >= a1 )
  {
    v7 = *(_DWORD **)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    v8 = v7[0x2A];
    if ( v8 >= v7[0xC] )
    {
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x1C))(dword_BA7D98, a2, 0xC, 0x1C);
    }
    else
    {
      v9 = v7[0x19];
      v7[0x2A] = v8 + 1;
      *a2 = v9;
      v7[0x19] = a2;
    }
    JUMPOUT(0x93411C);
  }
  JUMPOUT(0x934120);
}
