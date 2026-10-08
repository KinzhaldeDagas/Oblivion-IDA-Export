void __thiscall TESObjectMISC_CopyFrom(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast( /*0x4b9557*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectMISC `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b9566*/
  }
}
