bool __thiscall sub_522040(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  char *v6; // eax
  int v7; // esi
  char *v8; // [esp-Ch] [ebp-14h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  if ( memcmp((char *)this + 0xEC, &v4[9].member.modlist.next, 0x15u) )
    return 1;
  if ( *((TESForm::ModReferenceList **)this + 0x41) != v4[0xA].member.modlist.next )
    return 1;
  if ( *((TESFormVtbl **)this + 0x72) != v4[0x13].vtbl )
    return 1;
  if ( *(float *)&v4[0x13].member.type != *((float *)this + 0x73) )
    return 1;
  if ( *((_DWORD *)this + 0x74) != v4[0x13].member.flags )
    return 1;
  if ( *((_DWORD *)this + 0x7A) != v4[0x14].member.flags )
    return 1;
  v8 = (char *)sub_521A10((TESNPC *)v4);
  v6 = (char *)sub_521A10((TESNPC *)this);
  if ( sub_551990(v6, v8) || *((_WORD *)this + 0xF0) != LOWORD(v4[0x14].vtbl) )
    return 1;
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4);
  return ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v7;
}
