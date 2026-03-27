bool __thiscall sub_4B1040(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectLIGH `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3
      || TESForm_CompareAllComponentsTo(this, v3)
      || *((TESForm::ModReferenceList **)this + 0x23) != v4[5].member.modlist.next
      || memcmp((char *)this + 0x70, &v4[4].member.modlist, 0x18u)
      || *(float *)&v4[5].member.modlist.data != *((float *)this + 0x22);
}
