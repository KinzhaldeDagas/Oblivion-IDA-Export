void __usercall DemoralizeEffect_RemoveEffect(int a1@<ecx>, int a2@<ebx>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v5; // ecx
  Actor *v6; // edi
  LowProcess *process; // ecx

  if ( *(_BYTE *)(a1 + 0x38) ) /*0x693053*/
  {
    v3 = *(MagicTarget **)(a1 + 0x20); /*0x69305d*/
    if ( v3 ) /*0x693063*/
      ParentActor = MagicTarget_GetParentActor(v3); /*0x69306a*/
    else
      ParentActor = 0; /*0x69306e*/
    v5 = *(MagicCaster **)(a1 + 0x24); /*0x693070*/
    if ( v5 ) /*0x693075*/
      v6 = MagicCaster_GetParentActor(v5); /*0x69307c*/
    else
      v6 = 0; /*0x693080*/
    if ( ParentActor ) /*0x693084*/
    {
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) ) /*0x693092*/
      {
        ((void (__thiscall *)(Actor *, Actor *))ParentActor->vtbl->Unk_D0)(ParentActor, v6); /*0x6930a3*/
        if ( v6 ) /*0x6930a7*/
        {
          process = ParentActor->members.super.process; /*0x6930a9*/
          if ( process ) /*0x6930ae*/
            ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))process->Unk_89)( /*0x6930ca*/
              process,
              ParentActor,
              v6,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              1);
        }
      }
      else if ( sub_5E6CD0((TESObjectREFR *)ParentActor, 0) ) /*0x6930d1*/
      {
        sub_5EFF30(ParentActor, a2, (int)ParentActor, (int)v6); /*0x6930dd*/
      }
    }
  }
}
