int *__userpurge sub_674FD0@<eax>(int a1@<edi>, ActorProcessManager *a2@<ecx>, int *a3)
{
  int *result; // eax
  ActorProcessManager *v4; // edx
  int *v5; // ebp
  int v6; // ebx
  Actor *v7; // eax
  int *i; // esi
  Actor *v9; // edi
  int v10; // [esp-10h] [ebp-14h]

  result = a3;
  v4 = a2;
  if ( a3 && TESDataHandler && !*(_BYTE *)(TESDataHandler + 0xCD4) )
  {
    v5 = (int *)a3[2];
    v10 = a1;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_18;
        v7 = sub_673A50(v4, 1);
      }
      else
      {
        v7 = sub_673A50(v4, 0);
      }
      result = (int *)sub_7616D0((ActorList *)v7);
      for ( i = result; i; i = (int *)i[1] )
      {
        if ( !i[1] && !*i )
          break;
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)*i + 0x190))(*i);
        if ( (_BYTE)result )
        {
          v9 = (Actor *)*i;
          if ( *i )
          {
            result = (int *)v9->members.super.process->GetCurrentPackage(v9->members.super.process);
            if ( v5 == result )
            {
              sub_5EAE70(v9, v6, (int)v9, v10);
              result = (int *)((int (__thiscall *)(LowProcess *))v9->members.super.process->Unk_126)(v9->members.super.process);
            }
          }
        }
      }
LABEL_18:
      if ( ++v6 >= 2 )
        return result;
      v4 = a2;
    }
  }
  return result;
}
