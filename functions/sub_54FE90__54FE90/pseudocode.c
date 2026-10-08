char sub_54FE90()
{
  int v0; // esi
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  unsigned int *v7; // eax
  unsigned int *v8; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  unsigned int v13; // [esp-10h] [ebp-28h]
  int v14; // [esp-Ch] [ebp-24h] BYREF
  unsigned int v15; // [esp+0h] [ebp-18h] BYREF
  unsigned int *v16; // [esp+4h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+8h] [ebp-10h] BYREF
  unsigned int v18; // [esp+14h] [ebp-4h]

  v10 = g_faceGenManager; /*0x54fe90*/
  if ( g_faceGenManager ) /*0x54fe90*/
  {
    if ( v10[0x36B] ) /*0x54fe99*/
    {
      v11 = v10[0x36B]; /*0x54fea2*/
      v18 = 0xFFFFFFFF; /*0x54fb00*/
      v17[2] = &loc_9BBBC8; /*0x54fb02*/
      v17[1] = NtCurrentTeb()->Tib.ExceptionList; /*0x54fb0d*/
      v13 = (unsigned int)&v14 ^ __security_cookie; /*0x54fb1b*/
      v0 = v11; /*0x54fb26*/
      v1 = 0; /*0x54fb28*/
      v15 = 0; /*0x54fb2a*/
      v18 = 0; /*0x54fb38*/
      LOBYTE(v10) = NiTryEnterCS(&unk_B39C80, (int)"BSFaceGenModelMap::UnloadAllEGMAndEGTData()"); /*0x54fb3c*/
      if ( (_BYTE)v10 ) /*0x54fb43*/
      {
        EnterCriticalSection(&unk_B39C00); /*0x54fb4e*/
        v2 = ((int (__cdecl *)(unsigned int))GetCurrentThreadId)(v13); /*0x54fb54*/
        ++unk_B39C7C; /*0x54fb5a*/
        v3 = v0 + 4; /*0x54fb61*/
        unk_B39C78 = v2; /*0x54fb64*/
        v4 = *(_DWORD *)(v3 + 4); /*0x54fb69*/
        v5 = 0; /*0x54fb6c*/
        if ( v4 ) /*0x54fb70*/
        {
          v6 = *(_DWORD **)(v3 + 8); /*0x54fb75*/
          while ( !*v6 ) /*0x54fb7a*/
          {
            ++v5; /*0x54fb80*/
            ++v6; /*0x54fb83*/
            if ( v5 >= v4 ) /*0x54fb88*/
              goto LABEL_10; /*0x54fb88*/
          }
          v7 = *(unsigned int **)(*(_DWORD *)(v3 + 8) + 4 * v5); /*0x54fc24*/
        }
        else
        {
LABEL_10:
          v7 = 0; /*0x54fb8a*/
        }
        v16 = v7; /*0x54fb8e*/
        while ( v16 ) /*0x54fb92*/
        {
          sub_7B2600((unsigned int **)v3, &v16, v17, &v15); /*0x54fba5*/
          v1 = v15; /*0x54fbaa*/
          if ( v15 ) /*0x54fbb0*/
          {
            v8 = *(unsigned int **)(v15 + 8); /*0x54fbb2*/
            if ( v8 ) /*0x54fbb7*/
              sub_559F10(v8); /*0x54fbb9*/
          }
        }
        if ( unk_B39C7C-- == 1 ) /*0x54fbc5*/
          unk_B39C78 = 0; /*0x54fbce*/
        LeaveCriticalSection(&unk_B39C00); /*0x54fbdd*/
        LOBYTE(v10) = NiLeaveCriticalSection_0(&unk_B39C80); /*0x54fbe8*/
        v18 = 0xFFFFFFFF; /*0x54fbef*/
        if ( v1 ) /*0x54fbf7*/
        {
          v10 = (_DWORD *)InterlockedDecrement((volatile LONG *)(v1 + 4)); /*0x54fbfd*/
          if ( !v10 ) /*0x54fc05*/
            LOBYTE(v10) = (**(int (__thiscall ***)(unsigned int, int))v1)(v1, 1); /*0x54fc0f*/
        }
      }
    }
  }
  return (char)v10; /*0x54fead*/
}
