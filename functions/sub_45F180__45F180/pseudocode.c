// Verified: consumes form plus its 8-byte ChangeData entry. Uses form-type-specific masks (0xFFF generally, 0x7FF for REFR), deletes disallowed created forms, calls SaveLoad_NormalizeFormChangeFlags, invokes the form change callback, reloads the winning override through TESSaveLoadGame_ResetObject, runs DoPostFixup, then uses 45C020 to reconnect process/cell state. Called during TESSaveLoadGame_ReconcileExistingChanges (464790). Probable Fallout comparison: BGSSaveLoadGame::RevertCurrentChanges; implementation and flag policy differ.
void __userpurge TESSaveLoadGame_ResetFormForLoad(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        double arg4@<st0>,
        TESForm *form,
        OblivionChangeData *savedData)
{
  unsigned int changeFlags; // ebp
  unsigned int v9; // ebx
  signed int v10; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  char forma; // [esp+14h] [ebp+4h]
  TESChildCELL *v13; // [esp+18h] [ebp+8h]
  TESChildCELL *mainThreadID; // [esp+18h] [ebp+8h]

  changeFlags = savedData->changeFlags; /*0x45f186*/
  v9 = savedData->changeFlags & 0xFFF; /*0x45f1a1*/
  if ( OblivionDynamicCast( /*0x45f1a7*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0) )
  {
    v9 = changeFlags & 0x7FF; /*0x45f1b3*/
  }
  if ( v9 && TESDataHandler_IsFormIDCreated_(form->member.refID) ) /*0x45f1c7*/
    goto LABEL_5; /*0x45f1ce*/
  v10 = SaveLoad_NormalizeFormChangeFlags(form, changeFlags); /*0x45f1e8*/
  self->resetSelector = 0x1FFFF000; /*0x45f1ea*/
  ((void (__thiscall *)(TESForm *, int))form->vtbl->Unk_18)(form, v10 & 0x1FFFF080); /*0x45f1fe*/
  if ( !v9 ) /*0x45f202*/
    goto LABEL_15; /*0x45f202*/
  TESSaveLoadGame_ResetObject(self, arg2, arg3, arg4, form, v9, 0); /*0x45f20e*/
  if ( v10 < 0 ) /*0x45f215*/
  {
    v13 = (TESChildCELL *)OblivionDynamicCast( /*0x45f230*/
                            form,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    if ( !Shared_GetDwordAtOffset40(v13) /*0x45f24f*/
      || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v13),
          !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0)) )
    {
LABEL_5:
      TESSaveLoadGame_DeleteForm(self, form); /*0x45f1d0*/
      return; /*0x45f1dc*/
    }
  }
  forma = sub_45A500(self); /*0x45f267*/
  if ( form->member.type == kFormType_Cell ) /*0x45f26b*/
  {
    mainThreadID = (TESChildCELL *)MEMORY[0xB33398]->mainThreadID; /*0x45f275*/
    if ( (TESChildCELL *)GetCurrentThreadId() == mainThreadID ) /*0x45f283*/
      self->flags &= ~1u; /*0x45f285*/
    else
      self->flags &= ~0x40000u; /*0x45f28b*/
  }
  form->vtbl->DoPostFixup(form); /*0x45f299*/
  sub_45A530(self, forma); /*0x45f2a2*/
  if ( sub_45C020((int)self, form, v9, 0) ) /*0x45f2ad*/
  {
LABEL_15:
    self->resetSelector = 0x60000000; /*0x45f2b6*/
    ((void (__thiscall *)(TESForm *, int))form->vtbl->Unk_18)(form, v10 & 0x60000000); /*0x45f2cc*/
    sub_45B7A0(form, v10); /*0x45f2d2*/
  }
}
