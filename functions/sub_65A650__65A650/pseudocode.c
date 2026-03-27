int __thiscall sub_65A650(TESObjectREFR *this, float a2)
{
  Actor *v3; // esi
  double v4; // st7
  double v5; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-4h]

  v8 = flt_A73504;
  if ( this->vtbl->IsActor(this) )
  {
    v3 = (Actor *)OblivionDynamicCast(
                    this,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    if ( v3->vtbl->GetMountedHorse(v3) )
    {
      v4 = fMountedMaxLookingDown;
LABEL_6:
      v8 = v4 * dbl_A31C78;
      goto LABEL_7;
    }
    if ( (unsigned int)(v3->vtbl->super.super.GetSleepState((TESObjectREFR *)v3) - 1) <= 4 )
    {
      v4 = flt_B36C28;
      goto LABEL_6;
    }
  }
LABEL_7:
  v5 = flt_A73500;
  if ( a2 >= v5 )
  {
    v5 = a2;
    if ( v8 < (double)a2 )
      return sub_4D89D0(v8);
  }
  v7 = v5;
  return sub_4D89D0(v7);
}
