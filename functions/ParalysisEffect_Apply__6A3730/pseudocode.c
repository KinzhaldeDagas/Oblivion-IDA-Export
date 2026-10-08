void __cdecl ParalysisEffect_Apply(float a1)
{
  int v1; // ecx
  float *v2; // edi
  MagicTarget *v3; // ecx
  Actor *ParentActor; // eax
  Actor *v5; // esi

  v2 = (float *)v1; /*0x6a3731*/
  v3 = *(MagicTarget **)(v1 + 0x20); /*0x6a3733*/
  if ( v3 ) /*0x6a3738*/
  {
    ParentActor = MagicTarget_GetParentActor(v3); /*0x6a373b*/
    v5 = ParentActor; /*0x6a3740*/
    if ( ParentActor ) /*0x6a3744*/
    {
      Actor::StopDialoguePlayback(ParentActor); /*0x6a3748*/
      v5->vtbl->super.super.HasFatigue((TESObjectREFR *)v5); /*0x6a3757*/
      ValueModifierEffect_Apply(v2, a1); /*0x6a375d*/
    }
  }
}
