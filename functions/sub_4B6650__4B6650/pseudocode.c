bool __thiscall sub_4B6650(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCONT `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3
      || TESForm_CompareAllComponentsTo(this, v3)
      || *((_BYTE *)this + 0x78) != LOBYTE(v4[5].vtbl)
      || *((Data **)this + 0x1C) != v4[4].member.modlist.data
      || *((TESForm::ModReferenceList **)this + 0x1D) != v4[4].member.modlist.next;
}
