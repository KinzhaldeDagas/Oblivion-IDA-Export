void __thiscall BSShaderAccumulator::~BSShaderAccumulator(BSShaderAccumulator *this)
{
  BSTPersistentListPointer *v2; // edi
  int v3; // ebp
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  BSTPersistentListPointer *v7; // edi
  int *v8; // eax
  int v9; // ecx
  BSTPersistentListPointer *v10; // edi
  int *v11; // ecx
  int v12; // eax
  int *v13; // ecx
  int v14; // eax
  int *v15; // eax
  int v16; // ecx
  BSTPersistentListPointer *v17; // edi
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // ebp
  unsigned int v21; // eax
  _DWORD *v22; // edi
  void (__thiscall ***v23)(_DWORD, int); // ecx
  _DWORD *v24; // edi
  _DWORD *v25; // eax
  unsigned int v26; // ebp
  int v27; // eax
  int *v28; // ecx
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // edi
  int v32; // ebp
  unsigned int v33; // edi
  char *v34; // edi
  _DWORD *v35; // ebp
  _DWORD *v36; // eax
  char *v37; // edi
  _DWORD *v38; // ebp
  _DWORD *v39; // eax
  char *v40; // edi
  _DWORD *v41; // ebp
  _DWORD *v42; // eax
  int v43; // edi
  char *v44; // edi
  _DWORD *v45; // ebp
  _DWORD *v46; // eax
  char *v47; // edi
  _DWORD *v48; // ebp
  _DWORD *v49; // eax
  char *v50; // edi
  _DWORD *v51; // ebp
  _DWORD *v52; // eax
  char *v53; // edi
  _DWORD *v54; // ebp
  _DWORD *v55; // eax
  char *v56; // edi
  _DWORD *v57; // ebp
  _DWORD *v58; // eax
  unsigned int v59; // [esp+34h] [ebp-2Ch]
  unsigned int v60; // [esp+4Ch] [ebp-14h]

  *(_DWORD *)this = &BSShaderAccumulator::`vftable'; /*0x7ac2ed*/
  v2 = (BSTPersistentListPointer *)((char *)this + 0x108); /*0x7ac2fb*/
  v3 = 0x1A3; /*0x7ac301*/
  do /*0x7ac323*/
  {
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)v2 + 0xFFFFFFFC)); /*0x7ac30b*/
    v2->tail = (BSTPersistentListPointerNode *)v2->allocatorVtable; /*0x7ac312*/
    v2->allocatorVtable = 0; /*0x7ac315*/
    v2->head = 0; /*0x7ac317*/
    v2->freeHead = 0; /*0x7ac31a*/
    ++v2; /*0x7ac31d*/
    --v3; /*0x7ac320*/
  }
  while ( v3 ); /*0x7ac323*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)this + 0x2200)); /*0x7ac32d*/
  *((_DWORD *)this + 0x883) = *((_DWORD *)this + 0x881); /*0x7ac335*/
  *((_DWORD *)this + 0x881) = 0; /*0x7ac338*/
  *((_DWORD *)this + 0x882) = 0; /*0x7ac33b*/
  *((_DWORD *)this + 0x884) = 0; /*0x7ac33e*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)this + 0x2214)); /*0x7ac349*/
  *((_DWORD *)this + 0x888) = *((_DWORD *)this + 0x886); /*0x7ac351*/
  *((_DWORD *)this + 0x886) = 0; /*0x7ac354*/
  *((_DWORD *)this + 0x887) = 0; /*0x7ac357*/
  *((_DWORD *)this + 0x889) = 0; /*0x7ac35a*/
  while ( *((_DWORD *)this + 0x12) ) /*0x7ac35d*/
  {
    v4 = *((int **)this + 0x10); /*0x7ac365*/
    v5 = *v4; /*0x7ac368*/
    v6 = *v4 == 0; /*0x7ac36a*/
    *((_DWORD *)this + 0x10) = *v4; /*0x7ac36c*/
    if ( v6 ) /*0x7ac36f*/
      *((_DWORD *)this + 0x11) = 0; /*0x7ac376*/
    else
      *(_DWORD *)(v5 + 4) = 0; /*0x7ac371*/
    v7 = (BSTPersistentListPointer *)v4[2]; /*0x7ac37c*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0xF) + 8))((char *)this + 0x3C, v4); /*0x7ac385*/
    --*((_DWORD *)this + 0x12); /*0x7ac387*/
    if ( v7 ) /*0x7ac38d*/
    {
      BSTPersistentList_ReleaseFreeNodesToGlobalPool(v7); /*0x7ac391*/
      v7->freeHead = v7->head; /*0x7ac399*/
      v7->head = 0; /*0x7ac39c*/
      v7->tail = 0; /*0x7ac39f*/
      v7->count = 0; /*0x7ac3a2*/
      v7->allocatorVtable = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac3a6*/
      FormHeapFree((unsigned int)v7); /*0x7ac3ac*/
    }
  }
  *((_DWORD *)this + 0x17) = 0; /*0x7ac3b9*/
  *((_DWORD *)this + 0x18) = 0; /*0x7ac3bc*/
  while ( *((_DWORD *)this + 0x16) ) /*0x7ac3bf*/
  {
    v8 = *((int **)this + 0x14); /*0x7ac3c7*/
    v9 = *v8; /*0x7ac3ca*/
    v6 = *v8 == 0; /*0x7ac3cc*/
    *((_DWORD *)this + 0x14) = *v8; /*0x7ac3ce*/
    if ( v6 ) /*0x7ac3d1*/
      *((_DWORD *)this + 0x15) = 0; /*0x7ac3d8*/
    else
      *(_DWORD *)(v9 + 4) = 0; /*0x7ac3d3*/
    v10 = (BSTPersistentListPointer *)v8[2]; /*0x7ac3de*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x13) + 8))((char *)this + 0x4C, v8); /*0x7ac3e7*/
    --*((_DWORD *)this + 0x16); /*0x7ac3e9*/
    if ( v10 ) /*0x7ac3ef*/
    {
      BSTPersistentList_ReleaseFreeNodesToGlobalPool(v10); /*0x7ac3f3*/
      v10->freeHead = v10->head; /*0x7ac3fb*/
      v10->head = 0; /*0x7ac3fe*/
      v10->tail = 0; /*0x7ac401*/
      v10->count = 0; /*0x7ac404*/
      v10->allocatorVtable = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac408*/
      FormHeapFree((unsigned int)v10); /*0x7ac40e*/
    }
  }
  for ( ; *((_DWORD *)this + 0x898); --*((_DWORD *)this + 0x898) ) /*0x7ac41b*/
  {
    v11 = *((int **)this + 0x896); /*0x7ac430*/
    v12 = *v11; /*0x7ac433*/
    v6 = *v11 == 0; /*0x7ac435*/
    *((_DWORD *)this + 0x896) = *v11; /*0x7ac437*/
    if ( v6 ) /*0x7ac43a*/
      *((_DWORD *)this + 0x897) = 0; /*0x7ac441*/
    else
      *(_DWORD *)(v12 + 4) = 0; /*0x7ac43c*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x895) + 8))((char *)this + 0x2254, v11); /*0x7ac44c*/
  }
  for ( ; *((_DWORD *)this + 0x894); --*((_DWORD *)this + 0x894) ) /*0x7ac45a*/
  {
    v13 = *((int **)this + 0x892); /*0x7ac468*/
    v14 = *v13; /*0x7ac46b*/
    v6 = *v13 == 0; /*0x7ac46d*/
    *((_DWORD *)this + 0x892) = *v13; /*0x7ac46f*/
    if ( v6 ) /*0x7ac472*/
      *((_DWORD *)this + 0x893) = 0; /*0x7ac479*/
    else
      *(_DWORD *)(v14 + 4) = 0; /*0x7ac474*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x891) + 8))((char *)this + 0x2244, v13); /*0x7ac484*/
  }
  *((_DWORD *)this + 0x1D) = 0; /*0x7ac492*/
  while ( *((_DWORD *)this + 0x1C) ) /*0x7ac495*/
  {
    v15 = *((int **)this + 0x1A); /*0x7ac4a0*/
    v16 = *v15; /*0x7ac4a3*/
    v6 = *v15 == 0; /*0x7ac4a5*/
    *((_DWORD *)this + 0x1A) = *v15; /*0x7ac4aa*/
    if ( v6 ) /*0x7ac4ad*/
      *((_DWORD *)this + 0x1B) = 0; /*0x7ac4b4*/
    else
      *(_DWORD *)(v16 + 4) = 0; /*0x7ac4af*/
    v17 = (BSTPersistentListPointer *)v15[2]; /*0x7ac4ba*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x19) + 8))((char *)this + 0x64, v15); /*0x7ac4c3*/
    --*((_DWORD *)this + 0x1C); /*0x7ac4c5*/
    if ( v17 ) /*0x7ac4cb*/
    {
      BSTPersistentList_ReleaseFreeNodesToGlobalPool(v17); /*0x7ac4cf*/
      v17->freeHead = v17->head; /*0x7ac4d7*/
      v17->head = 0; /*0x7ac4df*/
      v17->tail = 0; /*0x7ac4e2*/
      v17->count = 0; /*0x7ac4e5*/
      BSTPersistentList_ReleaseFreeNodesToGlobalPool(v17 + 1); /*0x7ac4e8*/
      v17[1].freeHead = v17[1].head; /*0x7ac4f0*/
      v17[1].head = 0; /*0x7ac4f3*/
      v17[1].tail = 0; /*0x7ac4f6*/
      v17[1].count = 0; /*0x7ac4f9*/
      v17[1].allocatorVtable = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac4fd*/
      v17->allocatorVtable = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac504*/
      FormHeapFree((unsigned int)v17); /*0x7ac50a*/
    }
  }
  v18 = *((_DWORD **)this + 0x1E); /*0x7ac517*/
  if ( v18 ) /*0x7ac51c*/
  {
    BSTPersistentList_ReleaseFreeNodesToGlobalPool(*((BSTPersistentListPointer **)this + 0x1E)); /*0x7ac520*/
    v18[3] = v18[1]; /*0x7ac528*/
    v18[1] = 0; /*0x7ac52b*/
    v18[2] = 0; /*0x7ac52e*/
    v18[4] = 0; /*0x7ac531*/
    v19 = *((_DWORD **)this + 0x1E); /*0x7ac534*/
    if ( v19 ) /*0x7ac539*/
    {
      v59 = *((_DWORD *)this + 0x1E); /*0x7ac53b*/
      *v19 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac53c*/
      FormHeapFree(v59); /*0x7ac542*/
    }
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)this + 0x90)); /*0x7ac552*/
  *((_DWORD *)this + 0x27) = *((_DWORD *)this + 0x25); /*0x7ac55a*/
  *((_DWORD *)this + 0x25) = 0; /*0x7ac55d*/
  *((_DWORD *)this + 0x26) = 0; /*0x7ac560*/
  *((_DWORD *)this + 0x28) = 0; /*0x7ac563*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)this + 0x7C)); /*0x7ac56b*/
  *((_DWORD *)this + 0x22) = *((_DWORD *)this + 0x20); /*0x7ac573*/
  *((_DWORD *)this + 0x20) = 0; /*0x7ac576*/
  *((_DWORD *)this + 0x21) = 0; /*0x7ac579*/
  *((_DWORD *)this + 0x23) = 0; /*0x7ac57c*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((BSTPersistentListPointer *)((char *)this + 0xA4)); /*0x7ac587*/
  *((_DWORD *)this + 0x2C) = *((_DWORD *)this + 0x2A); /*0x7ac58f*/
  *((_DWORD *)this + 0x2A) = 0; /*0x7ac592*/
  *((_DWORD *)this + 0x2B) = 0; /*0x7ac595*/
  *((_DWORD *)this + 0x2D) = 0; /*0x7ac598*/
  v20 = *((_DWORD **)this + 0x875); /*0x7ac59b*/
  while ( v20 ) /*0x7ac5a3*/
  {
    v21 = v20[2]; /*0x7ac5a8*/
    v20 = (_DWORD *)*v20; /*0x7ac5ac*/
    v60 = v21; /*0x7ac5af*/
    if ( v21 ) /*0x7ac5b3*/
    {
      v22 = *(_DWORD **)(v21 + 4); /*0x7ac5b5*/
      if ( v22 ) /*0x7ac5ba*/
      {
        BSTPersistentList_ReleaseFreeNodesToGlobalPool(*(BSTPersistentListPointer **)(v21 + 4)); /*0x7ac5be*/
        v22[3] = v22[1]; /*0x7ac5ca*/
        v22[1] = 0; /*0x7ac5cd*/
        v22[2] = 0; /*0x7ac5d0*/
        v22[4] = 0; /*0x7ac5d3*/
        v23 = *(void (__thiscall ****)(_DWORD, int))(v60 + 4); /*0x7ac5d6*/
        if ( v23 ) /*0x7ac5db*/
          (**v23)(v23, 1); /*0x7ac5e3*/
        v21 = v60; /*0x7ac5e5*/
      }
      FormHeapFree(v21); /*0x7ac5ea*/
    }
  }
  v24 = *((_DWORD **)this + 0x875); /*0x7ac5f6*/
  while ( v24 ) /*0x7ac604*/
  {
    v25 = v24; /*0x7ac609*/
    v24 = (_DWORD *)*v24; /*0x7ac60b*/
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x874) + 8))((char *)this + 0x21D0, v25); /*0x7ac613*/
  }
  *((_DWORD *)this + 0x877) = 0; /*0x7ac619*/
  *((_DWORD *)this + 0x875) = 0; /*0x7ac61c*/
  *((_DWORD *)this + 0x876) = 0; /*0x7ac61f*/
  FormHeapFree(*((_DWORD *)this + 0x87A)); /*0x7ac629*/
  for ( ; *((_DWORD *)this + 0x88E); --*((_DWORD *)this + 0x88E) ) /*0x7ac631*/
  {
    v26 = *(_DWORD *)(*((_DWORD *)this + 0x88C) + 8); /*0x7ac646*/
    if ( v26 ) /*0x7ac64b*/
    {
      v27 = *(_DWORD *)(v26 + 0x14); /*0x7ac64d*/
      if ( v27 ) /*0x7ac652*/
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v27 + 8))(*(_DWORD *)(v26 + 0x14)); /*0x7ac65a*/
        *(_DWORD *)(v26 + 0x14) = 0; /*0x7ac65c*/
      }
      FormHeapFree(v26); /*0x7ac660*/
    }
    v28 = *((int **)this + 0x88C); /*0x7ac668*/
    v29 = *v28; /*0x7ac66b*/
    v6 = *v28 == 0; /*0x7ac66d*/
    *((_DWORD *)this + 0x88C) = *v28; /*0x7ac66f*/
    if ( v6 ) /*0x7ac672*/
      *((_DWORD *)this + 0x88D) = 0; /*0x7ac679*/
    else
      *(_DWORD *)(v29 + 4) = 0; /*0x7ac674*/
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x88B) + 8))((char *)this + 0x222C, v28); /*0x7ac684*/
  }
  v30 = *((_DWORD *)this + 0x88A); /*0x7ac692*/
  if ( v30 ) /*0x7ac69a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x7ac6a0*/
      (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x7ac6b6*/
    *((_DWORD *)this + 0x88A) = 0; /*0x7ac6b8*/
  }
  v31 = (_DWORD *)((char *)this + 0xC8); /*0x7ac6be*/
  v32 = 3; /*0x7ac6c4*/
  do /*0x7ac6e6*/
  {
    if ( *v31 ) /*0x7ac6d0*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v31 + 8))(*v31); /*0x7ac6dc*/
      *v31 = 0; /*0x7ac6de*/
    }
    v31 += 5; /*0x7ac6e0*/
    --v32; /*0x7ac6e3*/
  }
  while ( v32 ); /*0x7ac6e6*/
  v33 = *((_DWORD *)this + 0x899); /*0x7ac6e8*/
  if ( v33 ) /*0x7ac6f0*/
  {
    sub_6C4090(*((unsigned int **)this + 0x899)); /*0x7ac6f4*/
    FormHeapFree(v33); /*0x7ac6fa*/
    *((_DWORD *)this + 0x899) = 0; /*0x7ac702*/
  }
  v34 = (char *)this + 0x2254; /*0x7ac708*/
  *((_DWORD *)this + 0x895) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac712*/
  v35 = *((_DWORD **)this + 0x896); /*0x7ac718*/
  while ( v35 ) /*0x7ac722*/
  {
    v36 = v35; /*0x7ac726*/
    v35 = (_DWORD *)*v35; /*0x7ac728*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v34 + 8))((char *)this + 0x2254, v36); /*0x7ac731*/
  }
  *((_DWORD *)this + 0x898) = 0; /*0x7ac737*/
  *((_DWORD *)this + 0x896) = 0; /*0x7ac73a*/
  *((_DWORD *)this + 0x897) = 0; /*0x7ac73d*/
  *(_DWORD *)v34 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac740*/
  v37 = (char *)this + 0x2244; /*0x7ac746*/
  *((_DWORD *)this + 0x891) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac750*/
  v38 = *((_DWORD **)this + 0x892); /*0x7ac756*/
  while ( v38 ) /*0x7ac760*/
  {
    v39 = v38; /*0x7ac764*/
    v38 = (_DWORD *)*v38; /*0x7ac766*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v37 + 8))((char *)this + 0x2244, v39); /*0x7ac76f*/
  }
  *((_DWORD *)this + 0x894) = 0; /*0x7ac775*/
  *((_DWORD *)this + 0x892) = 0; /*0x7ac778*/
  *((_DWORD *)this + 0x893) = 0; /*0x7ac77b*/
  *(_DWORD *)v37 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac77e*/
  v40 = (char *)this + 0x222C; /*0x7ac784*/
  *((_DWORD *)this + 0x88B) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable'; /*0x7ac78e*/
  v41 = *((_DWORD **)this + 0x88C); /*0x7ac794*/
  while ( v41 ) /*0x7ac79e*/
  {
    v42 = v41; /*0x7ac7a2*/
    v41 = (_DWORD *)*v41; /*0x7ac7a4*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v40 + 8))((char *)this + 0x222C, v42); /*0x7ac7ad*/
  }
  *((_DWORD *)this + 0x88E) = 0; /*0x7ac7b3*/
  *((_DWORD *)this + 0x88C) = 0; /*0x7ac7b6*/
  *((_DWORD *)this + 0x88D) = 0; /*0x7ac7b9*/
  *(_DWORD *)v40 = &NiTListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable'; /*0x7ac7bc*/
  v43 = *((_DWORD *)this + 0x88A); /*0x7ac7c2*/
  if ( v43 ) /*0x7ac7cf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v43 + 4)) ) /*0x7ac7d5*/
      (**(void (__thiscall ***)(int, int))v43)(v43, 1); /*0x7ac7eb*/
  }
  v44 = (char *)this + 0x21D0; /*0x7ac7ed*/
  *((_DWORD *)this + 0x885) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac7f3*/
  *((_DWORD *)this + 0x880) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac7fd*/
  *((_DWORD *)this + 0x87B) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ac807*/
  *((_DWORD *)this + 0x874) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7ac815*/
  v45 = *((_DWORD **)this + 0x875); /*0x7ac81b*/
  while ( v45 ) /*0x7ac825*/
  {
    v46 = v45; /*0x7ac829*/
    v45 = (_DWORD *)*v45; /*0x7ac82b*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v44 + 8))((char *)this + 0x21D0, v46); /*0x7ac834*/
  }
  *((_DWORD *)this + 0x877) = 0; /*0x7ac83a*/
  *((_DWORD *)this + 0x875) = 0; /*0x7ac83d*/
  *((_DWORD *)this + 0x876) = 0; /*0x7ac840*/
  *(_DWORD *)v44 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7ac843*/
  v47 = (char *)this + 0x21C0; /*0x7ac849*/
  *((_DWORD *)this + 0x870) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac853*/
  v48 = *((_DWORD **)this + 0x871); /*0x7ac859*/
  while ( v48 ) /*0x7ac863*/
  {
    v49 = v48; /*0x7ac867*/
    v48 = (_DWORD *)*v48; /*0x7ac869*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v47 + 8))((char *)this + 0x21C0, v49); /*0x7ac872*/
  }
  *((_DWORD *)this + 0x873) = 0; /*0x7ac88b*/
  *((_DWORD *)this + 0x871) = 0; /*0x7ac88e*/
  *((_DWORD *)this + 0x872) = 0; /*0x7ac891*/
  *(_DWORD *)v47 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac894*/
  _LN21((char *)this + 0x104, 0x14u, 0x1A3, (void (__thiscall *)(void *))BSTPersistentRenderPassList_Destructor); /*0x7ac89f*/
  v50 = (char *)this + 0x64; /*0x7ac8a4*/
  *((_DWORD *)this + 0x29) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac8a7*/
  *((_DWORD *)this + 0x24) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac8b1*/
  *((_DWORD *)this + 0x1F) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ac8bb*/
  *((_DWORD *)this + 0x19) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7ac8c6*/
  v51 = *((_DWORD **)this + 0x1A); /*0x7ac8cc*/
  while ( v51 ) /*0x7ac8d6*/
  {
    v52 = v51; /*0x7ac8da*/
    v51 = (_DWORD *)*v51; /*0x7ac8dc*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v50 + 8))((char *)this + 0x64, v52); /*0x7ac8e5*/
  }
  *((_DWORD *)this + 0x1C) = 0; /*0x7ac8eb*/
  *((_DWORD *)this + 0x1A) = 0; /*0x7ac8ee*/
  *((_DWORD *)this + 0x1B) = 0; /*0x7ac8f1*/
  *(_DWORD *)v50 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7ac8f4*/
  v53 = (char *)this + 0x4C; /*0x7ac8fa*/
  *((_DWORD *)this + 0x13) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7ac901*/
  v54 = *((_DWORD **)this + 0x14); /*0x7ac907*/
  while ( v54 ) /*0x7ac911*/
  {
    v55 = v54; /*0x7ac915*/
    v54 = (_DWORD *)*v54; /*0x7ac917*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v53 + 8))((char *)this + 0x4C, v55); /*0x7ac920*/
  }
  *((_DWORD *)this + 0x16) = 0; /*0x7ac926*/
  *((_DWORD *)this + 0x14) = 0; /*0x7ac929*/
  *((_DWORD *)this + 0x15) = 0; /*0x7ac92c*/
  *(_DWORD *)v53 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7ac92f*/
  v56 = (char *)this + 0x3C; /*0x7ac935*/
  *((_DWORD *)this + 0xF) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7ac93c*/
  v57 = *((_DWORD **)this + 0x10); /*0x7ac942*/
  while ( v57 ) /*0x7ac94c*/
  {
    v58 = v57; /*0x7ac952*/
    v57 = (_DWORD *)*v57; /*0x7ac954*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v56 + 8))((char *)this + 0x3C, v58); /*0x7ac95d*/
  }
  *((_DWORD *)this + 0x12) = 0; /*0x7ac965*/
  *((_DWORD *)this + 0x10) = 0; /*0x7ac968*/
  *((_DWORD *)this + 0x11) = 0; /*0x7ac96b*/
  *(_DWORD *)v56 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7ac96e*/
  sub_71A910(this); /*0x7ac97c*/
}
