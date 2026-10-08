int __thiscall sub_65A650(TESObjectREFR *this, float a2)
{
  Actor *v3; // esi
  double v4; // st7
  double v5; // st7
  float radians; // [esp+0h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-4h]

  v8 = flt_A73504; /*0x65a65a*/
  if ( this->vtbl->IsActor(this) ) /*0x65a666*/
  {
    v3 = (Actor *)OblivionDynamicCast( /*0x65a681*/
                    this,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    if ( v3->vtbl->GetMountedHorse(v3) ) /*0x65a690*/
    {
      v4 = MEMORY[0xB36C20]; /*0x65a696*/
LABEL_6:
      v8 = v4 * dbl_A31C78; /*0x65a6b8*/
      goto LABEL_7; /*0x65a6be*/
    }
    if ( (unsigned int)(v3->vtbl->super.super.GetSleepState((TESObjectREFR *)v3) - 1) <= 4 ) /*0x65a6b0*/
    {
      v4 = unk_B36C28; /*0x65a6b2*/
      goto LABEL_6; /*0x65a6b2*/
    }
  }
LABEL_7:
  v5 = flt_A73500; /*0x65a6c3*/
  if ( a2 >= v5 ) /*0x65a6d4*/
  {
    v5 = a2; /*0x65a6d6*/
    if ( v8 < (double)a2 ) /*0x65a6e3*/
      return TESObjectREFR_SetRotationX(this, v8); /*0x65a6ed*/
  }
  radians = v5; /*0x65a6fc*/
  return TESObjectREFR_SetRotationX(this, radians); /*0x65a6f2*/
}
