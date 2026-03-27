void __thiscall TurnUndeadEffect_Remove(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v4; // ecx
  Actor *v5; // edi
  LowProcess *process; // ecx

  if ( *(_BYTE *)(this + 0x38) )
  {
    v2 = *(MagicTarget **)(this + 0x20);
    if ( v2 )
      ParentActor = MagicTarget_GetParentActor(v2);
    else
      ParentActor = 0;
    v4 = *(MagicCaster **)(this + 0x24);
    if ( v4 )
      v5 = MagicCaster_GetParentActor(v4);
    else
      v5 = 0;
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) )
      {
        ((void (__thiscall *)(Actor *, Actor *))ParentActor->vtbl->Unk_D0)(ParentActor, v5);
        if ( v5 )
        {
          process = ParentActor->members.super.process;
          if ( process )
            ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))process->Unk_89)(
              process,
              ParentActor,
              v5,
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
    }
  }
}
