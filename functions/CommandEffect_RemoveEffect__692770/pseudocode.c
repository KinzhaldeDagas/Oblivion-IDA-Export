void __thiscall CommandEffect_RemoveEffect(_DWORD *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v4; // ecx
  Actor *v5; // edi
  LowProcess *process; // ecx

  v2 = (MagicTarget *)*(this + 8); /*0x692774*/
  if ( v2 ) /*0x692779*/
    ParentActor = MagicTarget_GetParentActor(v2); /*0x692780*/
  else
    ParentActor = 0; /*0x692784*/
  v4 = (MagicCaster *)*(this + 9); /*0x692786*/
  if ( v4 ) /*0x69278b*/
    v5 = MagicCaster_GetParentActor(v4); /*0x692792*/
  else
    v5 = 0; /*0x692796*/
  if ( ParentActor ) /*0x69279a*/
  {
    if ( v5 ) /*0x69279e*/
    {
      process = ParentActor->members.super.process; /*0x6927a0*/
      if ( process ) /*0x6927a5*/
        ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_F2)(process, 0); /*0x6927b1*/
      ((void (__thiscall *)(Actor *, Actor *, float))ParentActor->vtbl->Unk_DD)(ParentActor, v5, flt_A40360); /*0x6927c8*/
      ParentActor->vtbl->ModMaxAV(ParentActor, 0x22, 0xFFFFFF9C, 0); /*0x6927da*/
    }
  }
}
