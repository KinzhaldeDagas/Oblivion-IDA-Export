char __thiscall sub_45CEE0(_DWORD *this)
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
  void (__thiscall *v12)(NiRefObject *, bool); // edi
  _DWORD *v13; // ecx
  int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned __int16 v16; // bp
  void *v18; // [esp+8h] [ebp-10h] BYREF
  int a1; // [esp+Ch] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  v2 = *(this + 0x16);
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
  for ( i = v7; i; LOBYTE(v7) = NiTMap_RemoveAt((_DWORD *)*(this + 0x16), v8) )
  {
    sub_452600((NiTMap_TESCELL *)*(this + 0x16), &i, (void **)&a1, (TESObjectCELL **)&v18);
    v8 = a1;
    v9 = TESForm_LookupByFormID(a1);
    v10 = (char *)OblivionDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    v11 = (char *)v18;
    v12 = (void (__thiscall *)(NiRefObject *, bool))v10;
    if ( v10 )
    {
      if ( !*((_DWORD *)v10 + 0xF) )
      {
        sub_4210E0((ExtraDataList *)(v10 + 0x44), (BSExtraData *)v18);
        v13 = (_DWORD *)*(this + 1);
        if ( !v13 )
          v13 = (_DWORD *)*this;
        sub_452C20(v13, v12, 0x1000000);
        continue;
      }
      v14 = *(this + 5);
      *(this + 5) = v18;
      v21 = v14;
      v15 = (unsigned __int16 *)SaveLoad_CurrentSavegame->unk000[5];
      v16 = *v15;
      SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v15 + 1);
      sub_4E2F70(v12, 0);
      if ( &v11[v16 + 2] != (char *)*(this + 5) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
          dword_B34D90,
          "LoadAttachedAnimations() call did not properly empty buffer.");
      v8 = a1;
      *(this + 5) = v21;
    }
    MemoryHeap_Free_checked(v11);
  }
  if ( *(_DWORD *)(*(this + 0x16) + 0xC) )
    LOBYTE(v7) = (*(char (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                   dword_B34D90,
                   "LoadAttachedAnimations() call finished, but still has elements in the map.");
  return (char)v7;
}
