void __thiscall VampirismEffect_Apply(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  Actor *v4; // esi
  float v5; // [esp+Ch] [ebp-10h]

  v2 = *((MagicTarget **)this + 8); /*0x6a8b44*/
  if ( v2 ) /*0x6a8b49*/
  {
    ParentActor = MagicTarget_GetParentActor(v2); /*0x6a8b4c*/
    v4 = ParentActor; /*0x6a8b51*/
    if ( ParentActor ) /*0x6a8b55*/
    {
      if ( ParentActor == (Actor *)reference ) /*0x6a8b5d*/
        ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->ModBaseAV_F)(ParentActor, 0x45, *(this + 6)); /*0x6a8b72*/
      v5 = (float)v4->vtbl->GetActorValue(v4, kActorVal_Vampirism); /*0x6a8b8d*/
      sub_60E2E0(v4, v5); /*0x6a8b90*/
      LOBYTE(MEMORY[0xB33D80]) = 1; /*0x6a8b95*/
      ((void (__thiscall *)(LowProcess_vtbl **, int))v4->members.super.process->SetUnk16C)( /*0x6a8ba9*/
        &v4->members.super.process->__vftable,
        1);
      ((void (__thiscall *)(LowProcess_vtbl **, Actor *))v4->members.super.process->Unk_C5)( /*0x6a8bb7*/
        &v4->members.super.process->__vftable,
        v4);
      LOBYTE(MEMORY[0xB33D80]) = 0; /*0x6a8bb9*/
    }
  }
}
