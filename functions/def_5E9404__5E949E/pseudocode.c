// positive sp value has been detected, the output may be wrong!
void __userpurge def_5E9404(_DWORD *a1@<ebx>, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // [esp-8h] [ebp-Ch]

  if ( *(_DWORD *)(a4 + 4) ) /*0x5e94a7*/
    JUMPOUT(0x5E93D0); /*0x5e93d0*/
  Game_RandomLargeInteger(0); /*0x5e94b7*/
  if ( a1 && *a1 ) /*0x5e94c3*/
  {
    v5 = 0; /*0x5e94c8*/
    v6 = a1; /*0x5e94ca*/
    do /*0x5e94dd*/
    {
      if ( *v6 ) /*0x5e94d0*/
        ++v5; /*0x5e94d5*/
      v6 = (_DWORD *)v6[1]; /*0x5e94d8*/
    }
    while ( v6 ); /*0x5e94dd*/
    v7 = 0; /*0x5e94e7*/
    do /*0x5e953a*/
    {
      if ( !*a1 ) /*0x5e94f4*/
        break; /*0x5e94f8*/
      v11 = 0; /*0x5e94fd*/
      v8 = *a1 + 0x18; /*0x5e9504*/
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a5 + 0x5C) + 0x1C))(a5 + 0x5C) || !(_BYTE)a5 ) /*0x5e9517*/
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a5 + 0x58) + 0x54))(*(_DWORD *)(a5 + 0x58), v8); /*0x5e9522*/
        if ( a3 <= v7 ) /*0x5e9528*/
          break; /*0x5e9528*/
        ++v7; /*0x5e952a*/
      }
      a2 = *(_DWORD *)(a2 + 4); /*0x5e9536*/
    }
    while ( a2 ); /*0x5e953a*/
  }
  if ( a1[1] ) /*0x5e953c*/
  {
    do /*0x5e9556*/
    {
      v9 = *(_DWORD *)(a1[1] + 4); /*0x5e9545*/
      FormHeapFree(a1[1]); /*0x5e9549*/
      a1[1] = v9; /*0x5e9553*/
    }
    while ( v9 ); /*0x5e9556*/
  }
  *a1 = 0; /*0x5e955c*/
  if ( v11[1] ) /*0x5e9562*/
  {
    do /*0x5e957c*/
    {
      v10 = *(_DWORD *)(v11[1] + 4); /*0x5e956b*/
      FormHeapFree(v11[1]); /*0x5e956f*/
      v11[1] = v10; /*0x5e9579*/
    }
    while ( v10 ); /*0x5e957c*/
  }
  *v11 = 0; /*0x5e957f*/
  FormHeapFree((unsigned int)v11); /*0x5e9585*/
  FormHeapFree((unsigned int)a1); /*0x5e958b*/
}
