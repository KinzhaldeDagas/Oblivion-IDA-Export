void __thiscall VampirismEffect_Apply(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  Actor *v4; // esi
  float v5; // [esp+Ch] [ebp-10h]

  v2 = *((MagicTarget **)this + 8);
  if ( v2 )
  {
    ParentActor = MagicTarget_GetParentActor(v2);
    v4 = ParentActor;
    if ( ParentActor )
    {
      if ( ParentActor == (Actor *)TESDataHandler_g_PlayerRef )
        ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->ModBaseAV_F)(ParentActor, 0x45, *(this + 6));
      v5 = (float)v4->vtbl->GetActorValue(v4, kActorVal_Vampirism);
      sub_60E2E0(v4, v5);
      g_bUpdatePlayerModel = 1;
      ((void (__thiscall *)(LowProcess_vtbl **, int))v4->members.super.process->SetUnk16C)(
        &v4->members.super.process->__vftable,
        1);
      ((void (__thiscall *)(LowProcess_vtbl **, Actor *))v4->members.super.process->Unk_C5)(
        &v4->members.super.process->__vftable,
        v4);
      g_bUpdatePlayerModel = 0;
    }
  }
}
