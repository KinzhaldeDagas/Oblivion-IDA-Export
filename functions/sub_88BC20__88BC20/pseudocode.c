int __thiscall sub_88BC20(void *this)
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int i; // esi
  int v12; // ecx
  int v14; // [esp+20h] [ebp-10h]

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this);
  v3 = result;
  if ( result )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this);
    v4 = 0;
    v14 = 0x80000000;
    v5 = *(_DWORD *)(v3 + 0x3C);
    if ( v5 > 0 )
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v6 )
        v6 = dword_BA7D9C;
      v4 = sub_8A7560(v6, 4 * v5, 0x14);
      v5 = *(_DWORD *)(v3 + 0x3C);
      v14 = v5;
    }
    v7 = v5;
    if ( v5 > 0 )
    {
      v8 = v4;
      v9 = *(_DWORD *)(v3 + 0x38) - (_DWORD)v4;
      v10 = v7;
      do
      {
        *v8 = *(_DWORD *)((char *)v8 + v9);
        ++v8;
        --v10;
      }
      while ( v10 );
    }
    for ( i = 0; i < v7; ++i )
      sub_8CBBB0(v3, v4[i]);
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this);
    result = v14;
    if ( v14 >= 0 )
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v12 )
        v12 = dword_BA7D9C;
      return sub_8A75D0(v12, v4, 4 * v14, 0x14);
    }
  }
  return result;
}
