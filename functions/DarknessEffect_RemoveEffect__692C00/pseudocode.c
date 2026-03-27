void __usercall DarknessEffect_RemoveEffect(_DWORD *a1@<ecx>, double a2@<st0>)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  double v5; // st7
  int v6; // eax
  float v7; // [esp+Ch] [ebp-4h]

  ValueModifierEffect_Remove(a2);
  v3 = (MagicTarget *)a1[8];
  if ( v3 )
  {
    ParentActor = MagicTarget_GetParentActor(v3);
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) )
      {
        v7 = 1.0 - ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x46) / fCostant_100;
        v5 = 0.0;
        if ( v7 < 0.0 || (v5 = 1.0, v7 > 1.0) )
          v7 = v5;
        v6 = (int)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
        sub_7B8440(v6, v7);
      }
    }
  }
}
