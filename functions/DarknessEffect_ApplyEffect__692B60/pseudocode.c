NiObject *__thiscall DarknessEffect_ApplyEffect(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // esi
  NiObject *result; // eax
  double v5; // st7
  NiNode *v6; // eax
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+10h] [ebp-4h]

  v2 = *(MagicTarget **)(this + 0x20); /*0x692b65*/
  if ( v2 ) /*0x692b6a*/
    ParentActor = MagicTarget_GetParentActor(v2); /*0x692b71*/
  else
    ParentActor = 0; /*0x692b75*/
  result = (NiObject *)ValueModifierEffect_Apply((float *)this, v7); /*0x692b79*/
  if ( ParentActor ) /*0x692b80*/
  {
    result = (NiObject *)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x692b8c*/
    if ( result ) /*0x692b90*/
    {
      v8 = 1.0 - ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x46) / fCostant_100; /*0x692baa*/
      v5 = 0.0; /*0x692bae*/
      if ( v8 < 0.0 || (v5 = 1.0, v8 > 1.0) ) /*0x692bd2*/
        v8 = v5; /*0x692bbf*/
      v6 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x692be8*/
      return sub_7B8440(v6, v8); /*0x692beb*/
    }
  }
  return result; /*0x692bf3*/
}
