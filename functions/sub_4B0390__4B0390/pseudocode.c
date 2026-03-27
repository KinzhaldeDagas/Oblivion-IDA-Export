void __thiscall sub_4B0390(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESLevSpell `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
  }
}
