unsigned int __thiscall DarknessEffect_ApplyEffect(int this)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  unsigned int result; // eax
  double v6; // st7
  int v7; // eax
  float v8; // [esp+8h] [ebp-Ch]
  float v9; // [esp+10h] [ebp-4h]

  v3 = *(MagicTarget **)(this + 0x20);
  if ( v3 )
    ParentActor = MagicTarget_GetParentActor(v3);
  else
    ParentActor = 0;
  result = ValueModifierEffect_Apply((float *)this, v8);
  if ( ParentActor )
  {
    result = (unsigned int)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
    if ( result )
    {
      v9 = 1.0 - ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x46) / fCostant_100;
      v6 = 0.0;
      if ( v9 < 0.0 || (v6 = 1.0, v9 > 1.0) )
        v9 = v6;
      v7 = (int)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
      return sub_7B8440(v7, v9);
    }
  }
  return result;
}
