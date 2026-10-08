void __thiscall sub_4AF3B0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast( /*0x4af3c7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGrass `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4af3cc*/
  if ( v3 ) /*0x4af3d3*/
  {
    TESForm_CopyAllComponentsFrom(this, v3); /*0x4af3d8*/
    qmemcpy((char *)this + 0x3C, &v4[2].member.refID, 0x20u); /*0x4af3e8*/
  }
}
