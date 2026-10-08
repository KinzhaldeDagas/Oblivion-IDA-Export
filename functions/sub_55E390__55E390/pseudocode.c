// Verified cache maintenance: with unusedModelsOnly=true removes tree-form/seed model entries whose model is null or only map-owned; false releases and clears every model cache entry. Called during TES destruction and BSTreeManager destruction.
void __cdecl BSTreeManager_ClearModelCache(bool unusedModelsOnly)
{
  unsigned int **v1; // esi
  char *v2; // esi
  volatile LONG *v3; // eax
  volatile LONG *v4; // edi
  bool v5; // zf
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ecx
  void (__thiscall ***v10)(_DWORD, int); // ecx
  char *v11; // esi
  int FirstNode; // [esp+8h] [ebp-Ch] BYREF
  void *v13; // [esp+Ch] [ebp-8h] BYREF
  void *v14; // [esp+10h] [ebp-4h] BYREF

  if ( !g_BSTreeManager_Instance ) /*0x55e393*/
    BSTreeManager_Create(0); /*0x55e39e*/
  if ( *(_DWORD *)g_BSTreeManager_Instance ) /*0x55e3ab*/
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_BSTreeManager_TreeCriticalSection, (int)&unk_A2F830); /*0x55e3bf*/
    if ( unusedModelsOnly ) /*0x55e3c9*/
    {
      v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e3cf*/
      if ( !g_BSTreeManager_Instance ) /*0x55e3cf*/
      {
        BSTreeManager_Create(0); /*0x55e3da*/
        v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e3df*/
      }
      FirstNode = NiTMapBase_GetFirstNode(*v1); /*0x55e3f1*/
      while ( FirstNode ) /*0x55e3f5*/
      {
        if ( !v1 ) /*0x55e402*/
        {
          BSTreeManager_Create(0); /*0x55e405*/
          v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e40a*/
        }
        NiTMap_U32Pointer_GetNextEntry( /*0x55e424*/
          (NiTMap_TESCELL *)*v1,
          (NiTMap_Entry_TESCELL **)&FirstNode,
          &v14,
          (TESObjectCELL **)&v13);
        v2 = (char *)v13; /*0x55e429*/
        if ( v13 ) /*0x55e42f*/
        {
          v3 = *(volatile LONG **)v13; /*0x55e435*/
          if ( !*(_DWORD *)v13 ) /*0x55e439*/
            goto LABEL_18; /*0x55e439*/
          if ( *((_DWORD *)v3 + 1) <= 1u ) /*0x55e43f*/
          {
            v4 = *(volatile LONG **)v13; /*0x55e445*/
            if ( v3 ) /*0x55e449*/
            {
              if ( !InterlockedDecrement(v3 + 1) ) /*0x55e44f*/
              {
                if ( v4 ) /*0x55e45b*/
                  (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x55e465*/
              }
              *(_DWORD *)v2 = 0; /*0x55e467*/
            }
LABEL_18:
            _LN21(v2, 4u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0); /*0x55e46d*/
            FormHeapFree((unsigned int)(v2 + 0xFFFFFFFC)); /*0x55e482*/
            v5 = g_BSTreeManager_Instance == 0; /*0x55e48a*/
            v13 = 0; /*0x55e491*/
            if ( v5 ) /*0x55e499*/
              BSTreeManager_Create(0); /*0x55e49d*/
            NiTMap_RemoveAt(*(_DWORD **)g_BSTreeManager_Instance, (int)v14); /*0x55e4b1*/
            v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e4b6*/
            if ( !g_BSTreeManager_Instance ) /*0x55e4b6*/
            {
              BSTreeManager_Create(0); /*0x55e4c1*/
              v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e4c6*/
            }
            v6 = (*v1)[1]; /*0x55e4d1*/
            v7 = 0; /*0x55e4d4*/
            if ( v6 ) /*0x55e4d8*/
            {
              v8 = (_DWORD *)(*v1)[2]; /*0x55e4da*/
              v9 = v8; /*0x55e4dd*/
              while ( !*v9 ) /*0x55e4e3*/
              {
                ++v7; /*0x55e4e5*/
                ++v9; /*0x55e4e8*/
                if ( v7 >= v6 ) /*0x55e4ed*/
                  goto LABEL_26; /*0x55e4ed*/
              }
              FirstNode = v8[v7]; /*0x55e4fa*/
            }
            else
            {
LABEL_26:
              FirstNode = 0; /*0x55e4ef*/
            }
            continue; /*0x55e4fe*/
          }
        }
        v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e500*/
      }
      if ( !v1 ) /*0x55e514*/
      {
        BSTreeManager_Create(0); /*0x55e517*/
        v1 = (unsigned int **)g_BSTreeManager_Instance; /*0x55e51c*/
      }
      if ( (*v1)[3] ) /*0x55e527*/
        goto LABEL_54; /*0x55e52b*/
      NiTMap_Clear(*v1); /*0x55e531*/
      if ( !g_BSTreeManager_Instance ) /*0x55e536*/
        BSTreeManager_Create(0); /*0x55e541*/
      v10 = *(void (__thiscall ****)(_DWORD, int))g_BSTreeManager_Instance; /*0x55e54f*/
    }
    else
    {
      if ( !g_BSTreeManager_Instance ) /*0x55e556*/
        BSTreeManager_Create(0); /*0x55e561*/
      v13 = (void *)NiTMapBase_GetFirstNode(*(unsigned int **)g_BSTreeManager_Instance); /*0x55e578*/
      while ( v13 ) /*0x55e57c*/
      {
        if ( !g_BSTreeManager_Instance ) /*0x55e580*/
          BSTreeManager_Create(0); /*0x55e58b*/
        NiTMap_U32Pointer_GetNextEntry( /*0x55e5a9*/
          *(NiTMap_TESCELL **)g_BSTreeManager_Instance,
          (NiTMap_Entry_TESCELL **)&v13,
          (void **)&FirstNode,
          (TESObjectCELL **)&v14);
        if ( v14 ) /*0x55e5b4*/
        {
          v11 = (char *)v14 + 0xFFFFFFFC; /*0x55e5b9*/
          _LN21((char *)v14, 4u, *((_DWORD *)v14 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0); /*0x55e5c5*/
          FormHeapFree((unsigned int)v11); /*0x55e5cb*/
        }
      }
      if ( !g_BSTreeManager_Instance ) /*0x55e5da*/
        BSTreeManager_Create(0); /*0x55e5e5*/
      NiTMap_Clear(*(_DWORD **)g_BSTreeManager_Instance); /*0x55e5f5*/
      if ( !g_BSTreeManager_Instance ) /*0x55e5fa*/
        BSTreeManager_Create(0); /*0x55e605*/
      v10 = *(void (__thiscall ****)(_DWORD, int))g_BSTreeManager_Instance; /*0x55e612*/
    }
    if ( v10 ) /*0x55e616*/
      (**v10)(v10, 1); /*0x55e61e*/
    if ( !g_BSTreeManager_Instance ) /*0x55e620*/
      BSTreeManager_Create(0); /*0x55e62b*/
    *(_DWORD *)g_BSTreeManager_Instance = 0; /*0x55e639*/
LABEL_54:
    NiLeaveCriticalSection_0(&g_BSTreeManager_TreeCriticalSection); /*0x55e63f*/
  }
}
