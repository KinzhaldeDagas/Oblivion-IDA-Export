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
  int v41; // edi
  int v42; // edi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  int v48; // [esp+14h] [ebp-30h]

  *(_DWORD *)a1 = &PlayerCharacter::`vftable'{for `PlayerCharacter'};
  *(_DWORD *)(a1 + 0x18) = &PlayerCharacter::`vftable'{for `TESChildCell'};
  *(_DWORD *)(a1 + 0x5C) = &PlayerCharacter::`vftable'{for `MagicCaster'};
  *(_DWORD *)(a1 + 0x68) = &PlayerCharacter::`vftable'{for `MagicTarget'};
  v6 = 6;
  sub_65E800((_DWORD *)a1);
  sub_668D00((int *)a1, a2, a3, 0);
  v7 = *(_DWORD **)(a1 + 0x5AC);
  if ( v7 )
    BSSimpleList_Clear(v7);
  FormHeapFree(*(_DWORD *)(a1 + 0x5AC));
  v8 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58);
  if ( v8 )
    (**v8)(v8, 1);
  v9 = *(_DWORD *)(a1 + 0x5B0);
  *(_DWORD *)(a1 + 0x58) = 0;
  if ( v9 )
    FormHeapFree(v9);
  v10 = *(_DWORD **)(a1 + 0x1F8);
  if ( v10 )
  {
    BSSimpleList_Clear(v10);
    FormHeapFree(*(_DWORD *)(a1 + 0x1F8));
  }
  v11 = *(_DWORD **)(a1 + 0x1FC);
  if ( v11 )
  {
    BSSimpleList_Clear(v11);
    FormHeapFree(*(_DWORD *)(a1 + 0x1FC));
  }
  v12 = *(_DWORD *)(a1 + 0x1F0);
  if ( v12 )
  {
    sub_532180(*(int **)(a1 + 0x1F0));
    FormHeapFree(v12);
  }
  v13 = *(_DWORD *)(a1 + 0x1F4);
  if ( v13 )
  {
    sub_535680(*(hkAllCdPointCollector **)(a1 + 0x1F4));
    MemoryHeap_Free_checked((void *)(v13 - *(unsigned __int8 *)(v13 - 1)));
  }
  v14 = *(_DWORD *)(a1 + 0x574);
  if ( v14 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *(_DWORD *)(a1 + 0x574) = 0;
  }
  v15 = *(char **)(a1 + 0x624);
  if ( v15 )
    sub_419F10(v15, 1);
  if ( *(_DWORD *)(a1 + 0x1E4) )
  {
    do
    {
      v16 = *(_DWORD **)(a1 + 0x1E4);
      if ( !v16[1] && !*v16 )
        break;
      v17 = (void (__thiscall ***)(_DWORD, int))*v16;
      if ( v17 )
        (**v17)(v17, 1);
      v18 = *(_DWORD **)(a1 + 0x1E4);
      v19 = (_DWORD *)v18[1];
      if ( v19 )
      {
        v18[1] = v19[1];
        *v18 = *v19;
        FormHeapFree((unsigned int)v19);
      }
      else
      {
        *v18 = 0;
      }
    }
    while ( *(_DWORD *)(a1 + 0x1E4) );
    FormHeapFree(*(_DWORD *)(a1 + 0x1E4));
  }
  if ( *(_DWORD *)(a1 + 0x5E8) )
  {
    do
    {
      v20 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5E8) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x5E8));
      *(_DWORD *)(a1 + 0x5E8) = v20;
    }
    while ( v20 );
  }
  *(_DWORD *)(a1 + 0x5E4) = 0;
  if ( *(_DWORD *)(a1 + 0x5F0) )
  {
    do
    {
      v21 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5F0) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x5F0));
      *(_DWORD *)(a1 + 0x5F0) = v21;
    }
    while ( v21 );
  }
  *(_DWORD *)(a1 + 0x5EC) = 0;
  if ( *(_DWORD *)(a1 + 0x5FC) )
  {
    do
    {
      v22 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5FC) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x5FC));
      *(_DWORD *)(a1 + 0x5FC) = v22;
    }
    while ( v22 );
  }
  *(_DWORD *)(a1 + 0x5F8) = 0;
  v23 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x5E0);
  if ( v23 )
    (**v23)(v23, 1);
  v24 = OSGlobals;
  if ( !OSGlobals || v24->quitGame || v24->exitToMainMenu )
  {
    Character_Set3D((TESObjectREFR *)a1, 0, a2, a3, a5, 0);
    v25 = *(_DWORD *)(a1 + 0x5C8);
    if ( v25 )
    {
      sub_47AB80(*(char **)(a1 + 0x5C8), 0, a2, a3, a5);
      FormHeapFree(v25);
    }
    v26 = *(ActorAnimData **)(a1 + 0x5CC);
    *(_DWORD *)(a1 + 0x5C8) = 0;
    if ( v26 )
    {
      DisposeActorAnimData(v26);
      FormHeapFree((unsigned int)v26);
    }
    *(_DWORD *)(a1 + 0x5CC) = 0;
    v27 = *(_DWORD *)(a1 + 0x5D0);
    if ( v27 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
        (**(void (__thiscall ***)(int, int))v27)(v27, 1);
      *(_DWORD *)(a1 + 0x5D0) = 0;
    }
    v48 = *(_DWORD *)dword_B36BB8;
    v28 = (int *)ModelLoaderPtr;
    CameraP1 = 0;
    P3Camera = 0;
    Camera1PBiped = 0;
    QueuedModelLoader_RemoveModel(v28, v48, 1, 1);
    a5 = sub_578CF0(0, a2, a3, a5, a4, 0);
  }
  else
  {
    PrintError("PlayerCharacter::Set3D( 0 ) called before the game was over.");
  }
  if ( *(_DWORD *)(a1 + 0x708) )
  {
    do
    {
      v29 = *(_DWORD *)(*(_DWORD *)(a1 + 0x708) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x708));
      *(_DWORD *)(a1 + 0x708) = v29;
    }
    while ( v29 );
  }
  *(_DWORD *)(a1 + 0x704) = 0;
  if ( *(_DWORD *)(a1 + 0x70C) )
    sub_452230(SaveLoad_CurrentSavegame, *(void **)(a1 + 0x70C));
  v30 = *(_DWORD *)(a1 + 0x730);
  if ( v30 )
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v30 + 0xA); *(_DWORD *)(*(_DWORD *)(v30 + 4) + 4 * v32) = 0 )
      v32 = (unsigned __int16)i++;
    *(_WORD *)(v30 + 0xA) = 0;
    *(_WORD *)(v30 + 0xC) = 0;
    v33 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x730);
    if ( v33 )
      (**v33)(v33, 1);
    *(_DWORD *)(a1 + 0x730) = 0;
  }
  v34 = *(_DWORD *)(a1 + 0x764);
  if ( v34 )
  {
    sub_6B73E0(*(_DWORD **)(a1 + 0x764));
    FormHeapFree(v34);
    *(_DWORD *)(a1 + 0x764) = 0;
    *(_DWORD *)(a1 + 0x760) = 0;
  }
  v35 = (int **)(a1 + 0x768);
  do
  {
    if ( *v35 )
    {
      sub_6B7240(*v35);
      v36 = *v35;
      if ( *v35 )
      {
        sub_6B73E0(*v35);
        FormHeapFree((unsigned int)v36);
      }
      *v35 = 0;
    }
    ++v35;
    --v6;
  }
  while ( v6 );
  sub_663980((unsigned int *)a1);
  if ( *(_DWORD *)(a1 + 0x784) )
  {
    do
    {
      v37 = *(_DWORD *)(*(_DWORD *)(a1 + 0x784) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x784));
      *(_DWORD *)(a1 + 0x784) = v37;
    }
    while ( v37 );
  }
  v38 = InterlockedDecrement;
  *(_DWORD *)(a1 + 0x780) = 0;
  v39 = *(_DWORD *)(a1 + 0x798);
  if ( v39 )
  {
    if ( !v38((volatile LONG *)(v39 + 4)) )
      (**(void (__thiscall ***)(int, int))v39)(v39, 1);
    *(_DWORD *)(a1 + 0x798) = 0;
  }
  v40 = *(_DWORD *)(a1 + 0x79C);
  if ( v40 )
  {
    if ( !v38((volatile LONG *)(v40 + 4)) )
      (**(void (__thiscall ***)(int, int))v40)(v40, 1);
    *(_DWORD *)(a1 + 0x79C) = 0;
  }
  v41 = dword_B3BB60;
  if ( dword_B3BB60 )
  {
    if ( !v38((volatile LONG *)(v41 + 4)) )
    {
      if ( v41 )
        (**(void (__thiscall ***)(int, int))v41)(v41, 1);
    }
    dword_B3BB60 = 0;
  }
  sub_959D60(word_B3BB4C, &Vector3_InitValue_, &Vector3_InitValue_, 0);
  v42 = *(_DWORD *)(a1 + 0x79C);
  if ( v42 )
  {
    if ( !v38((volatile LONG *)(v42 + 4)) )
      (**(void (__thiscall ***)(int, int))v42)(v42, 1);
  }
  v43 = *(_DWORD *)(a1 + 0x798);
  if ( v43 )
  {
    if ( !v38((volatile LONG *)(v43 + 4)) )
      (**(void (__thiscall ***)(int, int))v43)(v43, 1);
  }
  NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>((unsigned int *)(a1 + 0x788));
  v44 = *(_DWORD *)(a1 + 0x5D8);
  if ( v44 )
  {
    if ( !v38((volatile LONG *)(v44 + 4)) )
      (**(void (__thiscall ***)(int, int))v44)(v44, 1);
  }
  v45 = *(_DWORD *)(a1 + 0x5D0);
  if ( v45 )
  {
    if ( !v38((volatile LONG *)(v45 + 4)) )
      (**(void (__thiscall ***)(int, int))v45)(v45, 1);
  }
  v46 = *(_DWORD *)(a1 + 0x574);
  if ( v46 )
  {
    if ( !v38((volatile LONG *)(v46 + 4)) )
      a5 = ((double (__thiscall *)(int, int))**(_DWORD **)v46)(v46, 1);
  }
  return sub_612150(a1, 0, v46, a2, a3, a5);
}
