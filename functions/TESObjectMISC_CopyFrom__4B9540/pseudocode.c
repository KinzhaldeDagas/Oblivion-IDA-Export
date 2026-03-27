void __thiscall TESObjectMISC_CopyFrom(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectMISC `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
  }
}
