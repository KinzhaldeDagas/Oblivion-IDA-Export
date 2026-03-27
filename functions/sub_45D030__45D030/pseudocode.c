char __thiscall sub_45D030(_DWORD *this)
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

  v2 = *(this + 0x18);
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
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x18), v8) )
  {
    sub_452600((NiTMap_TESCELL *)*(this + 0x18), &i, (void **)&a1, (TESObjectCELL **)&v19);
    v8 = a1;
    v9 = TESForm_LookupByFormID(a1);
    v10 = (char *)OblivionDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    v11 = (char *)v19;
    v12 = v10;
    if ( v10 )
    {
      if ( !*((_DWORD *)v10 + 0xF) )
      {
        sub_4211E0((ExtraDataList *)(v10 + 0x44), (BSExtraDataVtbl *)v19);
        v13 = (_DWORD *)*(this + 1);
        if ( !v13 )
          v13 = (_DWORD *)*this;
        sub_452C20(v13, v12, 0x1000000);
        continue;
      }
      v14 = *(this + 5);
      *(this + 5) = v19;
      v23 = v14;
      v15 = SaveLoad_CurrentSavegame;
      v16 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
      LOWORD(v22) = *v16;
      v17 = v22;
      v15->unk000[5] = (UInt32)(v16 + 1);
      sub_4E31E0(v12, v17);
      if ( &v11[v17 + 2] != (char *)*(this + 5) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
          dword_B34D90,
          "LoadHavokData() call did not properly empty buffer.");
      v8 = a1;
      *(this + 5) = v23;
    }
    MemoryHeap_Free_checked(v11);
  }
  if ( *(_DWORD *)(*(this + 0x18) + 0xC) )
    LOBYTE(v7) = (*(char (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                   dword_B34D90,
                   "LoadHavokData() call finished, but still has elements in the map.");
  return (char)v7;
}
