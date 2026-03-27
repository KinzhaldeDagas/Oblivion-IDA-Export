bool __thiscall TESObjectREFR_CompareTo(TESForm *this, TESChildCELL *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3
      || TESForm_CompareAllComponentsTo(this, v3)
      || memcmp((char *)this + 0x1C, &v4[1].member, 0x1Cu)
      || *((Data **)this + 0x10) != v4[2].member.modlist.data
      || ExtraDataList_CompareList((ExtraDataList *)((char *)this + 0x44), (ExtraDataList *)&v4[2].member.modlist.next)
      || *(float *)&v4[2].member.flags != *((float *)this + 0xE);
}
