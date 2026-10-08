// Verified: TES_destr calls at 4468F5 then frees the manager allocation at 4468FB. Destroys ChangesMap and all reference-map objects through scalar-deleting vtables, frees the remap table and buffer, resets/frees both ID arrays, and releases deferred form/list state. Constructor-to-manager-destructor lifecycle established. Fallout has analogous named map clear/destructor paths, but no layout was copied.
void __thiscall TESSaveLoadGame_DestroyOwnedState(TESSaveLoadGame_SerializationView *self)
{
  ChangesMap *currentChangesMap; // ecx
  InteriorCellNewReferencesMap *interiorNewReferencesMap; // ecx
  ExteriorCellNewReferencesMap *exteriorNewReferencesMap; // ecx
  ExteriorCellNewReferencesMap *exteriorCellChangesMap; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  NiTLargeArrayUInt32 *irefTable; // eax
  unsigned int i; // ecx
  NiTLargeArrayUInt32 *v12; // ecx
  NiTLargeArrayUInt32 *worldspaceIDArray; // eax
  unsigned int j; // ecx
  NiTLargeArrayUInt32 *v15; // ecx
  int *v16; // eax
  void (__thiscall ***v17)(_DWORD, int); // edi
  int v18; // edi
  int v19; // edi

  currentChangesMap = self->currentChangesMap; /*0x453254*/
  if ( currentChangesMap ) /*0x45325b*/
    currentChangesMap->vtbl->destroy(currentChangesMap, 1u); /*0x453263*/
  interiorNewReferencesMap = self->interiorNewReferencesMap; /*0x453265*/
  if ( interiorNewReferencesMap ) /*0x45326a*/
    ((void (__thiscall *)(InteriorCellNewReferencesMap *, int))interiorNewReferencesMap->vtable->scalarDeletingDestructor)( /*0x453272*/
      interiorNewReferencesMap,
      1);
  exteriorNewReferencesMap = self->exteriorNewReferencesMap; /*0x453274*/
  if ( exteriorNewReferencesMap ) /*0x453279*/
    ((void (__thiscall *)(ExteriorCellNewReferencesMap *, int))exteriorNewReferencesMap->vtable->scalarDeletingDestructor)( /*0x453281*/
      exteriorNewReferencesMap,
      1);
  exteriorCellChangesMap = self->exteriorCellChangesMap; /*0x453283*/
  if ( exteriorCellChangesMap ) /*0x453288*/
    ((void (__thiscall *)(ExteriorCellNewReferencesMap *, int))exteriorCellChangesMap->vtable->scalarDeletingDestructor)( /*0x453290*/
      exteriorCellChangesMap,
      1);
  if ( *(_DWORD *)&self->unknown48[4] ) /*0x453292*/
    FormHeapFree(*(_DWORD *)&self->unknown48[4]); /*0x45329a*/
  v6 = *(void (__thiscall ****)(_DWORD, int))&self->unknown48[0xC]; /*0x4532a2*/
  if ( v6 ) /*0x4532a7*/
    (**v6)(v6, 1); /*0x4532af*/
  v7 = *(void (__thiscall ****)(_DWORD, int))&self->unknown48[0x10]; /*0x4532b1*/
  if ( v7 ) /*0x4532b6*/
    (**v7)(v7, 1); /*0x4532be*/
  v8 = *(void (__thiscall ****)(_DWORD, int))&self->unknown48[0x14]; /*0x4532c0*/
  if ( v8 ) /*0x4532c5*/
    (**v8)(v8, 1); /*0x4532cd*/
  v9 = *(void (__thiscall ****)(_DWORD, int))&self->unknown48[0x18]; /*0x4532cf*/
  if ( v9 ) /*0x4532d4*/
    (**v9)(v9, 1); /*0x4532dc*/
  irefTable = self->irefTable; /*0x4532de*/
  if ( irefTable ) /*0x4532e3*/
  {
    for ( i = 0; i < irefTable->count; ++i ) /*0x4532e7*/
      irefTable->data[i] = 0; /*0x4532f3*/
    irefTable->count = 0; /*0x4532fe*/
    irefTable->nonzeroCount = 0; /*0x453301*/
    v12 = self->irefTable; /*0x453304*/
    if ( v12 ) /*0x453309*/
      (*(void (__thiscall **)(NiTLargeArrayUInt32 *, int))v12->vtable)(v12, 1); /*0x453311*/
  }
  worldspaceIDArray = self->worldspaceIDArray; /*0x453313*/
  if ( worldspaceIDArray ) /*0x453318*/
  {
    for ( j = 0; j < worldspaceIDArray->count; ++j ) /*0x45331c*/
      worldspaceIDArray->data[j] = 0; /*0x453324*/
    worldspaceIDArray->count = 0; /*0x45332f*/
    worldspaceIDArray->nonzeroCount = 0; /*0x453332*/
    v15 = self->worldspaceIDArray; /*0x453335*/
    if ( v15 ) /*0x45333a*/
      (*(void (__thiscall **)(NiTLargeArrayUInt32 *, int))v15->vtable)(v15, 1); /*0x453342*/
  }
  if ( *((_DWORD *)self + 0x70) ) /*0x453344*/
    MemoryHeap_Free_checked(*((void **)self + 0x70)); /*0x453354*/
  if ( *(_DWORD *)&self->unknown48[0x24] ) /*0x453359*/
  {
    while ( 1 ) /*0x453360*/
    {
      v16 = *(int **)&self->unknown48[0x24]; /*0x453360*/
      if ( !v16[1] && !*v16 ) /*0x453368*/
        break; /*0x453368*/
      v17 = (void (__thiscall ***)(_DWORD, int))*v16; /*0x45336e*/
      BSSimpleList_Remove(*(int **)&self->unknown48[0x24], *v16); /*0x453371*/
      if ( v17 ) /*0x453378*/
        (**v17)(v17, 1); /*0x453382*/
    }
    FormHeapFree(*(_DWORD *)&self->unknown48[0x24]); /*0x453387*/
  }
  if ( *(_DWORD *)&self->unknown1C[8] ) /*0x45338f*/
  {
    do /*0x4533a8*/
    {
      v18 = *(_DWORD *)(*(_DWORD *)&self->unknown1C[8] + 4); /*0x453397*/
      FormHeapFree(*(_DWORD *)&self->unknown1C[8]); /*0x45339b*/
      *(_DWORD *)&self->unknown1C[8] = v18; /*0x4533a5*/
    }
    while ( v18 ); /*0x4533a8*/
  }
  *(_DWORD *)&self->unknown1C[4] = 0; /*0x4533aa*/
  if ( *(_DWORD *)&self->unknown1C[0x10] ) /*0x4533ad*/
  {
    do /*0x4533c6*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&self->unknown1C[0x10] + 4); /*0x4533b5*/
      FormHeapFree(*(_DWORD *)&self->unknown1C[0x10]); /*0x4533b9*/
      *(_DWORD *)&self->unknown1C[0x10] = v19; /*0x4533c3*/
    }
    while ( v19 ); /*0x4533c6*/
  }
  *(_DWORD *)&self->unknown1C[0xC] = 0; /*0x4533c9*/
}
