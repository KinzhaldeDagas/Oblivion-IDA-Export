void __usercall DemoralizeEffect_RemoveEffect(int a1@<ecx>, int a2@<ebx>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v5; // ecx
  Actor *v6; // edi
  LowProcess *process; // ecx

  if ( *(_BYTE *)(a1 + 0x38) )
  {
    v3 = *(MagicTarget **)(a1 + 0x20);
    if ( v3 )
      ParentActor = MagicTarget_GetParentActor(v3);
    else
      ParentActor = 0;
    v5 = *(MagicCaster **)(a1 + 0x24);
    if ( v5 )
      v6 = MagicCaster_GetParentActor(v5);
    else
      v6 = 0;
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) )
      {
        ((void (__thiscall *)(Actor *, Actor *))ParentActor->vtbl->Unk_D0)(ParentActor, v6);
        if ( v6 )
        {
          process = ParentActor->members.super.process;
          if ( process )
            ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))process->Unk_89)(
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
      else if ( sub_5E6CD0((TESObjectREFR *)ParentActor, 0) )
      {
        sub_5EFF30(ParentActor, a2, (int)ParentActor, (int)v6);
      }
    }
  }
}
