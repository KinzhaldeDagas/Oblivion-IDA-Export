void __thiscall TurnUndeadEffect_Remove(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v4; // ecx
  Actor *v5; // edi
  LowProcess *process; // ecx

  if ( *(_BYTE *)(this + 0x38) ) /*0x6a8133*/
  {
    v2 = *(MagicTarget **)(this + 0x20); /*0x6a8139*/
    if ( v2 ) /*0x6a813f*/
      ParentActor = MagicTarget_GetParentActor(v2); /*0x6a8146*/
    else
      ParentActor = 0; /*0x6a814a*/
    v4 = *(MagicCaster **)(this + 0x24); /*0x6a814c*/
    if ( v4 ) /*0x6a8151*/
      v5 = MagicCaster_GetParentActor(v4); /*0x6a8158*/
    else
      v5 = 0; /*0x6a815c*/
    if ( ParentActor ) /*0x6a8160*/
    {
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) ) /*0x6a816e*/
      {
        ((void (__thiscall *)(Actor *, Actor *))ParentActor->vtbl->Unk_D0)(ParentActor, v5); /*0x6a817f*/
        if ( v5 ) /*0x6a8183*/
        {
          process = ParentActor->members.super.process; /*0x6a8185*/
          if ( process ) /*0x6a818a*/
            ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))process->Unk_89)( /*0x6a81a6*/
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
