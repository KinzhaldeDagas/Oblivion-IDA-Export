char __cdecl sub_54FE70()
{
  int v0; // esi
  unsigned int v1; // edi
  int v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  unsigned int *v7; // eax
  volatile LONG *v8; // ecx
  LONG v10; // eax
  int v11; // ecx
  unsigned int v13; // [esp-10h] [ebp-28h]
  int v14; // [esp-Ch] [ebp-24h] BYREF
  unsigned int v15; // [esp+0h] [ebp-18h] BYREF
  unsigned int *v16; // [esp+4h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+8h] [ebp-10h] BYREF
  unsigned int v18; // [esp+14h] [ebp-4h]

  v10 = dword_B39B80;
  if ( dword_B39B80 )
  {
    if ( *(_DWORD *)(v10 + 0xDAC) )
    {
      v11 = *(_DWORD *)(v10 + 0xDAC);
      v18 = 0xFFFFFFFF;
      v17[2] = &loc_9BBBC8;
      v17[1] = NtCurrentTeb()->Tib.ExceptionList;
      v13 = (unsigned int)&v14 ^ __security_cookie;
      v0 = v11;
      v1 = 0;
      v15 = 0;
      v18 = 0;
      LOBYTE(v10) = NiTryEnterCS(&stru_B39C80, (int)"BSFaceGenModelMap::UnloadAllEGMAndEGTData()");
      if ( (_BYTE)v10 )
      {
        EnterCriticalSection(&stru_B39C00);
        v2 = ((int (__cdecl *)(unsigned int))GetCurrentThreadId)(v13);
        ++dword_B39C7C;
        v3 = (_DWORD *)(v0 + 4);
        dword_B39C78 = v2;
        v4 = v3[1];
        v5 = 0;
        if ( v4 )
        {
          v6 = (_DWORD *)v3[2];
          while ( !*v6 )
          {
            ++v5;
            ++v6;
            if ( v5 >= v4 )
              goto LABEL_10;
          }
          v7 = *(unsigned int **)(v3[2] + 4 * v5);
        }
        else
        {
LABEL_10:
          v7 = 0;
        }
        v16 = v7;
        while ( v16 )
        {
          sub_7B2600(v3, &v16, v17, &v15);
          v1 = v15;
          if ( v15 )
          {
            v8 = *(volatile LONG **)(v15 + 8);
            if ( v8 )
            {
              sub_559BA0(v8);
              sub_559C40(*(volatile LONG **)(v1 + 8));
            }
          }
        }
        if ( dword_B39C7C-- == 1 )
          dword_B39C78 = 0;
        LeaveCriticalSection(&stru_B39C00);
        LOBYTE(v10) = NiLeaveCriticalSection_0(&stru_B39C80);
        v18 = 0xFFFFFFFF;
        if ( v1 )
        {
          v10 = InterlockedDecrement((volatile LONG *)(v1 + 4));
          if ( !v10 )
            LOBYTE(v10) = (**(int (__thiscall ***)(unsigned int, int))v1)(v1, 1);
        }
      }
    }
  }
  return v10;
}
