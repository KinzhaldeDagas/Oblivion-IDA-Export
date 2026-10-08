// BSAnimGroupSequence removed-controller cleanup. Drops controller references that belong to an idle/sequence being destroyed or replaced.
int __usercall BSAnimGroupSequence_CleanupRemovedControllers@<eax>(_DWORD *a1@<ecx>, int a2@<esi>)
{
  int result; // eax
  int v4; // ebp
  int v5; // ebx
  _WORD *v6; // esi
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // edx
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  unsigned int i; // [esp+14h] [ebp-8h]
  _DWORD *v16; // [esp+18h] [ebp-4h]

  result = a1[0x10]; /*0x49f757*/
  v4 = 0; /*0x49f75a*/
  if ( result ) /*0x49f75e*/
  {
    v5 = *(_DWORD *)(result + 0x7C); /*0x49f765*/
    result = a1[0x17]; /*0x49f768*/
    if ( result ) /*0x49f76d*/
    {
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x4C))(v5, a1[0x17]); /*0x49f777*/
      a1[0x18] = result; /*0x49f779*/
    }
    for ( i = 0; i < a1[3]; ++i ) /*0x49f77c*/
    {
      v6 = (_WORD *)(v4 + a1[6]); /*0x49f79a*/
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x58))(v5, a2); /*0x49f79c*/
      v8 = v6[2]; /*0x49f79e*/
      if ( v8 == word_A79928 ) /*0x49f7a9*/
        v9 = 0; /*0x49f7b5*/
      else
        v9 = *(_DWORD *)(*(_DWORD *)v6 + 8) + v8; /*0x49f7b0*/
      a2 = v9; /*0x49f7bb*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x58))(v7) ) /*0x49f7bf*/
      {
        v10 = v6[2]; /*0x49f7c5*/
        if ( v10 == word_A79928 ) /*0x49f7d0*/
          v11 = 0; /*0x49f7dc*/
        else
          v11 = *(_DWORD *)(*(_DWORD *)v6 + 8) + v10; /*0x49f7d7*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 0x50))(v5, v11, 0); /*0x49f7e8*/
        v12 = a1[5]; /*0x49f7ea*/
        v13 = *(_DWORD *)(v12 + v4 + 4); /*0x49f7ed*/
        v16 = (_DWORD *)(v12 + v4 + 4); /*0x49f7f7*/
        if ( v13 ) /*0x49f7fb*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x49f801*/
            (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x49f817*/
          *v16 = 0; /*0x49f81d*/
        }
        *(_DWORD *)(a1[5] + v4 + 8) = 0; /*0x49f826*/
        *(_BYTE *)(a1[5] + v4 + 0xC) = byte_A79EFC; /*0x49f836*/
      }
      result = i + 1; /*0x49f83e*/
      v4 += 0x10; /*0x49f841*/
    }
  }
  return result; /*0x49f853*/
}
