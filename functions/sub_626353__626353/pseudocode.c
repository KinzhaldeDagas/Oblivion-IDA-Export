// positive sp value has been detected, the output may be wrong!
char __usercall sub_626353@<al>(
        int a1@<edx>,
        int a2@<ebx>,
        TESForm::ModReferenceList *a3@<ebp>,
        _DWORD *a4@<esi>,
        double a5@<st0>)
{
  TESForm *v5; // eax
  TESForm::ModReferenceList *v6; // eax
  unsigned int ***v7; // eax
  __int16 v8; // ax
  TESForm::ModReferenceList *v9; // ecx
  bool v10; // zf
  UInt32 v11; // eax
  TESSaveLoad *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // ecx
  const char *v16; // eax
  const char *v17; // eax
  UInt32 v18; // edx
  int v20; // [esp-58h] [ebp-58h]
  int v21; // [esp-58h] [ebp-58h]
  size_t v22; // [esp-54h] [ebp-54h]
  size_t v23; // [esp-54h] [ebp-54h]
  size_t v24; // [esp-54h] [ebp-54h]
  size_t v25; // [esp-54h] [ebp-54h]
  int v26; // [esp-54h] [ebp-54h]
  int v27; // [esp-54h] [ebp-54h]
  size_t v28; // [esp-4Ch] [ebp-4Ch]
  size_t v29; // [esp-44h] [ebp-44h]
  int v30; // [esp-44h] [ebp-44h]
  TESForm *v31; // [esp-40h] [ebp-40h]
  int v32; // [esp-40h] [ebp-40h]
  TESForm v33; // [esp-3Ch] [ebp-3Ch] BYREF
  UInt32 v34; // [esp-1Ch] [ebp-1Ch]
  TESForm v35; // [esp-18h] [ebp-18h] BYREF

  a4[0x12] = a1;
  TESForm_LoadFormIDFromCurrentSaveGame(
    v31,
    *(size_t *)&v33.vtbl,
    v33.member.flags,
    v33.member.refID,
    (int)v33.member.modlist.data);
  LODWORD(v29) = 4;
  a4[0x17] = *(_DWORD *)&v35.member.type;
  TESForm_LoadFormIDFromCurrentSaveGame(
    (TESForm *)&v35.member.flags,
    v29,
    (int)v33.vtbl,
    *(int *)&v33.member.type,
    v33.member.flags);
  LODWORD(v28) = 4;
  a4[0x18] = v35.vtbl;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v35.member, v28, v30, v32, (int)v33.vtbl);
  v5 = TESForm_LookupByFormID(v34);
  a4[0x10] = OblivionDynamicCast(
               v5,
               (int)a3,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESTopic `RTTI Type Descriptor',
               (int)a3);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x20u )
  {
    LODWORD(v22) = 2;
    TESForm_LoadDataFromCurrentSaveGame(&v33, v22);
    if ( LOWORD(v33.vtbl) != (_WORD)a3 )
    {
      v6 = (TESForm::ModReferenceList *)FormHeapAlloc(0x10u);
      v35.member.flags = (TESForm::FormFlags)v6;
      v35.member.modlist.next = a3;
      if ( v6 == a3 )
        v7 = 0;
      else
        v7 = (unsigned int ***)sub_6B7410(v6);
      v35.member.modlist.next = (TESForm::ModReferenceList *)0xFFFFFFFF;
      a4[0x14] = v7;
      sub_6B7840(v7, a5);
      LODWORD(v22) = 2;
      TESForm_LoadDataFromCurrentSaveGame(&v35, v22);
      if ( LOWORD(v35.vtbl) == 0xFFFF )
        a4[0x15] = a3;
      else
        a4[0x15] = sub_6B7560((_DWORD *)a4[0x14], (__int16)v35.vtbl);
      LODWORD(v23) = 2;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v35.member, v23);
      v8 = *(_WORD *)&v35.member.type;
      a4[0x16] = *(__int16 *)&v35.member.type;
      v9 = (TESForm::ModReferenceList *)a4[0x15];
      if ( v9 == a3 || v8 == (__int16)0xFFFF )
        a4[0x16] = a3;
      else
        a4[0x16] = sub_6B7CA0(v9, v8);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u )
  {
    LODWORD(v22) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v35.member.flags, v22);
    v10 = v35.member.flags == (_DWORD)a3;
    a4[0x14] = v35.member.flags;
    if ( v10 )
    {
      a4[0x15] = a3;
      a4[0x16] = a3;
    }
    else
    {
      LODWORD(v24) = 2;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v33.member, v24);
      LODWORD(v25) = 2;
      a4[0x15] = *(__int16 *)&v33.member.type;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v33.member.flags, v25);
      a4[0x16] = SLOWORD(v33.member.flags);
    }
  }
  LOBYTE(v11) = sub_45A170();
  if ( (_BYTE)v11 )
  {
    v12 = SaveLoad_CurrentSavegame;
    v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 == (UInt32 *)a3 )
    {
      LOBYTE(v11) = v33.member.refID;
      v18 = LOWORD(v33.member.refID) + a2;
      if ( v14 <= v18 )
      {
        if ( v14 < v18 )
          LOBYTE(v11) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          a2 + LOWORD(v33.member.refID) - v14,
                          ".\\AI\\DialoguePackage.cpp",
                          0x1D1,
                          LOBYTE(v12[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v11) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v14 - LOWORD(v33.member.refID) - a2,
                        ".\\AI\\DialoguePackage.cpp",
                        0x1D1,
                        LOBYTE(v12[1].createdObjectList.next));
      }
    }
    else
    {
      v15 = TESForm_LookupByFormID(*v13);
      v11 = a2 + LOWORD(v33.member.refID);
      if ( v14 <= v11 )
      {
        if ( v14 < v11 )
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          LOBYTE(v11) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          a2 + LOWORD(v33.member.refID) - v14,
                          ".\\AI\\DialoguePackage.cpp",
                          0x1D1,
                          *v13,
                          v17,
                          v21,
                          v27);
        }
      }
      else
      {
        v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                              v15,
                              *((unsigned __int8 *)v13 + 9),
                              *(UInt32 *)((char *)v13 + 5));
        LOBYTE(v11) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v14 - LOWORD(v33.member.refID) - a2,
                        ".\\AI\\DialoguePackage.cpp",
                        0x1D1,
                        *v13,
                        v16,
                        v20,
                        v26);
      }
    }
  }
  return v11;
}
