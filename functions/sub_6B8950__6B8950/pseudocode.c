void __thiscall sub_6B8950(BSStringT *this, int _138)
{
  UInt32 v4; // ebx
  UInt32 *v5; // edi
  TESForm *v6; // eax
  const char *v7; // eax
  TESForm *v8; // eax
  void *v9; // eax
  TESForm *v10; // eax
  void *v11; // eax
  TESForm *v12; // eax
  TESSaveLoad *v13; // ecx
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // ecx
  UInt32 v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  UInt32 v20; // edx
  int v21; // [esp-18h] [ebp-14Ch]
  int v22; // [esp-18h] [ebp-14Ch]
  int v23; // [esp-14h] [ebp-148h]
  int v24; // [esp-14h] [ebp-148h]
  size_t v25; // [esp-Ch] [ebp-140h]
  size_t v26; // [esp-4h] [ebp-138h]
  int v27; // [esp-4h] [ebp-138h]
  int v28; // [esp+0h] [ebp-134h]
  int v29; // [esp+0h] [ebp-134h]
  unsigned __int16 v30; // [esp+0h] [ebp-134h]
  size_t v31; // [esp+4h] [ebp-130h]
  size_t v32; // [esp+4h] [ebp-130h]
  int v33; // [esp+4h] [ebp-130h]
  size_t v34; // [esp+4h] [ebp-130h]
  size_t v35; // [esp+4h] [ebp-130h]
  size_t v36; // [esp+4h] [ebp-130h]
  size_t v37; // [esp+4h] [ebp-130h]
  int v38; // [esp+4h] [ebp-130h]
  int v39; // [esp+4h] [ebp-130h]
  int v40; // [esp+8h] [ebp-12Ch]
  int v41; // [esp+Ch] [ebp-128h]
  int v42; // [esp+Ch] [ebp-128h]
  UInt32 v43; // [esp+Ch] [ebp-128h]
  int v44; // [esp+10h] [ebp-124h]
  UInt32 v45; // [esp+10h] [ebp-124h]
  int a1; // [esp+14h] [ebp-120h] BYREF
  int v47; // [esp+18h] [ebp-11Ch] BYREF
  _BYTE v48[12]; // [esp+1Ch] [ebp-118h] BYREF
  int Dst; // [esp+28h] [ebp-10Ch] BYREF
  char a2[260]; // [esp+2Ch] [ebp-108h] BYREF

  v47 = 0;
  v4 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v31) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v31);
    if ( Dst != 0x4B4F4C42 )
    {
      v5 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v5 )
      {
        v6 = TESForm_LookupByFormID(*v5);
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)(
                             v6,
                             *((unsigned __int8 *)v5 + 9),
                             *(UInt32 *)((char *)v5 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Dialogue\\MenuTopic.cpp",
          0x235,
          *v5,
          v7,
          v28,
          v33);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Dialogue\\MenuTopic.cpp",
          0x235,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v4 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v32) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v47, v32);
  }
  _memset(a2, 0, sizeof(a2));
  LODWORD(v31) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&a1 + 3, v31);
  if ( HIBYTE(a1) )
  {
    LODWORD(v34) = HIBYTE(a1);
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, a2, v34);
    BSStringT_Set(this, a2, 0);
  }
  LODWORD(v34) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 1, v34);
  LODWORD(v35) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 4, v35);
  LODWORD(v36) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x21, v36);
  LODWORD(v37) = 4;
  SaveLoad_LoadFormID(v48, v37, v41, v44, a1);
  v8 = TESForm_LookupByFormID(a1);
  v9 = OblivionDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESQuest `RTTI Type Descriptor',
         0);
  LODWORD(v26) = 4;
  *((_DWORD *)this + 5) = v9;
  SaveLoad_LoadFormID(&v47, v26, v38, v40, v42);
  v10 = TESForm_LookupByFormID(v45);
  v11 = OblivionDynamicCast(
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESTopic `RTTI Type Descriptor',
          0);
  LODWORD(v25) = 4;
  *((_DWORD *)this + 9) = v11;
  SaveLoad_LoadFormID(&a1, v25, v27, v29, v39);
  v12 = TESForm_LookupByFormID(v43);
  *((_DWORD *)this + 6) = OblivionDynamicCast(
                            v12,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESTopicInfo `RTTI Type Descriptor',
                            0);
  if ( sub_45A170() )
  {
    v13 = SaveLoad_CurrentSavegame;
    v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 )
    {
      v16 = TESForm_LookupByFormID(*v14);
      v17 = v30 + v4;
      if ( v15 <= v17 )
      {
        if ( v15 < v17 )
        {
          v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v16->vtbl->GetEditorName)(
                                v16,
                                *((unsigned __int8 *)v14 + 9),
                                *(UInt32 *)((char *)v14 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v4 + v30 - v15,
            ".\\Dialogue\\MenuTopic.cpp",
            0x259,
            *v14,
            v19,
            v22,
            v24);
        }
      }
      else
      {
        v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v16->vtbl->GetEditorName)(
                              v16,
                              *((unsigned __int8 *)v14 + 9),
                              *(UInt32 *)((char *)v14 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v15 - v30 - v4,
          ".\\Dialogue\\MenuTopic.cpp",
          0x259,
          *v14,
          v18,
          v21,
          v23);
      }
    }
    else
    {
      v20 = v30 + v4;
      if ( v15 <= v20 )
      {
        if ( v15 < v20 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v4 + v30 - v15,
            ".\\Dialogue\\MenuTopic.cpp",
            0x259,
            LOBYTE(v13[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v15 - v30 - v4,
          ".\\Dialogue\\MenuTopic.cpp",
          0x259,
          LOBYTE(v13[1].createdObjectList.next));
      }
    }
  }
}
