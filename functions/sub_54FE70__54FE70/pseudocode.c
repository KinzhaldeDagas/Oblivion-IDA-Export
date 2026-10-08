char __cdecl sub_54FE70()
{
  int v0; // esi
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  unsigned int *v7; // eax
  volatile LONG *v8; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  unsigned int v13; // [esp-10h] [ebp-28h]
  int v14; // [esp-Ch] [ebp-24h] BYREF
  unsigned int v15; // [esp+0h] [ebp-18h] BYREF
  unsigned int *v16; // [esp+4h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+8h] [ebp-10h] BYREF
  unsigned int v18; // [esp+14h] [ebp-4h]

  v10 = g_faceGenManager; /*0x54fe70*/
  if ( g_faceGenManager ) /*0x54fe70*/
  {
    if ( v10[0x36B] ) /*0x54fe79*/
    {
      v11 = v10[0x36B]; /*0x54fe82*/
      v18 = 0xFFFFFFFF; /*0x54f9c0*/
      v17[2] = &loc_9BBBC8; /*0x54f9c2*/
      v17[1] = NtCurrentTeb()->Tib.ExceptionList; /*0x54f9cd*/
      v13 = (unsigned int)&v14 ^ __security_cookie; /*0x54f9db*/
      v0 = v11; /*0x54f9e6*/
      v1 = 0; /*0x54f9e8*/
      v15 = 0; /*0x54f9ea*/
      v18 = 0; /*0x54f9f8*/
      LOBYTE(v10) = NiTryEnterCS(&unk_B39C80, (int)"BSFaceGenModelMap::UnloadAllEGMAndEGTData()"); /*0x54f9fc*/
      if ( (_BYTE)v10 ) /*0x54fa03*/
      {
        EnterCriticalSection(&unk_B39C00); /*0x54fa0e*/
        v2 = ((int (__cdecl *)(unsigned int))GetCurrentThreadId)(v13); /*0x54fa14*/
        ++unk_B39C7C; /*0x54fa1a*/
        v3 = v0 + 4; /*0x54fa21*/
        unk_B39C78 = v2; /*0x54fa24*/
        v4 = *(_DWORD *)(v3 + 4); /*0x54fa29*/
        v5 = 0; /*0x54fa2c*/
        if ( v4 ) /*0x54fa30*/
        {
          v6 = *(_DWORD **)(v3 + 8); /*0x54fa35*/
          while ( !*v6 ) /*0x54fa3a*/
          {
            ++v5; /*0x54fa40*/
            ++v6; /*0x54fa43*/
            if ( v5 >= v4 ) /*0x54fa48*/
              goto LABEL_10; /*0x54fa48*/
          }
          v7 = *(unsigned int **)(*(_DWORD *)(v3 + 8) + 4 * v5); /*0x54faec*/
        }
        else
        {
LABEL_10:
          v7 = 0; /*0x54fa4a*/
        }
        v16 = v7; /*0x54fa4e*/
        while ( v16 ) /*0x54fa52*/
        {
          sub_7B2600((unsigned int **)v3, &v16, v17, &v15); /*0x54fa65*/
          v1 = v15; /*0x54fa6a*/
          if ( v15 ) /*0x54fa70*/
          {
            v8 = *(volatile LONG **)(v15 + 8); /*0x54fa72*/
            if ( v8 ) /*0x54fa77*/
            {
              sub_559BA0(v8); /*0x54fa79*/
              sub_559C40(*(volatile LONG **)(v1 + 8)); /*0x54fa81*/
            }
          }
        }
        if ( unk_B39C7C-- == 1 ) /*0x54fa8d*/
          unk_B39C78 = 0; /*0x54fa96*/
        LeaveCriticalSection(&unk_B39C00); /*0x54faa5*/
        LOBYTE(v10) = NiLeaveCriticalSection_0(&unk_B39C80); /*0x54fab0*/
        v18 = 0xFFFFFFFF; /*0x54fab7*/
        if ( v1 ) /*0x54fabf*/
        {
          v10 = (_DWORD *)InterlockedDecrement((volatile LONG *)(v1 + 4)); /*0x54fac5*/
          if ( !v10 ) /*0x54facd*/
            LOBYTE(v10) = (**(int (__thiscall ***)(unsigned int, int))v1)(v1, 1); /*0x54fad7*/
        }
      }
    }
  }
  return (char)v10; /*0x54fe8d*/
}
