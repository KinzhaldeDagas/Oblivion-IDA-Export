// Verified reader of activeFileState.retainActiveFile (+0xCD1): when zero, cleanup destroys and clears the stored active TESFile; when set, that file is retained. The only direct writer located so far is constructor initialization to zero; runtime setter remains Unknown.
int __thiscall TESDataHandler_Clear(TESDataHandler *self)
{
  unsigned int i; // eax
  TES *v3; // ecx
  int v4; // edi
  UInt8 *v5; // ebp
  TESForm *j; // edi
  OblivionTESFormListNode *next; // eax
  TESForm *k; // edi
  OblivionTESFormListNode *v9; // eax
  TESForm *m; // edi
  OblivionTESFormListNode *v11; // eax
  TESForm *n; // edi
  OblivionTESFormListNode *v13; // eax
  TESForm *ii; // edi
  OblivionTESFormListNode *v15; // eax
  TESForm *jj; // edi
  OblivionTESFormListNode *v17; // eax
  TESForm *kk; // edi
  OblivionTESFormListNode *v19; // eax
  TESForm *mm; // edi
  OblivionTESFormListNode *v21; // eax
  TESGlobal *nn; // edi
  OblivionTESGlobalListNode *v23; // eax
  TESForm *i1; // edi
  OblivionTESFormListNode *v25; // eax
  int i2; // edi
  _DWORD *v27; // eax
  int v28; // ebp
  int i3; // edi
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  bool v33; // zf
  _DWORD *v34; // eax
  TESForm *i4; // edi
  OblivionTESFormListNode *v36; // eax
  TESForm *i5; // edi
  OblivionTESFormListNode *v38; // eax
  TESForm *i6; // edi
  OblivionTESFormListNode *v40; // eax
  TESForm *i7; // edi
  OblivionTESFormListNode *v42; // eax
  TESForm *i8; // edi
  OblivionTESFormListNode *v44; // eax
  TESForm *i9; // edi
  OblivionTESFormListNode *v46; // eax
  TESForm *i10; // edi
  OblivionTESFormListNode *v48; // eax
  TESForm *i11; // edi
  OblivionTESFormListNode *v50; // eax
  TESForm *i12; // edi
  OblivionTESFormListNode *v52; // eax
  TESForm *i13; // edi
  OblivionTESFormListNode *v54; // eax
  TESForm *i14; // edi
  OblivionTESFormListNode *v56; // eax
  TESForm *i15; // edi
  OblivionTESFormListNode *v58; // eax
  OSGlobals *v59; // eax
  unsigned int bucketCount; // ecx
  int v61; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v63; // eax
  MEF_U32PointerMapEntry32 *v64; // ebx
  unsigned int key; // eax
  unsigned __int8 *value; // edi
  unsigned int v67; // eax
  char *name; // ebp
  const char *v69; // ebx
  const char *v70; // eax
  int v71; // ebx
  unsigned int v72; // eax
  UInt8 *v73; // ecx
  _DWORD *v74; // ecx
  unsigned int v75; // edi
  unsigned int v77; // [esp+62h] [ebp-24h]
  char v78; // [esp+78h] [ebp-Eh]
  char v79; // [esp+79h] [ebp-Dh]
  MEF_U32PointerMapEntry32 *v80; // [esp+7Ah] [ebp-Ch]
  int v81; // [esp+7Eh] [ebp-8h]
  int a2; // [esp+82h] [ebp-4h]

  self->activeFileState.unknownAfterActiveFileState[2] = 1; /*0x4492e9*/
  sub_447D00(self); /*0x4492f0*/
  for ( i = 0; i < TESForm_ActiveFileFormList.usedEnd; ++i ) /*0x4492f9*/
    TESForm_ActiveFileFormList.data[i] = 0; /*0x449307*/
  v3 = MEMORY[0xB333A0]; /*0x449315*/
  TESForm_ActiveFileFormList.usedEnd = 0; /*0x44931d*/
  TESForm_ActiveFileFormList.occupiedCount = 0; /*0x449323*/
  sub_442630(v3, 0, 0); /*0x449329*/
  MEMORY[0xB333A0]->currentWorldSpace = 0; /*0x449334*/
  v4 = 0; /*0x449337*/
  v5 = &self->activeFileState.unknownBeforeActiveFileState[0x44]; /*0x449339*/
  do /*0x449357*/
  {
    TESSkill_ClearDataAndComponents((TESSkill *)(v5 + 0xFFFFFFD4)); /*0x449343*/
    *(_DWORD *)v5 = v4 + 0xC; /*0x44934b*/
    ++v4; /*0x44934e*/
    v5 += 0x60; /*0x449351*/
  }
  while ( v4 < 0x15 ); /*0x449357*/
  for ( j = self->scriptList.item; j; j = self->scriptList.item ) /*0x44935e*/
  {
    next = self->scriptList.next; /*0x449360*/
    if ( next ) /*0x449365*/
    {
      self->scriptList.next = next->next; /*0x44936a*/
      self->scriptList.item = next->item; /*0x449370*/
      FormHeapFree((unsigned int)next); /*0x449373*/
    }
    else
    {
      self->scriptList.item = 0; /*0x44937d*/
    }
    j->vtbl->Destroy(j, 1); /*0x44938d*/
  }
  for ( k = self->hairList.item; k; k = self->hairList.item ) /*0x44939b*/
  {
    v9 = self->hairList.next; /*0x4493a0*/
    if ( v9 ) /*0x4493a5*/
    {
      self->hairList.next = v9->next; /*0x4493aa*/
      self->hairList.item = v9->item; /*0x4493b0*/
      FormHeapFree((unsigned int)v9); /*0x4493b3*/
    }
    else
    {
      self->hairList.item = 0; /*0x4493bd*/
    }
    k->vtbl->Destroy(k, 1); /*0x4493cd*/
  }
  for ( m = self->eyeList.item; m; m = self->eyeList.item ) /*0x4493db*/
  {
    v11 = self->eyeList.next; /*0x4493e0*/
    if ( v11 ) /*0x4493e5*/
    {
      self->eyeList.next = v11->next; /*0x4493ea*/
      self->eyeList.item = v11->item; /*0x4493f0*/
      FormHeapFree((unsigned int)v11); /*0x4493f3*/
    }
    else
    {
      self->eyeList.item = 0; /*0x4493fd*/
    }
    m->vtbl->Destroy(m, 1); /*0x44940d*/
  }
  for ( n = self->birthsignList.item; n; n = self->birthsignList.item ) /*0x44941e*/
  {
    v13 = self->birthsignList.next; /*0x449420*/
    if ( v13 ) /*0x449428*/
    {
      self->birthsignList.next = v13->next; /*0x44942d*/
      self->birthsignList.item = v13->item; /*0x449436*/
      FormHeapFree((unsigned int)v13); /*0x44943c*/
    }
    else
    {
      self->birthsignList.item = 0; /*0x449446*/
    }
    n->vtbl->Destroy(n, 1); /*0x449459*/
  }
  for ( ii = self->climateList.item; ii; ii = self->climateList.item ) /*0x44946a*/
  {
    v15 = self->climateList.next; /*0x449470*/
    if ( v15 ) /*0x449475*/
    {
      self->climateList.next = v15->next; /*0x44947a*/
      self->climateList.item = v15->item; /*0x449480*/
      FormHeapFree((unsigned int)v15); /*0x449483*/
    }
    else
    {
      self->climateList.item = 0; /*0x44948d*/
    }
    ii->vtbl->Destroy(ii, 1); /*0x44949d*/
  }
  for ( jj = self->weatherList.item; jj; jj = self->weatherList.item ) /*0x4494ab*/
  {
    v17 = self->weatherList.next; /*0x4494b0*/
    if ( v17 ) /*0x4494b5*/
    {
      self->weatherList.next = v17->next; /*0x4494ba*/
      self->weatherList.item = v17->item; /*0x4494c0*/
      FormHeapFree((unsigned int)v17); /*0x4494c3*/
    }
    else
    {
      self->weatherList.item = 0; /*0x4494cd*/
    }
    jj->vtbl->Destroy(jj, 1); /*0x4494dd*/
  }
  for ( kk = self->classList.item; kk; kk = self->classList.item ) /*0x4494eb*/
  {
    v19 = self->classList.next; /*0x4494f0*/
    if ( v19 ) /*0x4494f5*/
    {
      self->classList.next = v19->next; /*0x4494fa*/
      self->classList.item = v19->item; /*0x449500*/
      FormHeapFree((unsigned int)v19); /*0x449503*/
    }
    else
    {
      self->classList.item = 0; /*0x44950d*/
    }
    kk->vtbl->Destroy(kk, 1); /*0x44951d*/
  }
  for ( mm = self->factionList.item; mm; mm = self->factionList.item ) /*0x44952b*/
  {
    v21 = self->factionList.next; /*0x449530*/
    if ( v21 ) /*0x449535*/
    {
      self->factionList.next = v21->next; /*0x44953a*/
      self->factionList.item = v21->item; /*0x449540*/
      FormHeapFree((unsigned int)v21); /*0x449543*/
    }
    else
    {
      self->factionList.item = 0; /*0x44954d*/
    }
    mm->vtbl->Destroy(mm, 1); /*0x44955d*/
  }
  for ( nn = self->listGlobals.item; nn; nn = self->listGlobals.item ) /*0x44956b*/
  {
    v23 = self->listGlobals.next; /*0x449570*/
    if ( v23 ) /*0x449575*/
    {
      self->listGlobals.next = v23->next; /*0x44957a*/
      self->listGlobals.item = v23->item; /*0x449580*/
      FormHeapFree((unsigned int)v23); /*0x449583*/
    }
    else
    {
      self->listGlobals.item = 0; /*0x44958d*/
    }
    nn->vtbl->Destroy((TESForm *)nn, 1); /*0x44959d*/
  }
  for ( i1 = self->questList.item; i1; i1 = self->questList.item ) /*0x4495ae*/
  {
    v25 = self->questList.next; /*0x4495b0*/
    if ( v25 ) /*0x4495b8*/
    {
      self->questList.next = v25->next; /*0x4495bd*/
      self->questList.item = v25->item; /*0x4495c6*/
      FormHeapFree((unsigned int)v25); /*0x4495cc*/
    }
    else
    {
      self->questList.item = 0; /*0x4495d6*/
    }
    i1->vtbl->Destroy(i1, 1); /*0x4495e9*/
  }
  for ( i2 = *(_DWORD *)self->unknown7C; i2; i2 = *(_DWORD *)self->unknown7C ) /*0x4495fa*/
  {
    v27 = *(_DWORD **)&self->unknown7C[4]; /*0x449600*/
    if ( v27 ) /*0x449608*/
    {
      *(_DWORD *)&self->unknown7C[4] = v27[1]; /*0x44960d*/
      *(_DWORD *)self->unknown7C = *v27; /*0x449616*/
      FormHeapFree((unsigned int)v27); /*0x449619*/
    }
    else
    {
      *(_DWORD *)self->unknown7C = 0; /*0x449623*/
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i2 + 0x10))(i2, 1); /*0x449633*/
  }
  ClearStockDialogueTopicPointers();            // TESDataHandler clear invalidates every stock registry runtime TESTopic pointer without changing the fixed FormID/name table. /*0x44963c*/
  MEMORY[0xB333A0]->currentExteriorCell = 0; /*0x449646*/
  v28 = *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC]; /*0x449649*/
  for ( i3 = 0; i3 < v28; ++i3 ) /*0x449653*/
  {
    v30 = *(_DWORD *)(*(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[4] + 4 * i3); /*0x44965b*/
    if ( v30 ) /*0x449660*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 0x10))(v30, 1); /*0x449669*/
  }
  if ( *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[8] ) /*0x449675*/
  {
    if ( *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC] ) /*0x44967d*/
    {
      v31 = 0; /*0x449685*/
      do /*0x4496af*/
      {
        v32 = *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[4]; /*0x449690*/
        v33 = *(_DWORD *)(v32 + 4 * v31) == 0; /*0x449696*/
        v34 = (_DWORD *)(v32 + 4 * v31); /*0x449699*/
        if ( !v33 ) /*0x44969c*/
        {
          *v34 = 0; /*0x44969e*/
          --*(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x10]; /*0x4496a0*/
        }
        ++v31; /*0x4496a6*/
      }
      while ( v31 < *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC] ); /*0x4496af*/
      *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0xC] = 0; /*0x4496b1*/
    }
    v77 = *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[4]; /*0x4496bd*/
    *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[8] = 0; /*0x4496be*/
    *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[4] = 0; /*0x4496c4*/
    FormHeapFree(v77); /*0x4496ca*/
  }
  for ( i4 = self->worldspaceList.item; i4; i4 = self->worldspaceList.item ) /*0x4496d7*/
  {
    v36 = self->worldspaceList.next; /*0x4496e0*/
    if ( v36 ) /*0x4496e5*/
    {
      self->worldspaceList.next = v36->next; /*0x4496ea*/
      self->worldspaceList.item = v36->item; /*0x4496f0*/
      FormHeapFree((unsigned int)v36); /*0x4496f3*/
    }
    else
    {
      self->worldspaceList.item = 0; /*0x4496fd*/
    }
    i4->vtbl->Destroy(i4, 1); /*0x44970d*/
  }
  for ( i5 = self->soundList.item; i5; i5 = self->soundList.item ) /*0x44971b*/
  {
    v38 = self->soundList.next; /*0x449720*/
    if ( v38 ) /*0x449725*/
    {
      self->soundList.next = v38->next; /*0x44972a*/
      self->soundList.item = v38->item; /*0x449730*/
      FormHeapFree((unsigned int)v38); /*0x449733*/
    }
    else
    {
      self->soundList.item = 0; /*0x44973d*/
    }
    i5->vtbl->Destroy(i5, 1); /*0x44974d*/
  }
  for ( i6 = self->landTextureList.item; i6; i6 = self->landTextureList.item ) /*0x44975b*/
  {
    v40 = self->landTextureList.next; /*0x449760*/
    if ( v40 ) /*0x449765*/
    {
      self->landTextureList.next = v40->next; /*0x44976a*/
      self->landTextureList.item = v40->item; /*0x449770*/
      FormHeapFree((unsigned int)v40); /*0x449773*/
    }
    else
    {
      self->landTextureList.item = 0; /*0x44977d*/
    }
    i6->vtbl->Destroy(i6, 1); /*0x44978d*/
  }
  if ( reference ) /*0x449796*/
    reference->vtbl->super.super.super.super.Destroy((TESForm *)reference, 1); /*0x4497a7*/
  reference = 0; /*0x4497a9*/
  for ( i7 = self->raceList.item; i7; i7 = self->raceList.item ) /*0x4497b4*/
  {
    v42 = self->raceList.next; /*0x4497b6*/
    if ( v42 ) /*0x4497bb*/
    {
      self->raceList.next = v42->next; /*0x4497c0*/
      self->raceList.item = v42->item; /*0x4497c6*/
      FormHeapFree((unsigned int)v42); /*0x4497c9*/
    }
    else
    {
      self->raceList.item = 0; /*0x4497d3*/
    }
    i7->vtbl->Destroy(i7, 1); /*0x4497e3*/
  }
  MEMORY[0xB36308] = 0; /*0x4497ec*/
  TESObjectListHead_Clear(self->objectList); /*0x4497f4*/
  for ( i8 = self->spellList.item; i8; i8 = self->spellList.item ) /*0x4497fe*/
  {
    v44 = self->spellList.next; /*0x449800*/
    if ( v44 ) /*0x449805*/
    {
      self->spellList.next = v44->next; /*0x44980a*/
      self->spellList.item = v44->item; /*0x449810*/
      FormHeapFree((unsigned int)v44); /*0x449813*/
    }
    else
    {
      self->spellList.item = 0; /*0x44981d*/
    }
    i8->vtbl->Destroy(i8, 1); /*0x44982d*/
  }
  for ( i9 = self->enchantmentList.item; i9; i9 = self->enchantmentList.item ) /*0x44983b*/
  {
    v46 = self->enchantmentList.next; /*0x449840*/
    if ( v46 ) /*0x449845*/
    {
      self->enchantmentList.next = v46->next; /*0x44984a*/
      self->enchantmentList.item = v46->item; /*0x449850*/
      FormHeapFree((unsigned int)v46); /*0x449853*/
    }
    else
    {
      self->enchantmentList.item = 0; /*0x44985d*/
    }
    i9->vtbl->Destroy(i9, 1); /*0x44986d*/
  }
  for ( i10 = self->packageList.item; i10; i10 = self->packageList.item ) /*0x44987b*/
  {
    v48 = self->packageList.next; /*0x449880*/
    if ( v48 ) /*0x449885*/
    {
      self->packageList.next = v48->next; /*0x44988a*/
      self->packageList.item = v48->item; /*0x449890*/
      FormHeapFree((unsigned int)v48); /*0x449893*/
    }
    else
    {
      self->packageList.item = 0; /*0x44989d*/
    }
    i10->vtbl->Destroy(i10, 1); /*0x4498ad*/
  }
  for ( i11 = self->combatStyleList.item; i11; i11 = self->combatStyleList.item ) /*0x4498be*/
  {
    v50 = self->combatStyleList.next; /*0x4498c0*/
    if ( v50 ) /*0x4498c8*/
    {
      self->combatStyleList.next = v50->next; /*0x4498cd*/
      self->combatStyleList.item = v50->item; /*0x4498d6*/
      FormHeapFree((unsigned int)v50); /*0x4498dc*/
    }
    else
    {
      self->combatStyleList.item = 0; /*0x4498e6*/
    }
    i11->vtbl->Destroy(i11, 1); /*0x4498f9*/
  }
  for ( i12 = self->loadScreenList.item; i12; i12 = self->loadScreenList.item ) /*0x44990d*/
  {
    v52 = self->loadScreenList.next; /*0x449910*/
    if ( v52 ) /*0x449918*/
    {
      self->loadScreenList.next = v52->next; /*0x44991d*/
      self->loadScreenList.item = v52->item; /*0x449926*/
      FormHeapFree((unsigned int)v52); /*0x44992c*/
    }
    else
    {
      self->loadScreenList.item = 0; /*0x449936*/
    }
    i12->vtbl->Destroy(i12, 1); /*0x449949*/
  }
  for ( i13 = self->waterList.item; i13; i13 = self->waterList.item ) /*0x44995d*/
  {
    v54 = self->waterList.next; /*0x449960*/
    if ( v54 ) /*0x449968*/
    {
      self->waterList.next = v54->next; /*0x44996d*/
      self->waterList.item = v54->item; /*0x449976*/
      FormHeapFree((unsigned int)v54); /*0x44997c*/
    }
    else
    {
      self->waterList.item = 0; /*0x449986*/
    }
    i13->vtbl->Destroy(i13, 1); /*0x449999*/
  }
  MEMORY[0xB360AC] = 0; /*0x4499a5*/
  for ( i14 = self->animationObjectList.item; i14; i14 = self->animationObjectList.item ) /*0x4499b3*/
  {
    v56 = self->animationObjectList.next; /*0x4499b5*/
    if ( v56 ) /*0x4499bd*/
    {
      self->animationObjectList.next = v56->next; /*0x4499c2*/
      self->animationObjectList.item = v56->item; /*0x4499cb*/
      FormHeapFree((unsigned int)v56); /*0x4499d1*/
    }
    else
    {
      self->animationObjectList.item = 0; /*0x4499db*/
    }
    i14->vtbl->Destroy(i14, 1); /*0x4499ee*/
  }
  for ( i15 = self->effectShaderList.item; i15; i15 = self->effectShaderList.item ) /*0x449a02*/
  {
    v58 = self->effectShaderList.next; /*0x449a04*/
    if ( v58 ) /*0x449a0c*/
    {
      self->effectShaderList.next = v58->next; /*0x449a11*/
      self->effectShaderList.item = v58->item; /*0x449a1a*/
      FormHeapFree((unsigned int)v58); /*0x449a20*/
    }
    else
    {
      self->effectShaderList.item = 0; /*0x449a2a*/
    }
    i15->vtbl->Destroy(i15, 1); /*0x449a3d*/
  }
  TESRegionList_Clear(self->regionListOwner); /*0x449a4f*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x598] ) /*0x449a54*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&MEMORY[0xB33E90][0x598] + 0x10))( /*0x449a65*/
      *(_DWORD *)&MEMORY[0xB33E90][0x598],
      1);
  v59 = MEMORY[0xB33398]; /*0x449a67*/
  v33 = MEMORY[0xB33398] == 0; /*0x449a6c*/
  *(_DWORD *)&MEMORY[0xB33E90][0x598] = 0; /*0x449a6e*/
  if ( v33 || !v59->unk04 ) /*0x449a76*/
    sub_5217E0((NiTMap_TESCELL *)dword_B361CC[0x3D]); /*0x449a8e*/
  else
    sub_5210A0((NiTMap_TESCELL *)dword_B361CC[0x3D]); /*0x449a81*/
  bucketCount = TESForm_FormIDMap.bucketCount; /*0x449a98*/
  v79 = bDisableWarning_MESSAGES; /*0x449a9e*/
  v61 = 0; /*0x449aa2*/
  bDisableWarning_MESSAGES = 1; /*0x449aa6*/
  v78 = 0; /*0x449aad*/
  if ( bucketCount ) /*0x449ab1*/
  {
    buckets = TESForm_FormIDMap.buckets; /*0x449ab3*/
    while ( !buckets[v61] ) /*0x449ac3*/
    {
      if ( ++v61 >= bucketCount ) /*0x449ace*/
        goto LABEL_144; /*0x449ace*/
    }
    v63 = buckets[v61]; /*0x449b68*/
  }
  else
  {
LABEL_144:
    v63 = 0; /*0x449ad0*/
  }
  v64 = v63; /*0x449ad6*/
  while ( v64 ) /*0x449ad8*/
  {
    key = v64->key; /*0x449ae0*/
    value = (unsigned __int8 *)v64->value; /*0x449ae3*/
    v64 = v64->next; /*0x449ae6*/
    a2 = key; /*0x449aea*/
    if ( !v64 ) /*0x449aee*/
    {
      v67 = (*((int (__thiscall **)(MEF_U32PointerMapLayout32 *, unsigned int))TESForm_FormIDMap.vtable + 1))( /*0x449b07*/
              &TESForm_FormIDMap,
              key)
          + 1;
      if ( v67 < TESForm_FormIDMap.bucketCount ) /*0x449b0c*/
      {
        while ( !TESForm_FormIDMap.buckets[v67] ) /*0x449b19*/
        {
          if ( ++v67 >= TESForm_FormIDMap.bucketCount ) /*0x449b20*/
            goto LABEL_150; /*0x449b20*/
        }
        v64 = TESForm_FormIDMap.buckets[v67]; /*0x449b70*/
        v80 = v64; /*0x449b72*/
        goto LABEL_152; /*0x449b76*/
      }
LABEL_150:
      v64 = 0; /*0x449b22*/
    }
    v80 = v64; /*0x449b24*/
LABEL_152:
    if ( value ) /*0x449b2a*/
    {
      if ( value[4] == 3 ) /*0x449b37*/
      {
        if ( value != (unsigned __int8 *)0xFFFFFFF0 ) /*0x449bd4*/
        {
          if ( *((_DWORD *)value + 5) ) /*0x449bd6*/
          {
            do /*0x449bf4*/
            {
              v71 = *(_DWORD *)(*((_DWORD *)value + 5) + 4); /*0x449be3*/
              FormHeapFree(*((_DWORD *)value + 5)); /*0x449be7*/
              *((_DWORD *)value + 5) = v71; /*0x449bf1*/
            }
            while ( v71 ); /*0x449bf4*/
          }
          v64 = v80; /*0x449bf6*/
          *((_DWORD *)value + 4) = 0; /*0x449bfa*/
        }
        TESForm_SetFormID((TESForm *)value, 0, 1); /*0x449c07*/
      }
      else if ( value[4] <= 0xAu || value[4] > 0xCu ) /*0x449b45*/
      {
        if ( TESForm_GetOverrideFile((TESForm *)value, 0xFFFFFFFF) ) /*0x449b4f*/
          name = TESForm_GetOverrideFile((TESForm *)value, 0xFFFFFFFF)->name; /*0x449b63*/
        else
          name = "UNKNOWN"; /*0x449b78*/
        v69 = *(const char **)(0xC * value[4] + 0xB05E04); /*0x449b89*/
        v81 = *((_DWORD *)value + 3); /*0x449b90*/
        v70 = (const char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)value + 0xD4))(value); /*0x449b9c*/
        PrintError("Form '%s' (%08X) of type %s in file '%s' was not freed.", v70, v81, v69, name); /*0x449bab*/
        NiTMap_SetAt(&TESForm_FormIDMap, a2, 0); /*0x449bbf*/
        v64 = v80; /*0x449bc4*/
        v78 = 1; /*0x449bc8*/
      }
    }
  }
  bDisableWarning_MESSAGES = v79; /*0x449c16*/
  if ( v78 ) /*0x449c24*/
    PrintError("Forms were leaked during ClearData. Check Warnings file for more info."); /*0x449c2b*/
  v72 = 0; /*0x449c33*/
  if ( *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x810] ) /*0x449c35*/
  {
    v73 = &self->activeFileState.unknownBeforeActiveFileState[0x814]; /*0x449c3d*/
    do /*0x449c51*/
    {
      *(_DWORD *)v73 = 0; /*0x449c43*/
      ++v72; /*0x449c45*/
      v73 += 4; /*0x449c48*/
    }
    while ( v72 < *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x810] ); /*0x449c51*/
  }
  v33 = self->activeFileState.retainActiveFile == 0; /*0x449c53*/
  *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x810] = 0; /*0x449c5a*/
  if ( v33 ) /*0x449c60*/
  {
    v74 = *(_DWORD **)&self->activeFileState.unknownBeforeActiveFileState[0x804]; /*0x449c62*/
    if ( v74 ) /*0x449c6a*/
    {
      if ( !self->activeFileState.unknownBeforeActiveFileState[0xC10] ) /*0x449c6c*/
        TESFile_SetIsActive(v74, 0); /*0x449c76*/
      v75 = *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x804]; /*0x449c7b*/
      if ( v75 ) /*0x449c83*/
      {
        TESFile_destr(*(CHAR **)&self->activeFileState.unknownBeforeActiveFileState[0x804]); /*0x449c87*/
        FormHeapFree(v75); /*0x449c8d*/
      }
      *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x804] = 0; /*0x449c95*/
      *(_DWORD *)&self->activeFileState.unknownBeforeActiveFileState[0x800] = 0x800; /*0x449c9b*/
    }
  }
  MEMORY[0xB35EA4] = 0; /*0x449ca6*/
  MEMORY[0xB35EA8] = 0; /*0x449cac*/
  MEMORY[0xB35EAC] = 0; /*0x449cb2*/
  MEMORY[0xB35EB0] = 0; /*0x449cb8*/
  MEMORY[0xB35EB4] = 0; /*0x449cbe*/
  MEMORY[0xB35EB8] = 0; /*0x449cc4*/
  MEMORY[0xB35EBC] = 0; /*0x449cca*/
  MEMORY[0xB35EC0] = 0; /*0x449cd0*/
  MEMORY[0xB35EC4] = 0; /*0x449cd6*/
  MEMORY[0xB35EC8] = 0; /*0x449cdc*/
  MEMORY[0xB35ECC] = 0; /*0x449ce2*/
  MEMORY[0xB35ED0] = 0; /*0x449ce8*/
  MEMORY[0xB35ED4] = 0; /*0x449cee*/
  MEMORY[0xB35ED8] = 0; /*0x449cf4*/
  MEMORY[0xB35EE0] = 0; /*0x449cfa*/
  MEMORY[0xB35EE4] = 0; /*0x449d00*/
  MEMORY[0xB35EDC] = 0; /*0x449d06*/
  self->activeFileState.unknownAfterActiveFileState[2] = 0; /*0x449d0c*/
  return 1; /*0x449ca5*/
}
