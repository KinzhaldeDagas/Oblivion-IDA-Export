void __thiscall sub_4AF3B0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGrass `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    qmemcpy((char *)this + 0x3C, &v4[2].member.refID, 0x20u);
  }
}
