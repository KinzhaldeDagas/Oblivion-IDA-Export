char __thiscall sub_459140(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  NiTMap_Entry_TESCELL *v7; // eax
  TESForm *v8; // eax
  void *v9; // eax
  _DWORD *v10; // ebx
  void *v11; // esi
  int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned __int16 v14; // bp
  const char *v15; // eax
  int v17; // [esp-Ch] [ebp-30h]
  void *v18; // [esp+8h] [ebp-1Ch] BYREF
  int a1; // [esp+Ch] [ebp-18h] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+10h] [ebp-14h] BYREF
  int v21; // [esp+14h] [ebp-10h] BYREF
  void (__thiscall ***v22)(_DWORD, int); // [esp+18h] [ebp-Ch]
  int v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h]

  v2 = *(this + 0x17); /*0x459147*/
  v3 = *(_DWORD *)(v2 + 4); /*0x45914a*/
  v4 = 0; /*0x45914d*/
  if ( v3 ) /*0x459151*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x459153*/
    v6 = v5; /*0x459156*/
    while ( !*v6 ) /*0x459163*/
    {
      ++v4; /*0x459169*/
      ++v6; /*0x45916c*/
      if ( v4 >= v3 ) /*0x459171*/
        goto LABEL_5; /*0x459171*/
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4]; /*0x459280*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x459173*/
  }
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x17), a1) )
  {
    NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)*(this + 0x17), &i, (void **)&a1, (TESObjectCELL **)&v18); /*0x459195*/
    v8 = TESForm_LookupByFormID(a1); /*0x4591ad*/
    v9 = OblivionDynamicCast( /*0x4591b6*/
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &MobileObject `RTTI Type Descriptor',
           0);
    v10 = v9; /*0x4591bb*/
    if ( v9 )
    {
      v11 = OblivionDynamicCast( /*0x4591df*/
              *((void **)v9 + 0x16),
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v11 )
      {
        v12 = *(this + 5); /*0x4591ec*/
        *(this + 5) = v18; /*0x4591f3*/
        v24 = v12; /*0x4591f6*/
        v13 = (unsigned __int16 *)g_TESSaveLoadGame->unk000[5]; /*0x459200*/
        v14 = *v13; /*0x459203*/
        g_TESSaveLoadGame->unk000[5] = (UInt32)(v13 + 1); /*0x459209*/
        v23 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 0x18C))(v11, &v21); /*0x45921f*/
        if ( v21 ) /*0x459229*/
        {
          v22 = (void (__thiscall ***)(_DWORD, int))v21; /*0x45922b*/
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x459233*/
          {
            if ( v22 ) /*0x459243*/
              (**v22)(v22, 1); /*0x45924b*/
          }
        }
        if ( v23 )
        {
          MobileObject_LoadCharacterProxyState(v11, v10); /*0x459257*/
          if ( (char *)v18 + v14 + 2 != (void *)*(this + 5) ) /*0x45926a*/
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45927c*/
              *(_DWORD *)&MEMORY[0xB33E90][0xF00],
              "LoadCharControllers() call did not properly empty buffer.");
        }
        else if ( (v10[2] & 0x20) == 0 || (v10[2] & 0x800) == 0 )
        {
          v15 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 0xD4))(v10, v10[3]); /*0x4592aa*/
          PrintError("LoadCharControllers(): Mob %s %08X does not have a character controller to load.", v15, v17);
        }
        *(this + 5) = v24; /*0x4592be*/
      }
    }
    MemoryHeap_Free_checked(v18); /*0x4592cb*/
  }
  if ( *(_DWORD *)(*(this + 0x17) + 0xC) ) /*0x4592ed*/
    LOBYTE(v7) = (*(char (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x459305*/
                   *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                   "LoadCharControllers() call finished, but still has elements in the map.");
  return (char)v7; /*0x4592f1*/
}
