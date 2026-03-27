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

  v2 = *(this + 0x17);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD **)(v2 + 8);
    v6 = v5;
    while ( !*v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4];
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x17), a1) )
  {
    sub_452600((NiTMap_TESCELL *)*(this + 0x17), &i, (void **)&a1, (TESObjectCELL **)&v18);
    v8 = TESForm_LookupByFormID(a1);
    v9 = OblivionDynamicCast(
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &MobileObject `RTTI Type Descriptor',
           0);
    v10 = v9;
    if ( v9 )
    {
      v11 = OblivionDynamicCast(
              *((void **)v9 + 0x16),
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v11 )
      {
        v12 = *(this + 5);
        *(this + 5) = v18;
        v24 = v12;
        v13 = (unsigned __int16 *)SaveLoad_CurrentSavegame->unk000[5];
        v14 = *v13;
        SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v13 + 1);
        v23 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 0x18C))(v11, &v21);
        if ( v21 )
        {
          v22 = (void (__thiscall ***)(_DWORD, int))v21;
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
          {
            if ( v22 )
              (**v22)(v22, 1);
          }
        }
        if ( v23 )
        {
          sub_657340(v11, (int)v10);
          if ( (char *)v18 + v14 + 2 != (void *)*(this + 5) )
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
              dword_B34D90,
              "LoadCharControllers() call did not properly empty buffer.");
        }
        else if ( (v10[2] & 0x20) == 0 || (v10[2] & 0x800) == 0 )
        {
          v15 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 0xD4))(v10, v10[3]);
          PrintError("LoadCharControllers(): Mob %s %08X does not have a character controller to load.", v15, v17);
        }
        *(this + 5) = v24;
      }
    }
    MemoryHeap_Free_checked(v18);
  }
  if ( *(_DWORD *)(*(this + 0x17) + 0xC) )
    LOBYTE(v7) = (*(char (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                   dword_B34D90,
                   "LoadCharControllers() call finished, but still has elements in the map.");
  return (char)v7;
}
