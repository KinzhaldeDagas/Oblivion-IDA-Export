void __cdecl ParalysisEffect_Apply(float a1)
{
  int v1; // ecx
  float *v2; // edi
  MagicTarget *v3; // ecx
  Actor *ParentActor; // eax
  Actor *v5; // esi

  v2 = (float *)v1;
  v3 = *(MagicTarget **)(v1 + 0x20);
  if ( v3 )
  {
    ParentActor = MagicTarget_GetParentActor(v3);
    v5 = ParentActor;
    if ( ParentActor )
    {
      sub_5EF930(ParentActor);
      v5->vtbl->super.super.HasFatigue((TESObjectREFR *)v5);
      ValueModifierEffect_Apply(v2, a1);
    }
  }
}
