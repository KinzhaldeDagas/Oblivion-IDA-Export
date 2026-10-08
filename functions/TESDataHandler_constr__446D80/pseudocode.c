// Verified constructor store: [TESDataHandler+0xCD1] (activeFileState.retainActiveFile) is initialized to zero at 0x446EF4. A whole-code scan for the direct x86 displacement found this as the only store to +0xCD1; the other direct references are reads in Clear, LoadFormRecord, and LoadFiles. No direct nonzero writer has been identified; any alias/indirect setter remains Unknown.
TESDataHandler *__thiscall TESDataHandler_constr(TESDataHandler *self)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  TESRegionList *v6; // eax
  int v7; // edi
  UInt8 *v8; // ebp
  _DWORD *v9; // eax
  TESRegionDataManager *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+14h] [ebp-14h]

  self->packageList.item = 0; /*0x446daf*/
  self->packageList.next = 0; /*0x446db2*/
  self->worldspaceList.item = 0; /*0x446db5*/
  self->worldspaceList.next = 0; /*0x446db8*/
  self->climateList.item = 0; /*0x446dbb*/
  self->climateList.next = 0; /*0x446dbe*/
  self->weatherList.item = 0; /*0x446dc1*/
  self->weatherList.next = 0; /*0x446dc4*/
  self->enchantmentList.item = 0; /*0x446dc7*/
  self->enchantmentList.next = 0; /*0x446dca*/
  self->spellList.item = 0; /*0x446dcd*/
  self->spellList.next = 0; /*0x446dd0*/
  self->hairList.item = 0; /*0x446dd3*/
  self->hairList.next = 0; /*0x446dd6*/
  self->eyeList.item = 0; /*0x446dd9*/
  self->eyeList.next = 0; /*0x446ddc*/
  self->raceList.item = 0; /*0x446ddf*/
  self->raceList.next = 0; /*0x446de2*/
  self->landTextureList.item = 0; /*0x446de5*/
  self->landTextureList.next = 0; /*0x446de8*/
  self->classList.item = 0; /*0x446deb*/
  self->classList.next = 0; /*0x446dee*/
  self->factionList.item = 0; /*0x446df1*/
  self->factionList.next = 0; /*0x446df4*/
  self->scriptList.item = 0; /*0x446df7*/
  self->scriptList.next = 0; /*0x446dfa*/
  self->soundList.item = 0; /*0x446dfd*/
  self->soundList.next = 0; /*0x446e00*/
  self->listGlobals.item = 0; /*0x446e03*/
  self->listGlobals.next = 0; /*0x446e06*/
  *(_DWORD *)self->unknown7C = 0; /*0x446e09*/
  *(_DWORD *)&self->unknown7C[4] = 0; /*0x446e0c*/
  self->questList.item = 0; /*0x446e12*/
  self->questList.next = 0; /*0x446e18*/
  self->birthsignList.item = 0; /*0x446e1e*/
  self->birthsignList.next = 0; /*0x446e24*/
  self->combatStyleList.item = 0; /*0x446e2a*/
  self->combatStyleList.next = 0; /*0x446e30*/
  self->loadScreenList.item = 0; /*0x446e36*/
  self->loadScreenList.next = 0; /*0x446e3c*/
  self->waterList.item = 0; /*0x446e42*/
  self->waterList.next = 0; /*0x446e48*/
  self->effectShaderList.item = 0; /*0x446e4e*/
  self->effectShaderList.next = 0; /*0x446e54*/
  self->animationObjectList.item = 0; /*0x446e5a*/
  self->animationObjectList.next = 0; /*0x446e60*/
  *(_DWORD *)self->activeFileState.unknownBeforeActiveFileState = &NiTLargeArray<TESObjectCELL *>::`vftable'; /*0x446e66*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[8] = 0; /*0x446e70*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x14] = 1; /*0x446e76*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC] = 0; /*0x446e80*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x10] = 0; /*0x446e86*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[4] = 0; /*0x446e8c*/
  ArrayConstructor( /*0x446eab*/
    (char *)&self->activeFileState.unknownBeforeActiveFileState[0x18],
    0x60u,
    0x15,
    (void (__thiscall *)(char *))TESSkill::TESSkill,
    (void (__thiscall *)(void *))TESSkill::~TESSkill);
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x446ebd*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x7F8] = 0; /*0x446ec0*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x7FC] = 0; /*0x446ec6*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x808] = 0; /*0x446ecc*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x80C] = 0; /*0x446ed2*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x800] = 0x800; /*0x446ed8*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x810] = 0; /*0x446ee2*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x804] = 0; /*0x446ee8*/
  self->activeFileState.unknownBeforeActiveFileState[0xC10] = 0; /*0x446eee*/
  self->activeFileState.retainActiveFile = 0; /*0x446ef4*/
  *(_BYTE *)(v2 + 0x184) = 0; /*0x446efa*/
  self->activeFileState.unknownAfterActiveFileState[0] = 0; /*0x446f05*/
  self->activeFileState.unknownAfterActiveFileState[1] = 0; /*0x446f0b*/
  self->activeFileState.unknownAfterActiveFileState[2] = 0; /*0x446f11*/
  self->activeFileState.unknownAfterActiveFileState[3] = 1; /*0x446f17*/
  _memset((int)&self->activeFileState.unknownBeforeActiveFileState[0x814], 0, 0x3FCu); /*0x446f2b*/
  v3 = (_DWORD *)FormHeapAlloc(0x10u); /*0x446f32*/
  if ( v3 ) /*0x446f45*/
    v4 = TESObjectListHead_constr(v3, 1); /*0x446f4b*/
  else
    v4 = 0; /*0x446f52*/
  self->objectList = v4; /*0x446f5b*/
  v5 = (_DWORD *)FormHeapAlloc(0x10u); /*0x446f5d*/
  if ( v5 ) /*0x446f70*/
    v6 = (TESRegionList *)TESRegionList_constr(v5, 1); /*0x446f76*/
  else
    v6 = 0; /*0x446f7d*/
  self->regionListOwner = v6; /*0x446f84*/
  self->containerExtraData = 0; /*0x446f8a*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x14] = 0x64; /*0x446f90*/
  v7 = 0x3D; /*0x446f9a*/
  v8 = &self->activeFileState.unknownBeforeActiveFileState[0x44]; /*0x446f9f*/
  v14 = 0x15; /*0x446fa5*/
  do /*0x446fd1*/
  {
    if ( v7 < 0x5A ) /*0x446fb3*/
      TESForm_SetFormID((TESForm *)(v8 + 0xFFFFFFD4), v7, 1); /*0x446fbb*/
    *(_DWORD *)v8 = v7 - 0x31; /*0x446fc3*/
    ++v7; /*0x446fc6*/
    v8 += 0x60; /*0x446fc9*/
    --v14; /*0x446fcc*/
  }
  while ( v14 ); /*0x446fd1*/
  v9 = (_DWORD *)FormHeapAlloc(8u); /*0x446fd5*/
  if ( v9 ) /*0x446fe8*/
    v10 = (TESRegionDataManager *)TESRegionDataManager_constr(v9); /*0x446fec*/
  else
    v10 = 0; /*0x446ff3*/
  self->regionDataManager = v10; /*0x446ffc*/
  v11 = (_DWORD *)FormHeapAlloc(0x14u); /*0x447002*/
  if ( v11 ) /*0x447015*/
    v12 = sub_521950(v11); /*0x447019*/
  else
    v12 = 0; /*0x447020*/
  dword_B361CC[0x3D] = (int)v12; /*0x447022*/
  self->activeFileState.unknownAfterActiveFileState[4] = 0; /*0x447027*/
  return self; /*0x44702f*/
}
