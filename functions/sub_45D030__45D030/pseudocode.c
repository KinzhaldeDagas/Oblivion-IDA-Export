char __thiscall SaveLoad_DrainHavokBlobs(_DWORD *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  int v8; // ebp
  TESForm *v9; // eax
  char *v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edi
  _DWORD *v13; // ecx
  int v14; // ecx
  TESSaveLoad *v15; // ecx
  _WORD *v16; // eax
  unsigned __int16 v17; // bp
  void *v19; // [esp+8h] [ebp-14h] BYREF
  int a1; // [esp+Ch] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+10h] [ebp-Ch] BYREF
  int v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]

  v2 = *(this + 0x18); /*0x45d036*/
  v3 = *(_DWORD *)(v2 + 4); /*0x45d039*/
  v4 = 0; /*0x45d03c*/
  if ( v3 ) /*0x45d041*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x45d043*/
    v6 = v5; /*0x45d046*/
    while ( !*v6 ) /*0x45d053*/
    {
      ++v4; /*0x45d059*/
      ++v6; /*0x45d05c*/
      if ( v4 >= v3 ) /*0x45d061*/
        goto LABEL_5; /*0x45d061*/
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4]; /*0x45d0e3*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x45d063*/
  }
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x18), v8) ) /*0x45d06b*/
  {
    NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)*(this + 0x18), &i, (void **)&a1, (TESObjectCELL **)&v19); /*0x45d085*/
    v8 = a1; /*0x45d08a*/
    v9 = TESForm_LookupByFormID(a1); /*0x45d09d*/
    v10 = (char *)OblivionDynamicCast( /*0x45d0a6*/
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    v11 = (char *)v19; /*0x45d0ab*/
    v12 = v10; /*0x45d0af*/
    if ( v10 ) /*0x45d0b6*/
    {
      if ( !*((_DWORD *)v10 + 0xF) ) /*0x45d0bc*/
      {
        ExtraDataList_SetSavedHavokData((ExtraDataList *)(v10 + 0x44), (BSExtraDataVtbl *)v19); /*0x45d0c8*/
        v13 = (_DWORD *)*(this + 1); /*0x45d0cd*/
        if ( !v13 ) /*0x45d0d8*/
          v13 = (_DWORD *)*this; /*0x45d0da*/
        ChangesMap_AddFormChangeFlags(v13, v12, 0x1000000); /*0x45d0dc*/
        continue; /*0x45d0e1*/
      }
      v14 = *(this + 5); /*0x45d0eb*/
      *(this + 5) = v19; /*0x45d0ee*/
      v23 = v14; /*0x45d0f1*/
      v15 = g_TESSaveLoadGame; /*0x45d0f5*/
      v16 = (_WORD *)g_TESSaveLoadGame->unk000[5]; /*0x45d0fb*/
      LOWORD(v22) = *v16; /*0x45d104*/
      v17 = v22; /*0x45d0fe*/
      v15->unk000[5] = (UInt32)(v16 + 1); /*0x45d10d*/
      sub_4E31E0(v12, (int)v12, v17); /*0x45d113*/
      if ( &v11[v17 + 2] != (char *)*(this + 5) ) /*0x45d122*/
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45d134*/
          *(_DWORD *)&MEMORY[0xB33E90][0xF00],
          "LoadHavokData() call did not properly empty buffer.");
      v8 = a1; /*0x45d13a*/
      *(this + 5) = v23; /*0x45d13e*/
    }
    MemoryHeap_Free_checked(v11); /*0x45d147*/
  }
  if ( *(_DWORD *)(*(this + 0x18) + 0xC) ) /*0x45d165*/
    LOBYTE(v7) = (*(char (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45d17d*/
                   *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                   "LoadHavokData() call finished, but still has elements in the map.");
  return (char)v7; /*0x45d169*/
}
