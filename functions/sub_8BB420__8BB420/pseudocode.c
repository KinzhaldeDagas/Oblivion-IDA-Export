int sub_8BB420()
{
  int v0; // esi
  bool v1; // zf
  int result; // eax
  int *v3; // edi
  int v4; // eax
  int i; // ebx
  int j; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  unsigned int v12; // [esp+14h] [ebp-4h]

  v0 = dword_BA8188;
  v1 = dword_BA8188 == 0;
  result = 0x80000000;
  v3 = &dword_BA8188;
  v10 = 0;
  v11 = 0;
  v12 = 0x80000000;
  if ( !v1 )
  {
    while ( 1 )
    {
      if ( !**(_DWORD **)(v0 + 8) )
      {
        v4 = (*(int (**)(void))v0)();
        if ( !v4 )
        {
          if ( v11 == (v12 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v10, 4);
          v10[v11++] = v0;
          v0 = *(_DWORD *)(v0 + 4);
          *(_DWORD *)(*v3 + 4) = 0;
          *v3 = v0;
          goto LABEL_6;
        }
        **(_DWORD **)(v0 + 8) = v4;
      }
      v3 = (int *)(v0 + 4);
      v0 = *(_DWORD *)(v0 + 4);
LABEL_6:
      if ( !v0 )
      {
        for ( i = v11; v11; i = v11 )
        {
          for ( j = i - 1; j >= 0; --j )
          {
            v7 = v10[j];
            v8 = (*(int (**)(void))v7)();
            if ( v8 )
            {
              **(_DWORD **)(v7 + 8) = v8;
              *v3 = v7;
              --v11;
              v3 = (int *)(v7 + 4);
              v10[j] = v10[v11];
            }
          }
        }
        result = v12;
        break;
      }
    }
  }
  if ( result >= 0 )
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    return sub_8A75D0(v9, v10, 4 * result, 0x14);
  }
  return result;
}
