TESForm *__thiscall sub_4EDB40(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // ebx
  void (__thiscall *v5)(char *, TESForm::FormFlags *); // edx
  const char *vtbl; // ebx

  result = (TESForm *)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESWaterForm `RTTI Type Descriptor',
                        0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, result);
    *((_BYTE *)this + 0x2D) = BYTE1(v4[1].member.modlist.next);
    *((_BYTE *)this + 0x2C) = v4[1].member.modlist.next;
    qmemcpy((char *)this + 0x3C, &v4[2].member.refID, 0x64u);
    *((_DWORD *)this + 0xE) = v4[2].member.flags;
    *((_DWORD *)this + 0x28) = v4[6].member.modlist.data;
    *((_DWORD *)this + 0x29) = v4[6].member.modlist.next;
    v5 = *(void (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 8) + 8);
    *((_DWORD *)this + 0x2A) = v4[7].vtbl;
    v5((char *)this + 0x20, &v4[1].member.flags);
    vtbl = (const char *)v4[2].vtbl;
    if ( !vtbl )
      vtbl = EmptyString;
    return (TESForm *)BSStringT_Set((BSStringT *)this + 6, vtbl, 0);
  }
  return result;
}
