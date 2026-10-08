void __thiscall DarknessEffect_RemoveEffect(_DWORD *this)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  double v5; // st7
  NiNode *v6; // eax
  int v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+Ch] [ebp-4h]

  ValueModifierEffect_Remove(this, v7, v8); /*0x692c04*/
  v3 = (MagicTarget *)this[8]; /*0x692c09*/
  if ( v3 ) /*0x692c0e*/
  {
    ParentActor = MagicTarget_GetParentActor(v3); /*0x692c15*/
    if ( ParentActor ) /*0x692c19*/
    {
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) ) /*0x692c25*/
      {
        v9 = 1.0 - ((double (__thiscall *)(Actor *, int))ParentActor->vtbl->GetAV_F)(ParentActor, 0x46) / fCostant_100; /*0x692c43*/
        v5 = 0.0; /*0x692c47*/
        if ( v9 < 0.0 || (v5 = 1.0, v9 > 1.0) ) /*0x692c6b*/
          v9 = v5; /*0x692c58*/
        v6 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x692c81*/
        sub_7B8440(v6, v9); /*0x692c84*/
      }
    }
  }
}
