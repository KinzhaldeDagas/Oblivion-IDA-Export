void __thiscall sub_8998A0(int *this, const void *a2)
{
  int v3; // ecx
  int v4; // ecx
  int i; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // [esp+8h] [ebp-14h] BYREF
  void *v10; // [esp+Ch] [ebp-10h]
  _DWORD *v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  if ( *(this + 0x22) )
  {
    v3 = dword_BA7D98;
    LOBYTE(v9) = 0x1F;
    v10 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 0x10))(v3, 0x20, 4);
    sub_8B1890(v10, a2, 0x20u);
    sub_8D8830(*(this + 0x20), (int)&v9);
  }
  else
  {
    v4 = *(this + 0x19);
    v11 = 0;
    v12 = 0;
    v13 = 0x80000000;
    (*(void (__thiscall **)(int, const void *, _DWORD **))(*(_DWORD *)v4 + 0x28))(v4, a2, &v11);
    for ( i = 0; i < v12; ++i )
    {
      v6 = v11[2 * i + 1] + *(char *)(v11[2 * i + 1] + 5);
      if ( *(_BYTE *)(v6 + 0x18) == 1 )
      {
        v7 = v6 + *(_DWORD *)(v6 + 0x10);
        if ( v7 )
          sub_8A6410(v7);
      }
    }
    if ( v13 >= 0 )
    {
      v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, v11, 8 * v13, 0x14);
    }
  }
}
