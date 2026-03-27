void __thiscall CommandEffect_RemoveEffect(_DWORD *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v4; // ecx
  Actor *v5; // edi
  LowProcess *process; // ecx

  v2 = (MagicTarget *)*(this + 8);
  if ( v2 )
    ParentActor = MagicTarget_GetParentActor(v2);
  else
    ParentActor = 0;
  v4 = (MagicCaster *)*(this + 9);
  if ( v4 )
    v5 = MagicCaster_GetParentActor(v4);
  else
    v5 = 0;
  if ( ParentActor )
  {
    if ( v5 )
    {
      process = ParentActor->members.super.process;
      if ( process )
        ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_F2)(process, 0);
      ((void (__thiscall *)(Actor *, Actor *, float))ParentActor->vtbl->Unk_DD)(ParentActor, v5, flt_A40360);
      ParentActor->vtbl->ModMaxAV(ParentActor, 0x22, 0xFFFFFF9C, 0);
    }
  }
}
