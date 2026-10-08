void __thiscall CombatController::~CombatController(CombatController *this)
{
  TESSaveLoadGame_SerializationView *v5; // ecx
  _DWORD *v6; // ecx
  PlayerCharacter *v7; // edi
  int v8; // edx
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // edi
  _DWORD *v14; // ecx
  MEF_U32PointerMapEntry32 *v15; // eax
  MEF_U32PointerMapLayout32 *v16; // ecx
  _DWORD *v17; // edi
  void (__thiscall ***v18)(_DWORD, int); // ecx
  TESObjectREFR ***v19; // edi
  TESObjectREFR **i; // eax
  char ***v21; // edi
  char ***v22; // ebp
  char **v23; // eax
  unsigned int v24; // ebx
  _DWORD *v25; // ecx
  _DWORD *v26; // ecx
  char ***v27; // edi
  char ***v28; // ebp
  char **v29; // eax
  unsigned int v30; // ebx
  _DWORD *v31; // ecx
  char ***v32; // edi
  char ***v33; // ebp
  char **v34; // eax
  unsigned int v35; // ebx
  _DWORD *v36; // ecx
  _DWORD *v37; // ecx
  char **v38; // eax
  char **v39; // eax
  char **v40; // eax
  char **v41; // eax
  char **v42; // eax
  int v43; // edi
  _DWORD *v44; // [esp+14h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned int keyOut; // [esp+20h] [ebp-10h] BYREF
  unsigned int v47; // [esp+2Ch] [ebp-4h]

  position[1] = (MEF_U32PointerMapEntry32 *)this; /*0x61c159*/
  *(_DWORD *)this = &CombatController::`vftable'; /*0x61c15d*/
  v5 = g_TESSaveLoadGame; /*0x61c163*/
  --unk_B3B914; /*0x61c170*/
  v47 = 0; /*0x61c176*/
  if ( !sub_45A500(v5) ) /*0x61c17a*/
  {
    v6 = *((_DWORD **)this + 0xF); /*0x61c183*/
    if ( v6 ) /*0x61c188*/
    {
      if ( Actor_IsBlocking(v6) ) /*0x61c18a*/
        Actor_UpdateBlockingState(*((Actor **)this + 0xF), 0); /*0x61c197*/
    }
  }
  v7 = reference; /*0x61c19c*/
  if ( sub_613670(this, (int)reference) ) /*0x61c1a5*/
    --*(_DWORD *)&v7->unk760.afterDoorSpaceMap[8]; /*0x61c1ae*/
  if ( --unk_B3B910 < 0 ) /*0x61c1b5*/
    unk_B3B910 = 0; /*0x61c1bd*/
  v10 = *((_DWORD *)this + 0x63); /*0x61c1c3*/
  *((_BYTE *)this + 0x1A4) = 1; /*0x61c1cb*/
  if ( v10 ) /*0x61c1d1*/
  {
    v11 = *(_DWORD *)(v10 + 4); /*0x61c1d7*/
    v12 = 0; /*0x61c1da*/
    if ( v11 ) /*0x61c1de*/
    {
      v13 = *(_DWORD **)(v10 + 8); /*0x61c1e0*/
      v14 = v13; /*0x61c1e3*/
      while ( !*v14 ) /*0x61c1e7*/
      {
        ++v12; /*0x61c1ed*/
        ++v14; /*0x61c1ef*/
        if ( v12 >= v11 ) /*0x61c1f4*/
          goto LABEL_14; /*0x61c1f4*/
      }
      v15 = (MEF_U32PointerMapEntry32 *)v13[v12]; /*0x61c53a*/
    }
    else
    {
LABEL_14:
      v15 = 0; /*0x61c1f6*/
    }
    position[0] = v15; /*0x61c1fa*/
    while ( position[0] ) /*0x61c1fe*/
    {
      v16 = *((MEF_U32PointerMapLayout32 **)this + 0x63); /*0x61c20a*/
      v44 = 0; /*0x61c215*/
      NiTMap_U32Pointer_GetNextEntry(v16, position, &keyOut, (void **)&v44); /*0x61c219*/
      v17 = v44; /*0x61c21e*/
      if ( v44 ) /*0x61c224*/
      {
        sub_6B7240(v44); /*0x61c228*/
        sub_6B73E0(v17); /*0x61c22f*/
        FormHeapFree((unsigned int)v17); /*0x61c235*/
      }
    }
    NiTMap_Clear(*((_DWORD **)this + 0x63)); /*0x61c249*/
    v18 = *((void (__thiscall ****)(_DWORD, int))this + 0x63); /*0x61c24e*/
    if ( v18 ) /*0x61c256*/
      (**v18)(v18, 1); /*0x61c25d*/
  }
  v19 = *((TESObjectREFR ****)this + 0x10); /*0x61c25f*/
  if ( v19 ) /*0x61c264*/
  {
    for ( i = *v19; *v19; i = *v19 ) /*0x61c266*/
      CombatController_RemoveTarget((float *)this, *i); /*0x61c275*/
  }
  if ( *((_DWORD *)this + 0x10) ) /*0x61c280*/
    FormHeapFree(*((_DWORD *)this + 0x10)); /*0x61c288*/
  if ( *((_DWORD *)this + 0x46) ) /*0x61c290*/
    sub_612C70((unsigned int **)this); /*0x61c29a*/
  v21 = *((char ****)this + 0x18); /*0x61c29f*/
  if ( v21 ) /*0x61c2a4*/
  {
    do /*0x61c2f3*/
    {
      v22 = (char ***)v21[1]; /*0x61c2a6*/
      if ( !v22 && !*v21 ) /*0x61c2ad*/
        break; /*0x61c2af*/
      v23 = *v21; /*0x61c2b1*/
      if ( *v21 ) /*0x61c2b1*/
      {
        if ( v23[1] ) /*0x61c2b7*/
        {
          v24 = (unsigned int)v23[1]; /*0x61c2bd*/
          if ( v24 ) /*0x61c2c2*/
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v23[1], v8); /*0x61c2c6*/
            FormHeapFree(v24); /*0x61c2cc*/
          }
        }
        if ( **v21 ) /*0x61c2d6*/
          MagicItem_UnloadVFXModels(**v21, 1); /*0x61c2df*/
        FormHeapFree((unsigned int)*v21); /*0x61c2e7*/
      }
      v21 = v22; /*0x61c2f1*/
    }
    while ( v22 ); /*0x61c2f3*/
  }
  v25 = *((_DWORD **)this + 0x18); /*0x61c2f7*/
  if ( v25 ) /*0x61c2fc*/
  {
    BSSimpleList_Clear(v25); /*0x61c2fe*/
    FormHeapFree(*((_DWORD *)this + 0x18)); /*0x61c307*/
  }
  v26 = *((_DWORD **)this + 0x1A); /*0x61c30f*/
  if ( v26 ) /*0x61c314*/
  {
    BSSimpleList_Clear(v26); /*0x61c316*/
    FormHeapFree(*((_DWORD *)this + 0x1A)); /*0x61c31f*/
  }
  v27 = *((char ****)this + 0x19); /*0x61c327*/
  if ( v27 ) /*0x61c32c*/
  {
    do /*0x61c37d*/
    {
      v28 = (char ***)v27[1]; /*0x61c330*/
      if ( !v28 && !*v27 ) /*0x61c337*/
        break; /*0x61c339*/
      v29 = *v27; /*0x61c33b*/
      if ( *v27 ) /*0x61c33b*/
      {
        if ( v29[1] ) /*0x61c341*/
        {
          v30 = (unsigned int)v29[1]; /*0x61c347*/
          if ( v30 ) /*0x61c34c*/
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v29[1], v8); /*0x61c350*/
            FormHeapFree(v30); /*0x61c356*/
          }
        }
        if ( **v27 ) /*0x61c360*/
          MagicItem_UnloadVFXModels(**v27, 1); /*0x61c369*/
        FormHeapFree((unsigned int)*v27); /*0x61c371*/
      }
      v27 = v28; /*0x61c37b*/
    }
    while ( v28 ); /*0x61c37d*/
  }
  v31 = *((_DWORD **)this + 0x19); /*0x61c381*/
  if ( v31 ) /*0x61c386*/
  {
    BSSimpleList_Clear(v31); /*0x61c388*/
    FormHeapFree(*((_DWORD *)this + 0x19)); /*0x61c391*/
  }
  v32 = *((char ****)this + 0x17); /*0x61c399*/
  if ( v32 ) /*0x61c39e*/
  {
    do /*0x61c3ed*/
    {
      v33 = (char ***)v32[1]; /*0x61c3a0*/
      if ( !v33 && !*v32 ) /*0x61c3a7*/
        break; /*0x61c3a9*/
      v34 = *v32; /*0x61c3ab*/
      if ( *v32 ) /*0x61c3ab*/
      {
        if ( v34[1] ) /*0x61c3b1*/
        {
          v35 = (unsigned int)v34[1]; /*0x61c3b7*/
          if ( v35 ) /*0x61c3bc*/
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v34[1], v8); /*0x61c3c0*/
            FormHeapFree(v35); /*0x61c3c6*/
          }
        }
        if ( **v32 ) /*0x61c3d0*/
          MagicItem_UnloadVFXModels(**v32, 1); /*0x61c3d9*/
        FormHeapFree((unsigned int)*v32); /*0x61c3e1*/
      }
      v32 = v33; /*0x61c3eb*/
    }
    while ( v33 ); /*0x61c3ed*/
  }
  v36 = *((_DWORD **)this + 0x17); /*0x61c3ef*/
  if ( v36 ) /*0x61c3f4*/
  {
    BSSimpleList_Clear(v36); /*0x61c3f6*/
    FormHeapFree(*((_DWORD *)this + 0x17)); /*0x61c3ff*/
  }
  v37 = *((_DWORD **)this + 0x29); /*0x61c407*/
  if ( v37 ) /*0x61c40f*/
  {
    BSSimpleList_Clear(v37); /*0x61c411*/
    FormHeapFree(*((_DWORD *)this + 0x29)); /*0x61c41d*/
  }
  v38 = *((char ***)this + 0x25); /*0x61c425*/
  if ( v38 ) /*0x61c42d*/
  {
    if ( *v38 ) /*0x61c42f*/
      MagicItem_UnloadVFXModels(*v38, 1); /*0x61c438*/
    FormHeapFree(*((_DWORD *)this + 0x25)); /*0x61c444*/
  }
  v39 = *((char ***)this + 0x26); /*0x61c44c*/
  if ( v39 ) /*0x61c454*/
  {
    if ( *v39 ) /*0x61c456*/
      MagicItem_UnloadVFXModels(*v39, 1); /*0x61c45f*/
    FormHeapFree(*((_DWORD *)this + 0x26)); /*0x61c46b*/
  }
  v40 = *((char ***)this + 0x27); /*0x61c473*/
  if ( v40 ) /*0x61c47b*/
  {
    if ( *v40 ) /*0x61c47d*/
      MagicItem_UnloadVFXModels(*v40, 1); /*0x61c486*/
    FormHeapFree(*((_DWORD *)this + 0x27)); /*0x61c492*/
  }
  v41 = *((char ***)this + 0x24); /*0x61c49a*/
  if ( v41 ) /*0x61c4a2*/
  {
    if ( *v41 ) /*0x61c4a4*/
      MagicItem_UnloadVFXModels(*v41, 1); /*0x61c4ad*/
    FormHeapFree(*((_DWORD *)this + 0x24)); /*0x61c4b9*/
  }
  v42 = *((char ***)this + 0x28); /*0x61c4c1*/
  if ( v42 ) /*0x61c4c9*/
  {
    if ( *v42 ) /*0x61c4cb*/
      MagicItem_UnloadVFXModels(*v42, 1); /*0x61c4d4*/
    FormHeapFree(*((_DWORD *)this + 0x28)); /*0x61c4e0*/
  }
  if ( *((_DWORD *)this + 0x58) ) /*0x61c4e8*/
  {
    do /*0x61c50b*/
    {
      v43 = *(_DWORD *)(*((_DWORD *)this + 0x58) + 4); /*0x61c4f7*/
      FormHeapFree(*((_DWORD *)this + 0x58)); /*0x61c4fb*/
      *((_DWORD *)this + 0x58) = v43; /*0x61c505*/
    }
    while ( v43 ); /*0x61c50b*/
  }
  *((_DWORD *)this + 0x57) = 0; /*0x61c50f*/
  v47 = 0xFFFFFFFF; /*0x61c519*/
  TESPackage::~TESPackage((TESPackage *)this); /*0x61c521*/
}
