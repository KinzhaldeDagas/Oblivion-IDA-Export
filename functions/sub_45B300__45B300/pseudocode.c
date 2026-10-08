// Verified: TES_constr calls this initializer. Constructs the currentChangesMap at manager+0 and the interior/exterior maps; incomingChangesMap at +4 is populated per LoadGame and promoted by TESSaveLoadGame_ReconcileExistingChanges.
TESSaveLoadGame_SerializationView *__thiscall TESSaveLoadGame_Initialize(TESSaveLoadGame_SerializationView *self)
{
  int v2; // edx
  ChangesMap *v3; // eax
  ChangesMap *v4; // eax
  InteriorCellNewReferencesMap *v5; // eax
  InteriorCellNewReferencesMap *v6; // eax
  ExteriorCellNewReferencesMap *v7; // eax
  ExteriorCellNewReferencesMap *v8; // eax
  ExteriorCellNewReferencesMap *v9; // eax
  ExteriorCellNewReferencesMap *v10; // eax
  NumericIDBufferMap *v11; // eax
  NumericIDBufferMap *v12; // eax
  NumericIDBufferMap *v13; // eax
  NumericIDBufferMap *v14; // eax
  NumericIDBufferMap *v15; // eax
  NumericIDBufferMap *v16; // eax
  NumericIDBufferMap *v17; // eax
  NumericIDBufferMap *v18; // eax
  NiTLargeArrayUInt32 *v19; // eax
  NiTLargeArrayUInt32 *v20; // edi
  bool v21; // zf
  NiTLargeArrayUInt32 *v22; // eax
  NiTLargeArrayUInt32 *v23; // edi
  NiTLargeArrayUInt32 *v25; // [esp+14h] [ebp-10h] BYREF
  int v26; // [esp+20h] [ebp-4h]

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x45b335*/
  self->incomingChangesMap = 0; /*0x45b338*/
  self->interiorNewReferencesMap = 0; /*0x45b33b*/
  self->exteriorNewReferencesMap = 0; /*0x45b33e*/
  self->bufferCursor = 0; /*0x45b341*/
  self->flags = 0; /*0x45b344*/
  *(_DWORD *)self->unknown1C = 0; /*0x45b347*/
  *(_DWORD *)&self->unknown1C[4] = 0; /*0x45b34a*/
  *(_DWORD *)&self->unknown1C[8] = 0; /*0x45b34d*/
  *(_DWORD *)&self->unknown1C[0xC] = 0; /*0x45b350*/
  *(_DWORD *)&self->unknown1C[0x10] = 0; /*0x45b353*/
  self->deferredDeleteList.form = 0; /*0x45b356*/
  self->deferredDeleteList.next = 0; /*0x45b359*/
  *(_DWORD *)self->unknown38 = 0; /*0x45b35c*/
  *(_DWORD *)&self->unknown38[4] = 0; /*0x45b35f*/
  *(_DWORD *)&self->unknown38[8] = 0; /*0x45b362*/
  *(_DWORD *)&self->unknown48[4] = 0; /*0x45b365*/
  *(_DWORD *)&self->unknown48[8] = 0; /*0x45b368*/
  *(_DWORD *)&self->unknown48[0x1C] = 0; /*0x45b36b*/
  *(_DWORD *)&self->unknown48[0x20] = 0; /*0x45b36e*/
  *(_DWORD *)&self->unknown48[0x24] = 0; /*0x45b371*/
  self->unknown48[0x28] = 0; /*0x45b374*/
  self->unknown48[0x29] = 0; /*0x45b377*/
  self->useIrefEncoding = 1; /*0x45b37a*/
  self->currentlyLoadingFormHeader = 0; /*0x45b37e*/
  self->currentlySavingFormHeader = 0; /*0x45b384*/
  *((_DWORD *)self + 0x22) = 0; /*0x45b38a*/
  *((_DWORD *)self + 0x23) = 0; /*0x45b390*/
  *((_DWORD *)self + 0x24) = 0; /*0x45b396*/
  *((_DWORD *)self + 0x29) = 0; /*0x45b39c*/
  *((_BYTE *)self + 0xA8) = 0; /*0x45b3a2*/
  *((_BYTE *)self + 0xA9) = 0; /*0x45b3a8*/
  *((_BYTE *)self + 0xAA) = 0; /*0x45b3ae*/
  *((_BYTE *)self + 0xAB) = 0; /*0x45b3b4*/
  *((_DWORD *)self + 0x2B) = 0; /*0x45b3ba*/
  *((_DWORD *)self + 0x70) = 0; /*0x45b3c0*/
  g_TESSaveLoadGame = self; /*0x45b3c8*/
  *(_BYTE *)(v2 + 0x185) = 0; /*0x45b3ce*/
  v3 = (ChangesMap *)FormHeapAlloc(0x10u); /*0x45b3d4*/
  v25 = (NiTLargeArrayUInt32 *)v3; /*0x45b3dc*/
  v26 = 0; /*0x45b3e2*/
  if ( v3 ) /*0x45b3e6*/
    v4 = ChangesMap::ChangesMap(v3); /*0x45b3ea*/
  else
    v4 = 0; /*0x45b3f1*/
  self->currentChangesMap = v4; /*0x45b3fc*/
  v5 = (InteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x45b3fe*/
  v25 = (NiTLargeArrayUInt32 *)v5; /*0x45b406*/
  v26 = 1; /*0x45b40c*/
  if ( v5 ) /*0x45b414*/
    v6 = InteriorCellNewReferencesMap_ctor(v5); /*0x45b418*/
  else
    v6 = 0; /*0x45b41f*/
  self->interiorNewReferencesMap = v6; /*0x45b427*/
  v7 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x45b42a*/
  v25 = (NiTLargeArrayUInt32 *)v7; /*0x45b432*/
  v26 = 2; /*0x45b438*/
  if ( v7 ) /*0x45b440*/
    v8 = ExteriorCellNewReferencesMap_ctor(v7); /*0x45b444*/
  else
    v8 = 0; /*0x45b44b*/
  self->exteriorNewReferencesMap = v8; /*0x45b453*/
  v9 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x45b456*/
  v25 = (NiTLargeArrayUInt32 *)v9; /*0x45b45e*/
  v26 = 3; /*0x45b464*/
  if ( v9 ) /*0x45b46c*/
    v10 = ExteriorCellNewReferencesMap_ctor(v9); /*0x45b470*/
  else
    v10 = 0; /*0x45b477*/
  self->exteriorCellChangesMap = v10; /*0x45b47f*/
  v11 = (NumericIDBufferMap *)FormHeapAlloc(0x10u); /*0x45b482*/
  v25 = (NiTLargeArrayUInt32 *)v11; /*0x45b48a*/
  v26 = 4; /*0x45b490*/
  if ( v11 ) /*0x45b498*/
    v12 = NumericIDBufferMap::NumericIDBufferMap(v11); /*0x45b49c*/
  else
    v12 = 0; /*0x45b4a3*/
  *(_DWORD *)&self->unknown48[0xC] = v12; /*0x45b4ab*/
  v13 = (NumericIDBufferMap *)FormHeapAlloc(0x10u); /*0x45b4ae*/
  v25 = (NiTLargeArrayUInt32 *)v13; /*0x45b4b6*/
  v26 = 5; /*0x45b4bc*/
  if ( v13 ) /*0x45b4c4*/
    v14 = NumericIDBufferMap::NumericIDBufferMap(v13); /*0x45b4c8*/
  else
    v14 = 0; /*0x45b4cf*/
  *(_DWORD *)&self->unknown48[0x10] = v14; /*0x45b4d7*/
  v15 = (NumericIDBufferMap *)FormHeapAlloc(0x10u); /*0x45b4da*/
  v25 = (NiTLargeArrayUInt32 *)v15; /*0x45b4e2*/
  v26 = 6; /*0x45b4e8*/
  if ( v15 ) /*0x45b4f0*/
    v16 = NumericIDBufferMap::NumericIDBufferMap(v15); /*0x45b4f4*/
  else
    v16 = 0; /*0x45b4fb*/
  *(_DWORD *)&self->unknown48[0x14] = v16; /*0x45b503*/
  v17 = (NumericIDBufferMap *)FormHeapAlloc(0x10u); /*0x45b506*/
  v25 = (NiTLargeArrayUInt32 *)v17; /*0x45b50e*/
  v26 = 7; /*0x45b514*/
  if ( v17 ) /*0x45b51c*/
    v18 = NumericIDBufferMap::NumericIDBufferMap(v17); /*0x45b520*/
  else
    v18 = 0; /*0x45b527*/
  *(_DWORD *)&self->unknown48[0x18] = v18; /*0x45b52f*/
  v19 = (NiTLargeArrayUInt32 *)FormHeapAlloc(0x18u); /*0x45b532*/
  v20 = v19; /*0x45b537*/
  v25 = v19; /*0x45b53c*/
  v26 = 8; /*0x45b542*/
  if ( v19 ) /*0x45b54a*/
  {
    v19->capacity = 0x64; /*0x45b553*/
    v19->vtable = &NiTLargeArray<unsigned int>::`vftable'; /*0x45b560*/
    v19->growBy = 0x32; /*0x45b566*/
    v19->count = 0; /*0x45b56d*/
    v19->nonzeroCount = 0; /*0x45b570*/
    v19->data = (unsigned int *)FormHeapAlloc(0x190u); /*0x45b580*/
  }
  else
  {
    v20 = 0; /*0x45b585*/
  }
  self->irefTable = v20; /*0x45b587*/
  v21 = v20->capacity == 0; /*0x45b58a*/
  v26 = 0xFFFFFFFF; /*0x45b58d*/
  v25 = 0; /*0x45b591*/
  if ( v21 ) /*0x45b595*/
    NiTLargeArray_Resize32((unsigned int *)v20, v20->growBy); /*0x45b59d*/
  sub_446C50(v20, 0, &v25); /*0x45b5aa*/
  v22 = (NiTLargeArrayUInt32 *)FormHeapAlloc(0x18u); /*0x45b5b1*/
  v23 = v22; /*0x45b5b6*/
  v25 = v22; /*0x45b5bb*/
  v26 = 9; /*0x45b5c1*/
  if ( v22 ) /*0x45b5c9*/
  {
    v22->capacity = 5; /*0x45b5d2*/
    v22->vtable = &NiTLargeArray<unsigned int>::`vftable'; /*0x45b5df*/
    v22->growBy = 1; /*0x45b5e5*/
    v22->count = 0; /*0x45b5ec*/
    v22->nonzeroCount = 0; /*0x45b5ef*/
    v22->data = (unsigned int *)FormHeapAlloc(0x14u); /*0x45b5ff*/
  }
  else
  {
    v23 = 0; /*0x45b604*/
  }
  self->worldspaceIDArray = v23; /*0x45b606*/
  v21 = v23->capacity == 0; /*0x45b609*/
  v26 = 0xFFFFFFFF; /*0x45b60c*/
  v25 = 0; /*0x45b610*/
  if ( v21 ) /*0x45b614*/
    NiTLargeArray_Resize32((unsigned int *)v23, v23->growBy); /*0x45b61c*/
  sub_446C50(v23, 0, &v25); /*0x45b629*/
  *((_DWORD *)self + 0x25) = 0; /*0x45b630*/
  *((_DWORD *)self + 0x26) = 0; /*0x45b636*/
  *((_DWORD *)self + 0x27) = 0; /*0x45b63c*/
  *((_DWORD *)self + 0x28) = 0; /*0x45b642*/
  self->unknown48[0x29] = 0x7D; /*0x45b64a*/
  self->currentVersion = 0x7D; /*0x45b64d*/
  self->unknown48[0x28] = 0; /*0x45b650*/
  return self; /*0x45b655*/
}
