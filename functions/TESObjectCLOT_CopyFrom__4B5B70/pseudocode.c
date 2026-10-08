void __thiscall TESObjectCLOT_CopyFrom(TESForm *this, TESForm *a2)
{
  if ( OblivionDynamicCast( /*0x4b5b87*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCLOT `RTTI Type Descriptor',
         0) )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b5b96*/
  }
}
