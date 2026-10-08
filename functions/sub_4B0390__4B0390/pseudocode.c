void __thiscall sub_4B0390(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast( /*0x4b03a7*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESLevSpell `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b03b6*/
  }
}
