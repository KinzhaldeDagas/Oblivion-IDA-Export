bool __thiscall sub_51D270(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edx
  int v9; // eax
  int v10; // edx

  v3 = (TESForm *)OblivionDynamicCast( /*0x51d287*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCreature `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x51d28c*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x51d29f*/
    return 1; /*0x51d299*/
  if ( memcmp((char *)this + 0x104, &v4[0xA].member.modlist.next, 6u) ) /*0x51d2c4*/
    return 1; /*0x51d2c4*/
  if ( *((_BYTE *)this + 0x10A) != BYTE2(v4[0xB].vtbl) ) /*0x51d34b*/
    return 1; /*0x51d34b*/
  if ( *(float *)&v4[0xB].member.type != *((float *)this + 0x43) ) /*0x51d364*/
    return 1; /*0x51d364*/
  if ( *(float *)&v4[0xB].member.refID != *((float *)this + 0x45) ) /*0x51d37d*/
    return 1; /*0x51d37d*/
  if ( *(float *)&v4[0xB].member.flags != *((float *)this + 0x44) ) /*0x51d396*/
    return 1; /*0x51d396*/
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x47) + 0xC))( /*0x51d3b2*/
         (char *)this + 0x11C,
         &v4[0xB].member.modlist.next) )
  {
    return 1; /*0x51d3b2*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x4D) + 0xC))( /*0x51d3d2*/
         (char *)this + 0x134,
         &v4[0xC].member.modlist.next) )
  {
    return 1; /*0x51d3d2*/
  }
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4); /*0x51d3e4*/
  if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v6 ) /*0x51d3f4*/
    return 1; /*0x51d3f4*/
  if ( (*((_DWORD *)this + 0xA) & 0x100) != 0 ) /*0x51d3fe*/
  {
    sub_51CDC0(this); /*0x51d402*/
    v7 = sub_51CDC0(v4); /*0x51d40b*/
    if ( !v8 ) /*0x51d412*/
      return v7 != 0; /*0x51d42f*/
    if ( v7 ) /*0x51d416*/
      return CreatureSoundArray_CompareTo(v8, v7) != 0; /*0x51d422*/
    return 1; /*0x51d454*/
  }
  sub_51CD40(v4); /*0x51d43c*/
  v9 = sub_51CD40(this); /*0x51d445*/
  return v9 != v10; /*0x51d295*/
}
