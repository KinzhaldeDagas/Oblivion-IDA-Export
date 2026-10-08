int *__userpurge sub_674FD0@<eax>(int a1@<edi>, ActorProcessManager *a2@<ecx>, int *a3)
{
  int *result; // eax
  ActorProcessManager *v4; // edx
  int *v5; // ebp
  int v6; // ebx
  Actor *ListHead; // eax
  int *i; // esi
  Actor *v9; // edi
  int v10; // [esp-10h] [ebp-14h]

  result = a3; /*0x674fd1*/
  v4 = a2; /*0x674fd7*/
  if ( a3 && g_TESDataHandler && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x674ff0*/
  {
    v5 = (int *)a3[2]; /*0x674fff*/
    v10 = a1; /*0x675003*/
    v6 = 0; /*0x675004*/
    while ( 1 ) /*0x67500c*/
    {
      if ( v6 ) /*0x67500e*/
      {
        if ( v6 != 1 ) /*0x675016*/
          goto LABEL_18; /*0x675016*/
        ListHead = ActorProcessManager_GetListHead(v4, 1); /*0x67501b*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v4, 0); /*0x675011*/
      }
      result = (int *)ActorList_ReturnHead((ActorList *)ListHead); /*0x675022*/
      for ( i = result; i; i = (int *)i[1] ) /*0x67502b*/
      {
        if ( !i[1] && !*i ) /*0x675036*/
          break; /*0x675039*/
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)*i + 0x190))(*i); /*0x675045*/
        if ( (_BYTE)result ) /*0x675049*/
        {
          v9 = (Actor *)*i; /*0x67504b*/
          if ( *i ) /*0x67504b*/
          {
            result = (int *)v9->members.super.process->GetCurrentPackage(v9->members.super.process); /*0x67505c*/
            if ( v5 == result ) /*0x675060*/
            {
              sub_5EAE70(v9, v6, (int)v9, v10); /*0x675064*/
              result = (int *)((int (__thiscall *)(LowProcess *))v9->members.super.process->Unk_126)(v9->members.super.process); /*0x675074*/
            }
          }
        }
      }
LABEL_18:
      if ( ++v6 >= 2 ) /*0x675083*/
        return result; /*0x675083*/
      v4 = a2; /*0x675008*/
    }
  }
  return result; /*0x67508a*/
}
