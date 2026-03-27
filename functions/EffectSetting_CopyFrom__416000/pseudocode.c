int __thiscall EffectSetting_CopyFrom(TESForm *this, TESForm *a2)
{
  void *v3; // edi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &EffectSetting `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return EffectSetting_CopyFrom_::Done((int)a2);
  TESForm_CopyAllComponentsFrom(this, a2);
  return EffectSetting_CopyFrom_::CopyFields((int)v3, (int)this, (int)a2);
}
