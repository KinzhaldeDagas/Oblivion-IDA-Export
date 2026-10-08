// Verified: ResetObject reloads a form’s active override record. Counts override files, casts references/actors, calls UnloadForm-style buffer cleanup where needed, checks parent-cell and process constraints, finds the winning override file, and invokes TESDataHandler_LoadFormRecord under save/load guard. Callers include ResetFormForLoad 45F20E and LoadGame 4665B9.
int __userpurge TESSaveLoadGame_ResetObject@<eax>(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        double arg4@<st0>,
        TESForm *form,
        unsigned int changeFlags,
        char mode)
{
  int v7; // esi
  TESForm::ModReferenceList *p_modlist; // eax
  TESObjectREFR *v10; // ebx
  Actor *v11; // eax
  int *v12; // esi
  UInt32 refID; // esi
  const char *v14; // eax
  int type; // esi
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // esi
  int v19; // eax
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // eax
  Data *v22; // ebp
  TESForm *v23; // eax
  int v24; // esi
  char v25; // bl
  int v26; // [esp+0h] [ebp-18h]
  int v27; // [esp+10h] [ebp-8h]

  v7 = 0; /*0x45bdeb*/
  p_modlist = &form->member.modlist; /*0x45bded*/
  v27 = 0; /*0x45bdf8*/
  if ( form != (TESForm *)0xFFFFFFF0 ) /*0x45bdfc*/
  {
    do /*0x45be0d*/
    {
      if ( p_modlist->data ) /*0x45be00*/
        ++v7; /*0x45be05*/
      p_modlist = p_modlist->next; /*0x45be08*/
    }
    while ( p_modlist ); /*0x45be0d*/
    v27 = v7; /*0x45be0f*/
  }
  v10 = (TESObjectREFR *)OblivionDynamicCast( /*0x45be27*/
                           form,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                           0);
  if ( v10 ) /*0x45be2e*/
  {
    if ( v7 ) /*0x45be32*/
    {
      if ( sub_45BB30((int)self, (char)v10, arg2, arg3, arg4, v10, (mode & 0xC) != 0) ) /*0x45be40*/
        changeFlags &= 0x7FFFFFF3u; /*0x45be49*/
    }
  }
  v11 = (Actor *)OblivionDynamicCast( /*0x45be60*/
                   form,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v12 = (int *)v11; /*0x45be65*/
  if ( v11 ) /*0x45be6c*/
  {
    sub_5EAE70(v11, (int)v10, (int)form, v26); /*0x45be70*/
    sub_5E9690(v12); /*0x45be77*/
  }
  if ( v10 && !(*(int (__thiscall **)(TESChildCELLVtbl *))v10->member.childCell.GetChildCell)(&v10->member.childCell) ) /*0x45be88*/
  {
    refID = v10->member.super.refID; /*0x45be96*/
    v14 = v10->vtbl->super.GetEditorName((TESForm *)v10); /*0x45be9b*/
    PrintError("Trying to reset object %08X %s, but the reference has no save parent cell.", refID, v14); /*0x45bea4*/
    return v27; /*0x45beb7*/
  }
  if ( !changeFlags ) /*0x45bebf*/
    return v27; /*0x45bebf*/
  if ( !v27 ) /*0x45beca*/
    return v27; /*0x45beca*/
  type = form->member.type; /*0x45bed7*/
  if ( self[1].unknown1C[4] ) /*0x45bed0*/
  {
    if ( (!v10 || TESObjectREFR_IsPersistent(v10)) && type != 0x28 && type != 0x19 ) /*0x45bef4*/
      return v27; /*0x45bef4*/
  }
  v17 = (TESObjectREFR *)OblivionDynamicCast( /*0x45bf09*/
                           form,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v18 = v17; /*0x45bf0e*/
  if ( v17 ) /*0x45bf15*/
  {
    v19 = ((int (__thiscall *)(TESObjectREFR *))v17->vtbl[2].super.Unk_0C)(v17); /*0x45bf21*/
    if ( v19 ) /*0x45bf25*/
    {
      if ( v18->member.niNode ) /*0x45bf27*/
      {
        if ( *(_DWORD *)(v19 + 0x3C) ) /*0x45bf2d*/
          sub_5F0410(v18, (int)self); /*0x45bf35*/
      }
    }
  }
  OverrideFile = TESForm_GetOverrideFile(form, 0xFFFFFFFF); /*0x45bf3e*/
  if ( !OverrideFile /*0x45bf5f*/
    || (ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile), (v22 = ThreadSafeFile) == 0)
    || !TESFile::FindForm(ThreadSafeFile, form) )
  {
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45c00e*/
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      "Form could not be found in file during ResetObject() call.\n");
    return v27; /*0x45c010*/
  }
  unk_B33A9C = 0; /*0x45bf6c*/
  if ( (unsigned int)form->member.type - 0x31 <= 2 ) /*0x45bf80*/
  {
    if ( v10 ) /*0x45bf84*/
    {
      if ( !v18 || (v23 = (TESForm *)sub_5E1F60(v18), (unk_B33A9C = v23) == 0) ) /*0x45bf98*/
        unk_B33A9C = (TESForm *)(*(int (__thiscall **)(TESChildCELLVtbl *))v10->member.childCell.GetChildCell)(&v10->member.childCell); /*0x45bfa4*/
    }
  }
  v24 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x45bfb6*/
  v25 = *(_BYTE *)(v24 + 0x184); /*0x45bfb9*/
  *(_BYTE *)(v24 + 0x184) = 1; /*0x45bfc3*/
  self->flags |= 4u; /*0x45bfca*/
  TESDataHandler_LoadFormRecord((void *)MEMORY[0xB33A98], v22, 0); /*0x45bfd7*/
  self->flags &= ~4u; /*0x45bfdc*/
  *(_BYTE *)(v24 + 0x184) = v25; /*0x45bfe5*/
  unk_B33A9C = 0; /*0x45bfed*/
  return v27; /*0x45beb0*/
}
