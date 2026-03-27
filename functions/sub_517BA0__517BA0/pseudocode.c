bool __thiscall sub_517BA0(TESForm *this, void *a2)
{
  TESForm *v3; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSound `RTTI Type Descriptor',
                    0);
  return !v3
      || v3[2].member.refID != *((_DWORD *)this + 0xF)
      || BYTE1(v3[2].member.flags) != *((_BYTE *)this + 0x39)
      || LOBYTE(v3[2].member.flags) != *((_BYTE *)this + 0x38)
      || BYTE2(v3[2].member.flags) != *((_BYTE *)this + 0x3A)
      || LOWORD(v3[2].member.modlist.data) != *((_WORD *)this + 0x20)
      || HIWORD(v3[2].member.modlist.data) != *((_WORD *)this + 0x21)
      || TESForm_CompareAllComponentsTo(this, v3) != 0;
}
