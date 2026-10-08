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

  v2 = _getptd_noexit(); /*0x98d915*/
  v3 = v2; /*0x98d91a*/
  if ( !v2 ) /*0x98d91e*/
    return UnhandledExceptionFilter(ExceptionInfo); /*0x98d923*/
  v5 = (int *)v2[0x17]; /*0x98d92e*/
  v6 = v5; /*0x98d93a*/
  do /*0x98d94d*/
  {
    if ( *v6 == a1 ) /*0x98d93f*/
      break; /*0x98d93f*/
    v6 += 3; /*0x98d946*/
  }
  while ( v6 < &v5[3 * dword_B3134C] ); /*0x98d94d*/
  if ( v6 < &v5[3 * dword_B3134C] && *v6 == a1 ) /*0x98d95a*/
    v7 = v6; /*0x98d95c*/
  else
    v7 = 0; /*0x98d960*/
  if ( !v7 ) /*0x98d964*/
    return UnhandledExceptionFilter(ExceptionInfo); /*0x98d964*/
  v8 = (void (__cdecl *)(int))v7[2]; /*0x98d966*/
  if ( !v8 ) /*0x98d96e*/
    return UnhandledExceptionFilter(ExceptionInfo); /*0x98d973*/
  if ( v8 == (void (__cdecl *)(int))5 ) /*0x98d981*/
  {
    v7[2] = 0; /*0x98d983*/
    return 1; /*0x98d989*/
  }
  else
  {
    if ( v8 != (void (__cdecl *)(int))1 ) /*0x98d992*/
    {
      v14 = v3[0x18]; /*0x98d99b*/
      v3[0x18] = (DWORD)ExceptionInfo; /*0x98d9a1*/
      v9 = v7[1]; /*0x98d9a4*/
      if ( v9 == 8 ) /*0x98d9aa*/
      {
        v10 = dword_B31340; /*0x98d9bc*/
        if ( dword_B31340 < dword_B31340 + dword_B31344 ) /*0x98d9c2*/
        {
          v11 = 0xC * dword_B31340; /*0x98d9c4*/
          do /*0x98d9e3*/
          {
            *(_DWORD *)(v11 + v3[0x17] + 8) = 0; /*0x98d9ca*/
            ++v10; /*0x98d9db*/
            v11 += 0xC; /*0x98d9de*/
          }
          while ( v10 < dword_B31340 + dword_B31344 ); /*0x98d9e3*/
        }
        v12 = *v7; /*0x98d9e8*/
        v13 = v3[0x19]; /*0x98d9ef*/
        switch ( v12 ) /*0x98d9f2*/
        {
          case 0xC000008E: /*0x98d9f2*/
            v3[0x19] = 0x83; /*0x98d9f4*/
            break;
          case 0xC0000090: /*0x98d9f2*/
            v3[0x19] = 0x81; /*0x98da04*/
            break;
          case 0xC0000091: /*0x98d9f2*/
            v3[0x19] = 0x84; /*0x98da14*/
            break;
          case 0xC0000093: /*0x98d9f2*/
            v3[0x19] = 0x85; /*0x98da24*/
            break;
          case 0xC000008D: /*0x98d9f2*/
            v3[0x19] = 0x82; /*0x98da34*/
            break;
          case 0xC000008F: /*0x98d9f2*/
            v3[0x19] = 0x86; /*0x98da44*/
            break;
          case 0xC0000092: /*0x98d9f2*/
            v3[0x19] = 0x8A; /*0x98da54*/
            break;
        }
        v8(8); /*0x98da60*/
        v3[0x19] = v13; /*0x98da63*/
      }
      else
      {
        v7[2] = 0; /*0x98da68*/
        v8(v9); /*0x98da6d*/
      }
      v3[0x18] = v14; /*0x98da73*/
    }
    return 0xFFFFFFFF; /*0x98da76*/
  }
}
