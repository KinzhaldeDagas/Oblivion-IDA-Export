void __thiscall SaveLoad_LoadCreatedObjects(TESSaveLoad *this, _DWORD *a5)
{
  TESSaveLoad *v5; // esi
  CreatedObjectNode *next; // edi
  _DWORD *v7; // edi
  void (__cdecl *v8)(_DWORD *, unsigned int *, int, unsigned int *, int); // edx
  Data *v9; // eax
  Data *v10; // ebx
  int v11; // eax
  void (__cdecl *v12)(_DWORD *, char *, int, int *, int); // edx
  char *v13; // ebp
  unsigned int v14; // ebx
  TESForm *v15; // eax
  int v16; // esi
  char v17; // bl
  TESDataHandler *v18; // ecx
  int v19; // edi
  TESForm *v20; // eax
  TESForm *v21; // esi
  UInt32 refID; // eax
  Data *file; // [esp+14h] [ebp-40h]
  unsigned int v25; // [esp+1Ch] [ebp-38h] BYREF
  unsigned int i; // [esp+20h] [ebp-34h] BYREF
  int v27; // [esp+24h] [ebp-30h] BYREF
  UInt32 v28; // [esp+28h] [ebp-2Ch] BYREF
  TESForm::FormType type; // [esp+2Ch] [ebp-28h]
  int v30; // [esp+2Dh] [ebp-27h]
  __int16 v31; // [esp+32h] [ebp-22h]
  char v32[4]; // [esp+34h] [ebp-20h] BYREF
  int v33; // [esp+38h] [ebp-1Ch]
  unsigned int ArgList[2]; // [esp+40h] [ebp-14h]
  unsigned int v35; // [esp+50h] [ebp-4h]

  v5 = this; /*0x461337*/
  if ( this->createdObjectList.next ) /*0x46133f*/
  {
    do /*0x461358*/
    {
      next = v5->createdObjectList.next->next; /*0x461347*/
      FormHeapFree((unsigned int)v5->createdObjectList.next); /*0x46134b*/
      v5->createdObjectList.next = next; /*0x461355*/
    }
    while ( next ); /*0x461358*/
  }
  v7 = a5; /*0x46135a*/
  v5->createdObjectList.formID = 0; /*0x46136c*/
  v8 = (void (__cdecl *)(_DWORD *, unsigned int *, int, unsigned int *, int))a5[1]; /*0x46136f*/
  i = 1; /*0x461373*/
  v8(a5, &v25, 4, &i, 1);                       // Savegame review: reads file-controlled created-object count used as loop bound at 0x4613D2; plugin clamps at 0x461380. /*0x46137b*/
  if ( v25 )                                    // EnginePatch v1: byte-checked SaveLoad_LoadCreatedObjects count guard. Clamps save-controlled UInt32 record count using hard cap and remaining file bytes / 0x14 before the created-object load loop. /*0x461384*/
  {
    v5->flags |= 0x20000u; /*0x46138a*/
    v9 = (Data *)FormHeapAlloc(0x41Cu); /*0x461396*/
    v27 = (int)v9; /*0x46139e*/
    v35 = 0; /*0x4613a4*/
    if ( v9 ) /*0x4613a8*/
    {
      v10 = TESFile_constr(v9, 0, 0, 0); /*0x4613b4*/
      file = v10; /*0x4613b6*/
    }
    else
    {
      file = 0; /*0x4613bc*/
      v10 = 0; /*0x4613c0*/
    }
    v35 = 0xFFFFFFFF; /*0x4613c5*/
    sub_44FFF0(v10, a5); /*0x4613cd*/
    for ( i = 0; i < v25; ++i ) /*0x4613da*/
    {
      v11 = sub_42BC00(v7); /*0x4613e2*/
      v12 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1]; /*0x4613e7*/
      v13 = (char *)v11; /*0x4613ec*/
      v27 = 1; /*0x4613fb*/
      v12(v7, v32, 0x14, &v27, 1); /*0x461403*/
      TESFIle_JumpToRecord(v10, v13); /*0x46140b*/
      if ( TESDataHandler_IsFormIDCreated_(ArgList[0]) ) /*0x46141b*/
      {
        v14 = ArgList[0]; /*0x46142d*/
        v15 = TESForm_LookupByFormID(ArgList[0]); /*0x46142f*/
        if ( v15 ) /*0x461439*/
          TESSaveLoadGame_DeleteForm((TESSaveLoadGame_SerializationView *)v5, v15); /*0x46143e*/
        else
          SaveLoadChangesMap_RemoveChanges((ChangesMap *)v5->unk000[0], v14, 1); /*0x46144a*/
        v16 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x46145c*/
        v17 = *(_BYTE *)(v16 + 0x184); /*0x461463*/
        v18 = g_TESDataHandler; /*0x461469*/
        *(_BYTE *)(v16 + 0x184) = 1; /*0x461472*/
        TESDataHandler_LoadFormRecord(v18, file, 0); /*0x461479*/
        *(_BYTE *)(v16 + 0x184) = v17; /*0x461480*/
        v19 = sub_42BC00(v7) - (_DWORD)v13; /*0x461492*/
        v20 = TESForm_LookupByFormID(ArgList[0]); /*0x461494*/
        v21 = v20; /*0x461499*/
        if ( v20 ) /*0x4614a0*/
        {
          if ( v20 != (TESForm *)0xFFFFFFF0 ) /*0x4614ab*/
            BSSimpleList_Clear(&v20->member.modlist.data); /*0x4614ad*/
          v21->vtbl->DoPostFixup(v21); /*0x4614b9*/
          SaveLoad_AddCreatedObj((char *)this, (int)v21); /*0x4614c2*/
          if ( this->unk030[4] ) /*0x4614c7*/
          {
            refID = v21->member.refID; /*0x4614d1*/
            type = v21->member.type; /*0x4614d4*/
            v28 = refID; /*0x4614dd*/
            v31 = v19; /*0x4614e1*/
            v30 = 0; /*0x4614e6*/
            sub_45AD00(&v28); /*0x4614ee*/
          }
          v5 = this; /*0x4614f3*/
        }
        else
        {
          PrintError("Could not construct created base object with form ID %08X", ArgList[0]); /*0x461557*/
          v5 = this; /*0x46155c*/
        }
        v7 = a5; /*0x4614f5*/
        v10 = file; /*0x4614f9*/
      }
      else
      {
        TESFIle_JumpToRecord(v10, &v13[v33]); /*0x46156e*/
      }
    }
    sub_44FFF0(v10, 0); /*0x461517*/
    if ( v10 ) /*0x46151e*/
    {
      TESFile_destr((CHAR *)v10); /*0x461522*/
      FormHeapFree((unsigned int)v10); /*0x461528*/
    }
    v5->flags &= ~0x20000u; /*0x461530*/
  }
}
