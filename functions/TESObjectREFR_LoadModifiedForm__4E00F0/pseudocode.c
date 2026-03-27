void __userpurge TESObjectREFR_LoadModifiedForm(
        TESChildCELL *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a1)
{
  int v8; // ebp
  UInt32 *v9; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  BSExtraDataVtbl *v12; // edi
  TESContainer *Container; // edi
  int ***ContainerExtraDataForRef; // eax
  int v15; // eax
  TESSaveLoad *v16; // ecx
  bool v17; // al
  ExtraDataList *v18; // ecx
  int v19; // eax
  ExtraDataList *v20; // ecx
  bool v21; // al
  ExtraDataList *v22; // ecx
  TESSaveLoad *v23; // ecx
  UInt32 *v24; // edi
  UInt32 v25; // esi
  TESForm *v26; // ecx
  UInt32 v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  UInt32 v30; // edx
  int v31; // [esp+4h] [ebp-20h]
  int v32; // [esp+4h] [ebp-20h]
  int v33; // [esp+4h] [ebp-20h]
  size_t v34; // [esp+8h] [ebp-1Ch]
  size_t v35; // [esp+8h] [ebp-1Ch]
  int v36; // [esp+8h] [ebp-1Ch]
  int v37; // [esp+8h] [ebp-1Ch]
  int v38; // [esp+8h] [ebp-1Ch]
  int v39; // [esp+1Ch] [ebp-8h] BYREF
  int Dst; // [esp+20h] [ebp-4h] BYREF
  int v41; // [esp+28h] [ebp+4h]

  TESForm_LoadModifiedForm((TESForm *)this, a5, a1);
  if ( !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) && (a5 & 0x10000) != 0 )
    sub_46AA00(this, 1);
  v8 = 0;
  v39 = 0;
  v41 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v34) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v34);
    if ( Dst != 0x4B4F4C42 )
    {
      v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v9 )
      {
        v10 = TESForm_LookupByFormID(*v9);
        v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)(
                              v10,
                              *((unsigned __int8 *)v9 + 9),
                              *(UInt32 *)((char *)v9 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x722,
          *v9,
          v11,
          v31,
          v36);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x722,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    LODWORD(v35) = 2;
    v41 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v39, v35);
    v8 = v41;
  }
  if ( (SaveLoad_CurrentSavegame->flags & 0x80) != 0 )
  {
    v12 = sub_420260((ExtraDataList *)(this + 0x11));
    if ( v12 )
    {
      if ( sub_420340((ExtraDataList *)(this + 0x11)) )
        TESForm_SetEnabled_((TESForm *)this, ((int)v12[1].Destructor & 0x800) == 0);
      else
        TESForm_SetEnabled_((TESForm *)this, ((int)v12[1].Destructor & 0x800) != 0);
    }
    v8 = v41;
  }
  if ( (a5 & 1) != 0 && ((*(_DWORD *)(this + 2) & 0x800) != 0 || (*(_DWORD *)(this + 2) & 0x20) != 0) )
    (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0);
  if ( (a5 & 0x8000000) != 0 )
  {
    Container = TESObjectREFR_GetContainer((TESObjectREFR *)this);
    if ( Container )
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
      {
        if ( Actor_IsCreature((Actor *)this) )
        {
          UnequipWeapon((TESObjectREFR *)this, a5, (int)Container, st5_0, a3, a4);
          a4 = sub_4DC8F0((TESObjectREFR *)this, a4, st5_0, a3, v8, 1);
          UnequipLight((TESObjectREFR *)this, st5_0, a3, a4);
          sub_4DCCF0((TESObjectREFR *)this, v8, st5_0, a3, a4);
        }
      }
      ExtraDataList_RemoveContainerExtraData((_DWORD *)this + 0x11);
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
        sub_5E9690(this);
      ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this);
      ContainerExtraData_LoadModified(ContainerExtraDataForRef, st5_0, a3, a4);
    }
  }
  sub_425900((ExtraDataList *)(this + 0x11), a1 | a5, (TESObjectREFR *)this);
  v15 = 0x177577E0;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x43u )
    v15 = 0x177577F0;
  if ( (v15 & a5) != 0 || (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
    ExtraDataList_LoadModified((ExtraDataList *)(this + 0x11), st5_0, a3, a4, a5, a1, (TESObjectREFR *)this);
  if ( (a5 & 0x2000000) != 0 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
  {
    LODWORD(v34) = 2;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1, v34);
    if ( (_WORD)a1 )
      sub_459020(SaveLoad_CurrentSavegame, this, a1);
  }
  if ( (a5 & 0x808) != 0 )
  {
    LODWORD(v34) = 2;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1, v34);
    if ( (_WORD)a1 )
    {
      v16 = SaveLoad_CurrentSavegame;
      if ( (a5 & 0x800) != 0 )
        SaveLoad_AdvanceBufferOffset(v16, (unsigned __int16)a1);
      else
        sub_459310(v16, this, a1);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x43u && (a5 & 0x10) != 0 )
  {
    LODWORD(v34) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0xE), v34);
    sub_4DB520((MobileObject *)this, *((float *)this + 0xE));
    v8 = v41;
  }
  if ( (a5 & 0x40000) != 0 )
  {
    v17 = sub_41F830((ExtraDataList *)(this + 0x11), 8);
    v18 = (ExtraDataList *)(this + 0x11);
    if ( v17 )
      sub_423E50(v18, 8);
    else
      sub_423DF0(v18, 8);
  }
  if ( (a5 & 0x80000) != 0 )
  {
    sub_420FF0((_DWORD *)this + 0x11);
    v19 = a5;
    if ( !a5 )
      v19 = sub_4533F0(SaveLoad_CurrentSavegame, (int)this, 0);
    v20 = (ExtraDataList *)(this + 0x11);
    if ( (v19 & 0x40000) != 0 )
      v21 = !sub_41F830(v20, 8);
    else
      v21 = sub_41F830(v20, 8);
    v22 = (ExtraDataList *)(this + 0x11);
    if ( v21 )
      sub_424DE0(v22, "Close");
    else
      sub_424DE0(v22, "Open");
  }
  if ( sub_45A170() )
  {
    v23 = SaveLoad_CurrentSavegame;
    v24 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v25 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v24 )
    {
      v26 = TESForm_LookupByFormID(*v24);
      v27 = v8 + (unsigned __int16)v39;
      if ( v25 <= v27 )
      {
        if ( v25 < v27 )
        {
          v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v26->vtbl->GetEditorName)(
                                v26,
                                *((unsigned __int8 *)v24 + 9),
                                *(UInt32 *)((char *)v24 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v8 + (unsigned __int16)v39 - v25,
            "..\\TES Shared\\TESObjectREFR.cpp",
            0x79A,
            *v24,
            v29,
            v33,
            v38);
        }
      }
      else
      {
        v28 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v26->vtbl->GetEditorName)(
                              v26,
                              *((unsigned __int8 *)v24 + 9),
                              *(UInt32 *)((char *)v24 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v25 - (unsigned __int16)v39 - v8,
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x79A,
          *v24,
          v28,
          v32,
          v37);
      }
    }
    else
    {
      v30 = (unsigned __int16)v39 + v8;
      if ( v25 <= v30 )
      {
        if ( v25 < v30 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v8 + (unsigned __int16)v39 - v25,
            "..\\TES Shared\\TESObjectREFR.cpp",
            0x79A,
            LOBYTE(v23[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v25 - (unsigned __int16)v39 - v8,
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x79A,
          LOBYTE(v23[1].createdObjectList.next));
      }
    }
  }
}
