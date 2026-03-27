LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  DWORD *v2; // eax
  DWORD *v3; // esi
  int *v5; // edx
  int *v6; // ecx
  int *v7; // eax
  void (__cdecl *v8)(int); // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  DWORD v13; // edi
  DWORD v14; // [esp+4h] [ebp-8h]

  v2 = _getptd_noexit();
  v3 = v2;
  if ( !v2 )
    return UnhandledExceptionFilter(ExceptionInfo);
  v5 = (int *)v2[0x17];
  v6 = v5;
  do
  {
    if ( *v6 == a1 )
      break;
    v6 += 3;
  }
  while ( v6 < &v5[3 * dword_B3134C] );
  if ( v6 < &v5[3 * dword_B3134C] && *v6 == a1 )
    v7 = v6;
  else
    v7 = 0;
  if ( !v7 )
    return UnhandledExceptionFilter(ExceptionInfo);
  v8 = (void (__cdecl *)(int))v7[2];
  if ( !v8 )
    return UnhandledExceptionFilter(ExceptionInfo);
  if ( v8 == (void (__cdecl *)(int))5 )
  {
    v7[2] = 0;
    return 1;
  }
  else
  {
    if ( v8 != (void (__cdecl *)(int))1 )
    {
      v14 = v3[0x18];
      v3[0x18] = (DWORD)ExceptionInfo;
      v9 = v7[1];
      if ( v9 == 8 )
      {
        v10 = dword_B31340;
        if ( dword_B31340 < dword_B31340 + dword_B31344 )
        {
          v11 = 0xC * dword_B31340;
          do
          {
            *(_DWORD *)(v11 + v3[0x17] + 8) = 0;
            ++v10;
            v11 += 0xC;
          }
          while ( v10 < dword_B31340 + dword_B31344 );
        }
        v12 = *v7;
        v13 = v3[0x19];
        switch ( v12 )
        {
          case 0xC000008E:
            v3[0x19] = 0x83;
            break;
          case 0xC0000090:
            v3[0x19] = 0x81;
            break;
          case 0xC0000091:
            v3[0x19] = 0x84;
            break;
          case 0xC0000093:
            v3[0x19] = 0x85;
            break;
          case 0xC000008D:
            v3[0x19] = 0x82;
            break;
          case 0xC000008F:
            v3[0x19] = 0x86;
            break;
          case 0xC0000092:
            v3[0x19] = 0x8A;
            break;
        }
        v8(8);
        v3[0x19] = v13;
      }
      else
      {
        v7[2] = 0;
        v8(v9);
      }
      v3[0x18] = v14;
    }
    return 0xFFFFFFFF;
  }
}
