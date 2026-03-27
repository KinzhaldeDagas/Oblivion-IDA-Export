Ni2DBuffer **__usercall sub_475020@<eax>(double st5_0@<st2>, double a2@<st1>, float a3)
{
  Ni2DBuffer **v4; // ebx
  UInt32 v5; // ebp
  UInt32 *v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  char LoadFormID; // al
  TESForm *v10; // eax
  void *v11; // esi
  IOTask *v12; // eax
  Ni2DBuffer **v13; // eax
  const char *v14; // eax
  TESSaveLoad *v15; // ecx
  UInt32 *v16; // edi
  UInt32 v17; // esi
  TESForm *v18; // ecx
  UInt32 v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  UInt32 v22; // edx
  int v24; // [esp+0h] [ebp-44h]
  int v25; // [esp+0h] [ebp-44h]
  size_t v26; // [esp+4h] [ebp-40h]
  int v27; // [esp+4h] [ebp-40h]
  int v28; // [esp+4h] [ebp-40h]
  int v29; // [esp+8h] [ebp-3Ch]
  size_t v30; // [esp+Ch] [ebp-38h]
  size_t v31; // [esp+Ch] [ebp-38h]
  int v32; // [esp+Ch] [ebp-38h]
  int v33; // [esp+14h] [ebp-30h]
  int v34; // [esp+18h] [ebp-2Ch]
  int v35; // [esp+1Ch] [ebp-28h] BYREF
  unsigned __int16 v36; // [esp+20h] [ebp-24h]
  char v37[4]; // [esp+24h] [ebp-20h]
  int v38; // [esp+28h] [ebp-1Ch] BYREF
  char ArgList[4]; // [esp+2Ch] [ebp-18h] BYREF
  int Dst; // [esp+30h] [ebp-14h] BYREF
  unsigned int v41; // [esp+38h] [ebp-Ch]
  TESObjectREFR *v42; // [esp+40h] [ebp-4h]
  AnimSequenceSingle *retaddr; // [esp+44h] [ebp+0h]

  v4 = 0;
  v38 = 0;
  v5 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v30) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v30);
    if ( Dst != 0x4B4F4C42 )
    {
      v6 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v6 )
      {
        v7 = TESForm_LookupByFormID(*v6);
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)(
                             v7,
                             *((unsigned __int8 *)v6 + 9),
                             *(UInt32 *)((char *)v6 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Animation.cpp",
          0xF7E,
          *v6,
          v8,
          v29,
          v32);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Animation.cpp",
          0xF7E,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v31) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v38, v31);
  }
  LODWORD(v30) = 4;
  LoadFormID = SaveLoad_LoadFormID(ArgList, v30, v33, v34, v35);
  if ( *(_DWORD *)v37 || LoadFormID )
  {
    LODWORD(v26) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v35, v26);
    if ( *(_DWORD *)v37
      && (v10 = TESForm_LookupByFormID(*(UInt32 *)v37),
          (v11 = OblivionDynamicCast(
                   v10,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESIdleForm `RTTI Type Descriptor',
                   0)) != 0) )
    {
      v12 = (IOTask *)FormHeapAlloc(0x2Cu);
      *(_DWORD *)ArgList = v12;
      v41 = 0;
      if ( v12 )
        v13 = (Ni2DBuffer **)sub_474C50(v12, (UInt32)v11, 4u, (BSTask *)1, v42, 1);
      else
        v13 = 0;
      v41 = 0xFFFFFFFF;
      v4 = v13;
      sub_474E90(v13, st5_0, a2, a3, a3, retaddr);
    }
    else
    {
      v14 = v42->vtbl->super.GetEditorName(v42);
      PrintError("Could not find IdleForm %08X when loading actor %s", *(_DWORD *)v37, v14);
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, (unsigned __int16)v35);
    }
  }
  if ( sub_45A170() )
  {
    v15 = SaveLoad_CurrentSavegame;
    v16 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 )
    {
      v18 = TESForm_LookupByFormID(*v16);
      v19 = v5 + v36;
      if ( v17 <= v19 )
      {
        if ( v17 < v19 )
        {
          v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                                v18,
                                *((unsigned __int8 *)v16 + 9),
                                *(UInt32 *)((char *)v16 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v5 + v36 - v17,
            "..\\TES Shared\\Animation.cpp",
            0xF99,
            *v16,
            v21,
            v25,
            v28);
        }
      }
      else
      {
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                              v18,
                              *((unsigned __int8 *)v16 + 9),
                              *(UInt32 *)((char *)v16 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v17 - v36 - v5,
          "..\\TES Shared\\Animation.cpp",
          0xF99,
          *v16,
          v20,
          v24,
          v27);
      }
    }
    else
    {
      v22 = v36 + v5;
      if ( v17 <= v22 )
      {
        if ( v17 < v22 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + v36 - v17,
            "..\\TES Shared\\Animation.cpp",
            0xF99,
            LOBYTE(v15[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v17 - v36 - v5,
          "..\\TES Shared\\Animation.cpp",
          0xF99,
          LOBYTE(v15[1].createdObjectList.next));
      }
    }
  }
  return v4;
}
