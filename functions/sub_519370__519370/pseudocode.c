void __thiscall sub_519370(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast( /*0x519387*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &BirthSign `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x519396*/
  }
}
