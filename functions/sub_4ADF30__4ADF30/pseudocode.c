void __thiscall sub_4ADF30(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFlora `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
  }
}
