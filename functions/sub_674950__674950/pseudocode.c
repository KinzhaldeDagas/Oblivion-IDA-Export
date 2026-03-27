void __thiscall sub_674950(Actor **this)
{
  Actor **v1; // ebx
  Actor *v2; // esi
  LowProcess *process; // ecx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  UInt32 v7; // edi
  int v8; // eax

  v1 = this + 0x16;
  if ( this != (Actor **)0xFFFFFFA8 )
  {
    do
    {
      if ( !*v1 )
        break;
      if ( (*v1)->vtbl->super.super.IsActor((TESObjectREFR *)*v1) )
      {
        v2 = *v1;
        if ( *v1 )
        {
          process = v2->members.super.process;
          if ( process )
          {
            if ( process->GetCurrentPackage(process) )
            {
              sub_5E2E00(v2);
              v5 = v4;
              v6 = (int)v2->members.super.process->GetCurrentPackage(v2->members.super.process);
              v7 = v6;
              if ( v6 && *(_BYTE *)(v6 + 0x20) == 2 )
              {
                sub_5E2E00(v2);
                if ( v8 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) )
                    v2->members.super.process->Unk_21(v2->members.super.process, (UInt32)v2, v7, 0);
                }
              }
              else if ( v5 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x190))(v5) )
                  sub_424C50(&v2->members.super.super.baseExtraList, v5);
              }
            }
          }
        }
      }
      v1 = (Actor **)v1[1];
    }
    while ( v1 );
  }
}
