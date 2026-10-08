// Verified TESGlobal vtable override at +0xB8 (A498D4): returns mismatch when source is not TESGlobal, base components differ, type byte differs, or float value differs.
bool __thiscall TESGlobal_CompareComponentTo(TESGlobal *self, TESForm *source)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast( /*0x4f9597*/
                    source,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGlobal `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4f959c*/
  return !v3 /*0x4f95a5*/
      || TESForm_CompareAllComponentsTo((TESForm *)self, v3)
      || self->type != LOBYTE(v4[1].member.flags)
      || *(float *)&v4[1].member.refID != self->data;
}
