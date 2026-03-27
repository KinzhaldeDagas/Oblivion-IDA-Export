bool __thiscall sub_51D270(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edx
  int v9; // eax
  int v10; // edx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCreature `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  if ( memcmp((char *)this + 0x104, &v4[0xA].member.modlist.next, 6u) )
    return 1;
  if ( *((_BYTE *)this + 0x10A) != BYTE2(v4[0xB].vtbl) )
    return 1;
  if ( *(float *)&v4[0xB].member.type != *((float *)this + 0x43) )
    return 1;
  if ( *(float *)&v4[0xB].member.refID != *((float *)this + 0x45) )
    return 1;
  if ( *(float *)&v4[0xB].member.flags != *((float *)this + 0x44) )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x47) + 0xC))(
         (char *)this + 0x11C,
         &v4[0xB].member.modlist.next) )
  {
    return 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x4D) + 0xC))(
         (char *)this + 0x134,
         &v4[0xC].member.modlist.next) )
  {
    return 1;
  }
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4);
  if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v6 )
    return 1;
  if ( (*((_DWORD *)this + 0xA) & 0x100) != 0 )
  {
    sub_51CDC0(this);
    v7 = sub_51CDC0(v4);
    if ( !v8 )
      return v7 != 0;
    if ( v7 )
      return CreatureSoundArray_CompareTo(v8, v7) != 0;
    return 1;
  }
  sub_51CD40(v4);
  v9 = sub_51CD40(this);
  return v9 != v10;
}
