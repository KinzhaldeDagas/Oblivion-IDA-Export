TESForm *__thiscall sub_4EDB40(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // ebx
  void (__thiscall *v5)(char *, TESForm::FormFlags *); // edx
  const char *vtbl; // ebx

  result = (TESForm *)OblivionDynamicCast( /*0x4edb57*/
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESWaterForm `RTTI Type Descriptor',
                        0);
  v4 = result; /*0x4edb5c*/
  if ( result ) /*0x4edb63*/
  {
    TESForm_CopyAllComponentsFrom(this, result); /*0x4edb6a*/
    *((_BYTE *)this + 0x2D) = BYTE1(v4[1].member.modlist.next); /*0x4edb72*/
    *((_BYTE *)this + 0x2C) = v4[1].member.modlist.next; /*0x4edb78*/
    qmemcpy((char *)this + 0x3C, &v4[2].member.refID, 0x64u); /*0x4edb86*/
    *((_DWORD *)this + 0xE) = v4[2].member.flags; /*0x4edb8b*/
    *((_DWORD *)this + 0x28) = v4[6].member.modlist.data; /*0x4edb94*/
    *((_DWORD *)this + 0x29) = v4[6].member.modlist.next; /*0x4edba0*/
    v5 = *(void (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 8) + 8); /*0x4edbaf*/
    *((_DWORD *)this + 0x2A) = v4[7].vtbl; /*0x4edbb5*/
    v5((char *)this + 0x20, &v4[1].member.flags); /*0x4edbbf*/
    vtbl = (const char *)v4[2].vtbl; /*0x4edbc1*/
    if ( !vtbl ) /*0x4edbc8*/
      vtbl = EmptyString; /*0x4edbca*/
    return (TESForm *)BSStringT_Set((BSStringT *)this + 6, vtbl, 0); /*0x4edbd5*/
  }
  return result; /*0x4edbda*/
}
