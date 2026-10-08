int __usercall sub_66B150@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st3>, double a5@<st0>)
{
  int v6; // ebx
  _DWORD *v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  unsigned int v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  unsigned int v12; // edi
  int v13; // edi
  int v14; // edi
  char *v15; // ecx
  _DWORD *v16; // eax
  void (__thiscall ***v17)(_DWORD, int); // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  int v20; // edi
  int v21; // edi
  int v22; // edi
  void (__thiscall ***v23)(_DWORD, int); // ecx
  OSGlobals *v24; // eax
  unsigned int v25; // edi
  ActorAnimData *v26; // edi
  int v27; // edi
  int *v28; // ecx
  int v29; // edi
  int v30; // eax
  int i; // ecx
  int v32; // edx
  void (__thiscall ***v33)(_DWORD, int); // ecx
  unsigned int v34; // edi
  int **v35; // edi
  int *v36; // ebp
  int v37; // edi
  LONG (__stdcall *v38)(volatile LONG *); // ebx
  int v39; // edi
  int v40; // edi
  float v41; // edi
  int v42; // edi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  const char *value; // [esp+14h] [ebp-30h]

  *(_DWORD *)a1 = &PlayerCharacter::`vftable'{for `PlayerCharacter'}; /*0x66b17b*/
  *(_DWORD *)(a1 + 0x18) = &PlayerCharacter::`vftable'{for `TESChildCell'}; /*0x66b181*/
  *(_DWORD *)(a1 + 0x5C) = &PlayerCharacter::`vftable'{for `MagicCaster'}; /*0x66b188*/
  *(_DWORD *)(a1 + 0x68) = &PlayerCharacter::`vftable'{for `MagicTarget'}; /*0x66b18f*/
  v6 = 6; /*0x66b196*/
  sub_65E800((_DWORD *)a1); /*0x66b19f*/
  ObservedActorRef_InitDefaultIdleVariants((TESObjectREFR *)a1, a2, a3, 0); /*0x66b1a9*/
  v7 = *(_DWORD **)(a1 + 0x5AC); /*0x66b1ae*/
  if ( v7 ) /*0x66b1b6*/
    BSSimpleList_Clear(v7); /*0x66b1b8*/
  FormHeapFree(*(_DWORD *)(a1 + 0x5AC)); /*0x66b1c4*/
  v8 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58); /*0x66b1c9*/
  if ( v8 ) /*0x66b1d1*/
    (**v8)(v8, 1); /*0x66b1d9*/
  v9 = *(_DWORD *)(a1 + 0x5B0); /*0x66b1db*/
  *(_DWORD *)(a1 + 0x58) = 0; /*0x66b1e3*/
  if ( v9 ) /*0x66b1e6*/
    FormHeapFree(v9); /*0x66b1e9*/
  v10 = *(_DWORD **)(a1 + 0x1F8); /*0x66b1f1*/
  if ( v10 ) /*0x66b1f9*/
  {
    BSSimpleList_Clear(v10); /*0x66b1fb*/
    FormHeapFree(*(_DWORD *)(a1 + 0x1F8)); /*0x66b207*/
  }
  v11 = *(_DWORD **)(a1 + 0x1FC); /*0x66b20f*/
  if ( v11 ) /*0x66b217*/
  {
    BSSimpleList_Clear(v11); /*0x66b219*/
    FormHeapFree(*(_DWORD *)(a1 + 0x1FC)); /*0x66b225*/
  }
  v12 = *(_DWORD *)(a1 + 0x1F0); /*0x66b22d*/
  if ( v12 ) /*0x66b235*/
  {
    sub_532180(*(int **)(a1 + 0x1F0)); /*0x66b239*/
    FormHeapFree(v12); /*0x66b23f*/
  }
  v13 = *(_DWORD *)(a1 + 0x1F4); /*0x66b247*/
  if ( v13 ) /*0x66b24f*/
  {
    sub_535680(*(hkAllCdPointCollector **)(a1 + 0x1F4)); /*0x66b253*/
    MemoryHeap_Free_checked((void *)(v13 - *(unsigned __int8 *)(v13 - 1))); /*0x66b264*/
  }
  v14 = *(_DWORD *)(a1 + 0x574); /*0x66b269*/
  if ( v14 ) /*0x66b271*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x66b277*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x66b28d*/
    *(_DWORD *)(a1 + 0x574) = 0; /*0x66b28f*/
  }
  v15 = *(char **)(a1 + 0x624); /*0x66b295*/
  if ( v15 ) /*0x66b29d*/
    MagicItem_UnloadVFXModels(v15, 1); /*0x66b2a1*/
  if ( *(_DWORD *)(a1 + 0x1E4) ) /*0x66b2a6*/
  {
    do /*0x66b2f3*/
    {
      v16 = *(_DWORD **)(a1 + 0x1E4); /*0x66b2b0*/
      if ( !v16[1] && !*v16 ) /*0x66b2bb*/
        break; /*0x66b2bd*/
      v17 = (void (__thiscall ***)(_DWORD, int))*v16; /*0x66b2bf*/
      if ( v17 ) /*0x66b2c3*/
        (**v17)(v17, 1); /*0x66b2cd*/
      v18 = *(_DWORD **)(a1 + 0x1E4); /*0x66b2cf*/
      v19 = (_DWORD *)v18[1]; /*0x66b2d5*/
      if ( v19 ) /*0x66b2da*/
      {
        v18[1] = v19[1]; /*0x66b2df*/
        *v18 = *v19; /*0x66b2e5*/
        FormHeapFree((unsigned int)v19); /*0x66b2e7*/
      }
      else
      {
        *v18 = 0; /*0x66b2f1*/
      }
    }
    while ( *(_DWORD *)(a1 + 0x1E4) ); /*0x66b2f3*/
    FormHeapFree(*(_DWORD *)(a1 + 0x1E4)); /*0x66b302*/
  }
  if ( *(_DWORD *)(a1 + 0x5E8) ) /*0x66b30a*/
  {
    do /*0x66b32c*/
    {
      v20 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5E8) + 4); /*0x66b318*/
      FormHeapFree(*(_DWORD *)(a1 + 0x5E8)); /*0x66b31c*/
      *(_DWORD *)(a1 + 0x5E8) = v20; /*0x66b326*/
    }
    while ( v20 ); /*0x66b32c*/
  }
  *(_DWORD *)(a1 + 0x5E4) = 0; /*0x66b32e*/
  if ( *(_DWORD *)(a1 + 0x5F0) ) /*0x66b334*/
  {
    do /*0x66b35a*/
    {
      v21 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5F0) + 4); /*0x66b346*/
      FormHeapFree(*(_DWORD *)(a1 + 0x5F0)); /*0x66b34a*/
      *(_DWORD *)(a1 + 0x5F0) = v21; /*0x66b354*/
    }
    while ( v21 ); /*0x66b35a*/
  }
  *(_DWORD *)(a1 + 0x5EC) = 0; /*0x66b35c*/
  if ( *(_DWORD *)(a1 + 0x5FC) ) /*0x66b362*/
  {
    do /*0x66b38a*/
    {
      v22 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5FC) + 4); /*0x66b376*/
      FormHeapFree(*(_DWORD *)(a1 + 0x5FC)); /*0x66b37a*/
      *(_DWORD *)(a1 + 0x5FC) = v22; /*0x66b384*/
    }
    while ( v22 ); /*0x66b38a*/
  }
  *(_DWORD *)(a1 + 0x5F8) = 0; /*0x66b38c*/
  v23 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x5E0); /*0x66b392*/
  if ( v23 ) /*0x66b39a*/
    (**v23)(v23, 1); /*0x66b3a2*/
  v24 = MEMORY[0xB33398]; /*0x66b3a4*/
  if ( !MEMORY[0xB33398] || v24->quitGame || v24->exitToMainMenu ) /*0x66b3b2*/
  {
    Character_Set3D((TESObjectREFR *)a1, 0, a2, a3, a5, 0); /*0x66b3ca*/
    v25 = *(_DWORD *)(a1 + 0x5C8); /*0x66b3cf*/
    if ( v25 ) /*0x66b3d7*/
    {
      sub_47AB80(*(ActorSkinInfo **)(a1 + 0x5C8)); /*0x66b3db*/
      FormHeapFree(v25); /*0x66b3e1*/
    }
    v26 = *(ActorAnimData **)(a1 + 0x5CC); /*0x66b3e9*/
    *(_DWORD *)(a1 + 0x5C8) = 0; /*0x66b3f1*/
    if ( v26 ) /*0x66b3f7*/
    {
      DisposeActorAnimData(v26); /*0x66b3fb*/
      FormHeapFree((unsigned int)v26); /*0x66b401*/
    }
    *(_DWORD *)(a1 + 0x5CC) = 0; /*0x66b409*/
    v27 = *(_DWORD *)(a1 + 0x5D0); /*0x66b40f*/
    if ( v27 ) /*0x66b417*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x66b41d*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x66b433*/
      *(_DWORD *)(a1 + 0x5D0) = 0; /*0x66b435*/
    }
    value = stru_B36BB8.value; /*0x66b445*/
    v28 = (int *)MEMORY[0xB33A1C]; /*0x66b446*/
    MEMORY[0xB3BB0C] = 0; /*0x66b44c*/
    MEMORY[0xB3BB10] = 0; /*0x66b452*/
    MEMORY[0xB3BB14] = 0; /*0x66b458*/
    QueuedModelLoader_RemoveModel(v28, (int)value, 1, 1); /*0x66b45e*/
    a5 = sub_578CF0(0, a2, a3, a5, a4, 0); /*0x66b464*/
  }
  else
  {
    PrintError("PlayerCharacter::Set3D( 0 ) called before the game was over."); /*0x66b3bd*/
  }
  if ( *(_DWORD *)(a1 + 0x708) ) /*0x66b46c*/
  {
    do /*0x66b48e*/
    {
      v29 = *(_DWORD *)(*(_DWORD *)(a1 + 0x708) + 4); /*0x66b47a*/
      FormHeapFree(*(_DWORD *)(a1 + 0x708)); /*0x66b47e*/
      *(_DWORD *)(a1 + 0x708) = v29; /*0x66b488*/
    }
    while ( v29 ); /*0x66b48e*/
  }
  *(_DWORD *)(a1 + 0x704) = 0; /*0x66b490*/
  if ( *(_DWORD *)(a1 + 0x70C) ) /*0x66b496*/
    sub_452230(g_TESSaveLoadGame, *(void **)(a1 + 0x70C)); /*0x66b4a7*/
  v30 = *(_DWORD *)(a1 + 0x730); /*0x66b4ac*/
  if ( v30 ) /*0x66b4b4*/
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v30 + 0xA); *(_DWORD *)(*(_DWORD *)(v30 + 4) + 4 * v32) = 0 ) /*0x66b4b8*/
      v32 = (unsigned __int16)i++; /*0x66b4c3*/
    *(_WORD *)(v30 + 0xA) = 0; /*0x66b4d2*/
    *(_WORD *)(v30 + 0xC) = 0; /*0x66b4d6*/
    v33 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x730); /*0x66b4da*/
    if ( v33 ) /*0x66b4e2*/
      (**v33)(v33, 1); /*0x66b4ea*/
    *(_DWORD *)(a1 + 0x730) = 0; /*0x66b4ec*/
  }
  v34 = *(_DWORD *)(a1 + 0x764); /*0x66b4f2*/
  if ( v34 ) /*0x66b4fa*/
  {
    sub_6B73E0(*(_DWORD **)(a1 + 0x764)); /*0x66b4fe*/
    FormHeapFree(v34); /*0x66b504*/
    *(_DWORD *)(a1 + 0x764) = 0; /*0x66b50c*/
    *(_DWORD *)(a1 + 0x760) = 0; /*0x66b512*/
  }
  v35 = (int **)(a1 + 0x768); /*0x66b518*/
  do /*0x66b54f*/
  {
    if ( *v35 ) /*0x66b520*/
    {
      sub_6B7240(*v35); /*0x66b526*/
      v36 = *v35; /*0x66b52b*/
      if ( *v35 ) /*0x66b52b*/
      {
        sub_6B73E0(*v35); /*0x66b533*/
        FormHeapFree((unsigned int)v36); /*0x66b539*/
      }
      *v35 = 0; /*0x66b541*/
    }
    ++v35; /*0x66b549*/
    --v6; /*0x66b54c*/
  }
  while ( v6 ); /*0x66b54f*/
  Player_ClearAttributeBonusBuckets((PlayerCharacter *)a1); /*0x66b553*/
  if ( *(_DWORD *)(a1 + 0x784) ) /*0x66b558*/
  {
    do /*0x66b57a*/
    {
      v37 = *(_DWORD *)(*(_DWORD *)(a1 + 0x784) + 4); /*0x66b566*/
      FormHeapFree(*(_DWORD *)(a1 + 0x784)); /*0x66b56a*/
      *(_DWORD *)(a1 + 0x784) = v37; /*0x66b574*/
    }
    while ( v37 ); /*0x66b57a*/
  }
  v38 = InterlockedDecrement; /*0x66b57c*/
  *(_DWORD *)(a1 + 0x780) = 0; /*0x66b582*/
  v39 = *(_DWORD *)(a1 + 0x798); /*0x66b588*/
  if ( v39 ) /*0x66b590*/
  {
    if ( !v38((volatile LONG *)(v39 + 4)) ) /*0x66b596*/
      (**(void (__thiscall ***)(int, int))v39)(v39, 1); /*0x66b5a8*/
    *(_DWORD *)(a1 + 0x798) = 0; /*0x66b5aa*/
  }
  v40 = *(_DWORD *)(a1 + 0x79C); /*0x66b5b0*/
  if ( v40 ) /*0x66b5b8*/
  {
    if ( !v38((volatile LONG *)(v40 + 4)) ) /*0x66b5be*/
      (**(void (__thiscall ***)(int, int))v40)(v40, 1); /*0x66b5d0*/
    *(_DWORD *)(a1 + 0x79C) = 0; /*0x66b5d2*/
  }
  v41 = qword_B3BB2C[0xD]; /*0x66b5d8*/
  if ( LODWORD(qword_B3BB2C[0xD]) ) /*0x66b5d8*/
  {
    if ( !v38((volatile LONG *)(LODWORD(v41) + 4)) && v41 != 0.0 ) /*0x66b5ee*/
      (**(void (__thiscall ***)(float, int))LODWORD(v41))(COERCE_FLOAT(LODWORD(v41)), 1); /*0x66b5f8*/
    qword_B3BB2C[0xD] = 0.0; /*0x66b5fa*/
  }
  NiPick_ExecuteAndSort(&qword_B3BB2C[8], &g_zeroNiPoint3.x, &g_zeroNiPoint3.x, 0); /*0x66b610*/
  v42 = *(_DWORD *)(a1 + 0x79C); /*0x66b615*/
  if ( v42 ) /*0x66b622*/
  {
    if ( !v38((volatile LONG *)(v42 + 4)) ) /*0x66b628*/
      (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x66b63a*/
  }
  v43 = *(_DWORD *)(a1 + 0x798); /*0x66b63c*/
  if ( v43 ) /*0x66b649*/
  {
    if ( !v38((volatile LONG *)(v43 + 4)) ) /*0x66b64f*/
      (**(void (__thiscall ***)(int, int))v43)(v43, 1); /*0x66b661*/
  }
  NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>((unsigned int *)(a1 + 0x788)); /*0x66b66e*/
  v44 = *(_DWORD *)(a1 + 0x5D8); /*0x66b673*/
  if ( v44 ) /*0x66b680*/
  {
    if ( !v38((volatile LONG *)(v44 + 4)) ) /*0x66b686*/
      (**(void (__thiscall ***)(int, int))v44)(v44, 1); /*0x66b698*/
  }
  v45 = *(_DWORD *)(a1 + 0x5D0); /*0x66b69a*/
  if ( v45 ) /*0x66b6a7*/
  {
    if ( !v38((volatile LONG *)(v45 + 4)) ) /*0x66b6ad*/
      (**(void (__thiscall ***)(int, int))v45)(v45, 1); /*0x66b6bf*/
  }
  v46 = *(_DWORD *)(a1 + 0x574); /*0x66b6c1*/
  if ( v46 ) /*0x66b6ce*/
  {
    if ( !v38((volatile LONG *)(v46 + 4)) ) /*0x66b6d4*/
      a5 = ((double (__thiscall *)(int, int))**(_DWORD **)v46)(v46, 1); /*0x66b6e6*/
  }
  return sub_612150(a1, 0, a2, a3, a5); /*0x66b6f7*/
}
