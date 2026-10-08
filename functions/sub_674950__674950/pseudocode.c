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

  v1 = this + 0x16; /*0x674951*/
  if ( this != (Actor **)0xFFFFFFA8 ) /*0x674956*/
  {
    do /*0x674a12*/
    {
      if ( !*v1 ) /*0x674960*/
        break; /*0x674964*/
      if ( (*v1)->vtbl->super.super.IsActor((TESObjectREFR *)*v1) ) /*0x674972*/
      {
        v2 = *v1; /*0x67497c*/
        if ( *v1 ) /*0x67497c*/
        {
          process = v2->members.super.process; /*0x674986*/
          if ( process ) /*0x67498b*/
          {
            if ( process->GetCurrentPackage(process) ) /*0x674999*/
            {
              sub_5E2E00(v2); /*0x6749a1*/
              v5 = v4; /*0x6749a9*/
              v6 = (int)v2->members.super.process->GetCurrentPackage(v2->members.super.process); /*0x6749b3*/
              v7 = v6; /*0x6749b5*/
              if ( v6 && *(_BYTE *)(v6 + 0x20) == 2 ) /*0x6749bf*/
              {
                sub_5E2E00(v2); /*0x6749c3*/
                if ( v8 ) /*0x6749ca*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) ) /*0x6749d6*/
                    v2->members.super.process->Unk_21(v2->members.super.process, (UInt32)v2, v7, 0); /*0x6749eb*/
                }
              }
              else if ( v5 ) /*0x6749f1*/
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x190))(v5) ) /*0x6749fe*/
                  sub_424C50(&v2->members.super.super.baseExtraList, v5); /*0x674a08*/
              }
            }
          }
        }
      }
      v1 = (Actor **)v1[1]; /*0x674a0d*/
    }
    while ( v1 ); /*0x674a12*/
  }
}
