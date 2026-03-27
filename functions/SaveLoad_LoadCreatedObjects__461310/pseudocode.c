void __userpurge SaveLoad_LoadCreatedObjects(
        TESSaveLoad *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        _DWORD *a5)
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
  int v14; // ebx
  TESForm *v15; // eax
  int v16; // esi
  char v17; // bl
  TESWorldSpace **v18; // ecx
  int v19; // edi
  TESForm *v20; // eax
  TESForm *v21; // esi
  UInt32 refID; // eax
  Data *v23; // [esp+14h] [ebp-40h]
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

  v5 = this;
  if ( this->createdObjectList.next )
  {
    do
    {
      next = v5->createdObjectList.next->next;
      FormHeapFree((unsigned int)v5->createdObjectList.next);
      v5->createdObjectList.next = next;
    }
    while ( next );
  }
  v7 = a5;
  v5->createdObjectList.formID = 0;
  v8 = (void (__cdecl *)(_DWORD *, unsigned int *, int, unsigned int *, int))a5[1];
  i = 1;
  v8(a5, &v25, 4, &i, 1);
  if ( v25 )
  {
    v5->flags |= 0x20000u;
    v9 = (Data *)FormHeapAlloc(0x41Cu);
    v27 = (int)v9;
    v35 = 0;
    if ( v9 )
    {
      v10 = TESFile_constr(v9, 0, 0, 0);
      v23 = v10;
    }
    else
    {
      v23 = 0;
      v10 = 0;
    }
    v35 = 0xFFFFFFFF;
    sub_44FFF0(v10, a5);
    for ( i = 0; i < v25; ++i )
    {
      v11 = sub_42BC00(v7);
      v12 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1];
      v13 = (char *)v11;
      v27 = 1;
      v12(v7, v32, 0x14, &v27, 1);
      TESFIle_JumpToRecord(v10, v13);
      if ( TESDataHandler_IsFormIDCreated_(ArgList[0]) )
      {
        v14 = ArgList[0];
        v15 = TESForm_LookupByFormID(ArgList[0]);
        if ( v15 )
          sub_45C7A0((char *)v5, v15);
        else
          sub_452DF0(v5->unk000[0], v14, 1);
        v16 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v17 = *(_BYTE *)(v16 + 0x184);
        v18 = (TESWorldSpace **)TESDataHandler;
        *(_BYTE *)(v16 + 0x184) = 1;
        TESDataHandler_LoadFormRecord(v18, a2, a3, a4, v23, 0);
        *(_BYTE *)(v16 + 0x184) = v17;
        v19 = sub_42BC00(v7) - (_DWORD)v13;
        v20 = TESForm_LookupByFormID(ArgList[0]);
        v21 = v20;
        if ( v20 )
        {
          if ( v20 != (TESForm *)0xFFFFFFF0 )
            BSSimpleList_Clear(&v20->member.modlist.data);
          v21->vtbl->DoPostFixup(v21);
          SaveLoad_AddCreatedObj((char *)this, (int)v21);
          if ( this->unk030[4] )
          {
            refID = v21->member.refID;
            type = v21->member.type;
            v28 = refID;
            v31 = v19;
            v30 = 0;
            sub_45AD00(&v28);
          }
          v5 = this;
        }
        else
        {
          PrintError("Could not construct created base object with form ID %08X", ArgList[0]);
          v5 = this;
        }
        v7 = a5;
        v10 = v23;
      }
      else
      {
        TESFIle_JumpToRecord(v10, &v13[v33]);
      }
    }
    sub_44FFF0(v10, 0);
    if ( v10 )
    {
      TESFile_destr((CHAR *)v10);
      FormHeapFree((unsigned int)v10);
    }
    v5->flags &= ~0x20000u;
  }
}
