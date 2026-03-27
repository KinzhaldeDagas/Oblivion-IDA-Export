_OWORD *__thiscall sub_8C8C50(char **this, int a2)
{
  _OWORD *result; // eax
  char *v4; // edi
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edx

  result = (_OWORD *)sub_8AEA60(this, a2);
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      sub_917200(v4, a2 + 8);
      v5 = (_DWORD *)sub_916BC0(v4);
      if ( (*(_DWORD *)(a2 + 0x1C) & 0x3FFFFFFF) < v5[1] )
      {
        v6 = TlsIndex;
        if ( *(int *)(a2 + 0x1C) >= 0 )
        {
          v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C);
          if ( !v7 )
            v7 = dword_BA7D9C;
          sub_8A75D0(v7, *(_DWORD **)(a2 + 0x14), 0x10 * *(_DWORD *)(a2 + 0x1C), 0x14);
        }
        v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C);
        if ( !v8 )
          v8 = dword_BA7D9C;
        v9 = sub_8A7560(v8, 0x10 * v5[1], 0x14);
        v10 = *(_DWORD *)(a2 + 0x1C) & 0x40000000;
        *(_DWORD *)(a2 + 0x14) = v9;
        *(_DWORD *)(a2 + 0x1C) = v5[1] | v10;
      }
      v11 = v5[1];
      result = *(_OWORD **)(a2 + 0x14);
      *(_DWORD *)(a2 + 0x18) = v11;
      if ( v11 > 0 )
      {
        v12 = *v5 - (_DWORD)result;
        do
        {
          *result = *(_OWORD *)((char *)result + v12);
          ++result;
          --v11;
        }
        while ( v11 );
      }
    }
  }
  return result;
}
