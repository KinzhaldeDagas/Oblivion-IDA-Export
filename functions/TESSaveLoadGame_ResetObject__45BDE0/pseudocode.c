int __userpurge TESSaveLoadGame_ResetObject@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESForm *a5,
        int a6,
        char a7)
{
  int v7; // esi
  TESForm::ModReferenceList *p_modlist; // eax
  TESObjectREFR *v10; // ebx
  _DWORD **v11; // eax
  _DWORD *v12; // esi
  UInt32 refID; // esi
  const char *v14; // eax
  int type; // esi
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // esi
  int v19; // eax
  Data *OverrideFile; // eax
  Data *v21; // eax
  Data *v22; // ebp
  TESForm *v23; // eax
  int v24; // esi
  char v25; // bl
  int v26; // [esp+0h] [ebp-18h]
  int v27; // [esp+10h] [ebp-8h]

  v7 = 0;
  p_modlist = &a5->member.modlist;
  v27 = 0;
  if ( a5 != (TESForm *)0xFFFFFFF0 )
  {
    do
    {
      if ( p_modlist->data )
        ++v7;
      p_modlist = p_modlist->next;
    }
    while ( p_modlist );
    v27 = v7;
  }
  v10 = (TESObjectREFR *)OblivionDynamicCast(
                           a5,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                           0);
  if ( v10 )
  {
    if ( v7 )
    {
      if ( sub_45BB30(a1, (char)v10, a2, a3, a4, v10, (a7 & 0xC) != 0) )
        a6 &= 0x7FFFFFF3u;
    }
  }
  v11 = (_DWORD **)OblivionDynamicCast(
                     a5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
  v12 = v11;
  if ( v11 )
  {
    sub_5EAE70(v11, (int)v10, (int)a5, v26);
    sub_5E9690(v12);
  }
  if ( v10 && !(*(int (__thiscall **)(TESChildCELLVtbl *))v10->member.childCell.GetChildCell)(&v10->member.childCell) )
  {
    refID = v10->member.super.refID;
    v14 = v10->vtbl->super.GetEditorName((TESForm *)v10);
    PrintError("Trying to reset object %08X %s, but the reference has no save parent cell.", refID, v14);
    return v27;
  }
  if ( !a6 )
    return v27;
  if ( !v27 )
    return v27;
  type = a5->member.type;
  if ( *(_BYTE *)(a1 + 0xA8) )
  {
    if ( (!v10 || TESObjectREFR_IsPersistent_(v10)) && type != 0x28 && type != 0x19 )
      return v27;
  }
  v17 = (TESObjectREFR *)OblivionDynamicCast(
                           a5,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v18 = v17;
  if ( v17 )
  {
    v19 = ((int (__thiscall *)(TESObjectREFR *))v17->vtbl[2].super.Unk_0C)(v17);
    if ( v19 )
    {
      if ( v18->member.niNode )
      {
        if ( *(_DWORD *)(v19 + 0x3C) )
          sub_5F0410(v18, a1);
      }
    }
  }
  OverrideFile = TESForm_GetOverrideFile(a5, 0xFFFFFFFF);
  if ( !OverrideFile || (v21 = sub_4520F0(OverrideFile), (v22 = v21) == 0) || !TESFile::FindForm(v21, a5) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
      dword_B34D90,
      "Form could not be found in file during ResetObject() call.\n");
    return v27;
  }
  dword_B33A9C = 0;
  if ( (unsigned int)a5->member.type - 0x31 <= 2 )
  {
    if ( v10 )
    {
      if ( !v18 || (v23 = (TESForm *)sub_5E1F60(v18), (dword_B33A9C = v23) == 0) )
        dword_B33A9C = (TESForm *)(*(int (__thiscall **)(TESChildCELLVtbl *))v10->member.childCell.GetChildCell)(&v10->member.childCell);
    }
  }
  v24 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v25 = *(_BYTE *)(v24 + 0x184);
  *(_BYTE *)(v24 + 0x184) = 1;
  *(_DWORD *)(a1 + 0x18) |= 4u;
  TESDataHandler_LoadFormRecord((TESWorldSpace **)TESDataHandler, a2, a3, a4, v22, 0);
  *(_DWORD *)(a1 + 0x18) &= ~4u;
  *(_BYTE *)(v24 + 0x184) = v25;
  dword_B33A9C = 0;
  return v27;
}
