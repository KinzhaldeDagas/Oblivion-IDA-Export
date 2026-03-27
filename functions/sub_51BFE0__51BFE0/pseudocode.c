void __thiscall sub_51BFE0(TESForm *this, TESForm *a2)
{
  char *v3; // esi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESClass `RTTI Type Descriptor',
                 0);
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    qmemcpy((char *)this + 0x38, v3 + 0x38, 0x34u);
  }
}
