//
// Verified: identity from literal TESSaveLoadGame::UnloadForm at 463B66 and unload diagnostic; looks up change entry, computes flags/save size, writes 4-byte header and virtual SaveGame payload, then stores buffer+flags in entry at 463D45/463D48. Caller 4F1840 invokes before removing/destroying cell. Probable homolog Fallout 825F02A8. Verified divergence: Oblivion existing-buffer warning continues; Fallout existing-buffer warning returns. Oblivion has no explicit unload-while-loading argument. Header/payload is Oblivion-specific; do not import Fallout BGSSaveFormBuffer layout.
bool __thiscall TESSaveLoadGame_UnloadForm(TESSaveLoadGame_SerializationView *self, TESForm *form)
{
  UInt32 mainThreadID; // edi
  unsigned int v4; // eax
  OblivionChangeData *v6; // ebp
  int v8; // eax
  UInt32 refID; // edx
  unsigned __int8 currentVersion; // cl
  int v11; // ebx
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  TESObjectREFR *v13; // eax
  TESObjectREFR *v14; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFRVtbl *vtbl; // edx
  int v18; // eax
  TESObjectCELL *v19; // eax
  TESObjectCELL *v20; // ebp
  int XCoordinate; // eax
  FreeEntry *v22; // eax
  TESSaveLoadGame_SerializationView *v23; // ecx
  int v24; // edi
  _DWORD *YCoordinate; // [esp-4h] [ebp-30h]
  unsigned __int16 Src; // [esp+10h] [ebp-1Ch] BYREF
  TESForm::FormType Src_2; // [esp+12h] [ebp-1Ah]
  unsigned __int8 Src_3; // [esp+13h] [ebp-19h]
  OblivionChangeData *v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h]
  int v31; // [esp+1Ch] [ebp-10h]
  UInt32 v32; // [esp+20h] [ebp-Ch] BYREF
  TESForm::FormType v33; // [esp+24h] [ebp-8h]
  int v34; // [esp+25h] [ebp-7h]
  unsigned __int8 v35; // [esp+29h] [ebp-3h]
  __int16 formb; // [esp+30h] [ebp+4h]
  unsigned __int16 forma; // [esp+30h] [ebp+4h]

  if ( *(_BYTE *)(MEMORY[0xB33A98] + 0xCD4) ) /*0x463a98*/
    return 0; /*0x463a98*/
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x463ab1*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x463abc*/
    LOBYTE(v4) = self->flags; /*0x463abe*/
  else
    v4 = self->flags >> 0x12; /*0x463ac6*/
  if ( (v4 & 1) != 0 ) /*0x463acd*/
    return 0; /*0x463acd*/
  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x185) ) /*0x463ade*/
    return 0; /*0x463ade*/
  if ( form == (TESForm *)reference ) /*0x463af1*/
    return 0; /*0x463af1*/
  v6 = ChangesMap_FindByForm(self->changesMap, form); /*0x463afb*/
  v29 = v6; /*0x463aff*/
  if ( !v6 ) /*0x463b03*/
    return 0; /*0x463b03*/
  if ( OblivionDynamicCast( /*0x463b14*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicProjectile `RTTI Type Descriptor',
         0) )
  {
    SaveLoadChangesMap_RemoveChanges(self->changesMap, form->member.refID, 1); /*0x463b28*/
    return 0; /*0x463b36*/
  }
  self->unknown48[0x28] = 0; /*0x463b3b*/
  self->unknown48[0x29] = 0x7D; /*0x463b3f*/
  self->currentVersion = 0x7D; /*0x463b42*/
  if ( v6->savedFormBuffer ) /*0x463b45*/
    PrintError("Form %08X is unloading, but it already has a buffer.", form->member.refID); /*0x463b54*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)"TESSaveLoadGame::UnloadForm"); /*0x463b66*/
  v8 = sub_4535A0(form, v6->changeFlags); /*0x463b72*/
  refID = form->member.refID; /*0x463b77*/
  currentVersion = self->currentVersion; /*0x463b7a*/
  v11 = v8; /*0x463b7d*/
  Src_2 = form->member.type; /*0x463b82*/
  v33 = Src_2; /*0x463b86*/
  self->currentlySavingFormHeader = &v32; /*0x463b8e*/
  v32 = refID; /*0x463b94*/
  GetSaveSize = form->vtbl->GetSaveSize; /*0x463b9a*/
  Src_3 = currentVersion; /*0x463b9d*/
  v35 = currentVersion; /*0x463ba1*/
  v34 = v11; /*0x463ba8*/
  formb = GetSaveSize(form, v11); /*0x463bb2*/
  forma = sub_452250(form, v11) + formb; /*0x463bcc*/
  Src = forma; /*0x463bd1*/
  if ( (v11 & 0x80000002) != 0 ) /*0x463bd6*/
  {
    v13 = (TESObjectREFR *)OblivionDynamicCast( /*0x463beb*/
                             form,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
    v14 = v13; /*0x463bf0*/
    if ( v13 ) /*0x463bf7*/
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v13); /*0x463bff*/
      v30 = (int)DwordAtOffset40; /*0x463c06*/
      if ( DwordAtOffset40 && TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x463c0e*/
      {
        sub_452E70((_DWORD *)self->interiorNewReferencesMap, *(int **)(v30 + 0xC), v14->member.super.refID); /*0x463c26*/
      }
      else
      {
        v30 = v14->member.super.refID; /*0x463c32*/
        WorldSpace = TESObjectREFR_GetWorldSpace(v14); /*0x463c36*/
        vtbl = v14->vtbl; /*0x463c3e*/
        v31 = WorldSpace->super.refID; /*0x463c41*/
        v18 = (int)vtbl->GetPos(v14); /*0x463c4d*/
        sub_452F10( /*0x463c71*/
          (_DWORD *)self->exteriorNewReferencesMap,
          v31,
          v30,
          *(float *)v18,
          *(float *)(v18 + 4),
          *(_DWORD *)(v18 + 8));
      }
      if ( v11 < 0 ) /*0x463c78*/
        BSSimpleList_PushFront(&self->unknown1C[4], v14->member.super.refID); /*0x463c81*/
    }
    v19 = (TESObjectCELL *)OblivionDynamicCast( /*0x463c95*/
                             form,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectCELL `RTTI Type Descriptor',
                             0);
    v20 = v19; /*0x463c9a*/
    if ( v19 ) /*0x463ca1*/
    {
      if ( (v11 & 4) != 0 ) /*0x463ca6*/
      {
        v31 = v19->members.super.refID; /*0x463cab*/
        v30 = TESObjectCELL_GetWorldSpace(v19)->super.refID; /*0x463cbb*/
        YCoordinate = (_DWORD *)TESObjectCELL_GetYCoordinate(v20); /*0x463cc4*/
        XCoordinate = TESObjectCELL_GetXCoordinate(v20); /*0x463cc7*/
        sub_452FE0((_DWORD *)self->exteriorCellChangesMap, (_DWORD *)v30, v31, XCoordinate, YCoordinate); /*0x463cda*/
      }
    }
    v6 = v29; /*0x463cdf*/
  }
  v22 = sub_453500(self, (char)v6, forma + 4); /*0x463cf2*/
  v23 = g_TESSaveLoadGame; /*0x463cf7*/
  v31 = (int)v22; /*0x463d04*/
  SaveLoad_SaveData(v23, &Src, 4u); /*0x463d08*/
  SaveLoad_SaveFormModifiedFlags__((unsigned int **)self, form, v11);// Second save-side caller of SaveLoad_SaveFormModifiedFlags?? during TESSaveLoadGame::UnloadForm-style buffering. SavePersistanceFix detours the callee, so this path is covered without a separate patch. /*0x463d11*/
  form->vtbl->SaveGame(form, v11); /*0x463d1e*/
  v24 = v31; /*0x463d24*/
  if ( (unsigned __int8 *)(forma + v31 + 4) != self->bufferCursor ) /*0x463d2f*/
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x463d41*/
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      "SaveGame() call did not properly fill buffer.");
  v6->savedFormBuffer = (unsigned __int8 *)v24; /*0x463d45*/
  v6->changeFlags = v11; /*0x463d48*/
  self->currentlySavingFormHeader = 0; /*0x463d50*/
  self->bufferCursor = 0; /*0x463d56*/
  NiLeaveCriticalSection_0(&unk_B33B80); /*0x463d59*/
  return 1; /*0x463b2f*/
}
