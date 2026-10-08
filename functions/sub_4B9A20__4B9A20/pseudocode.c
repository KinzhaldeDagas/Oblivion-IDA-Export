void __thiscall sub_4B9A20(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast( /*0x4b9a37*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectSTAT `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b9a46*/
  }
}
