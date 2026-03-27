bool __thiscall sub_520380(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESIdleForm `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3
      || TESForm_CompareAllComponentsTo(this, v3)
      || sub_56A4B0((_DWORD *)this + 0xC, (int)&v4[2])
      || *((_BYTE *)this + 0x38) != LOBYTE(v4[2].member.flags);
}
