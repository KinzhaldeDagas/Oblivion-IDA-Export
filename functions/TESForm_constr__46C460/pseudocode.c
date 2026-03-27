TESForm *__thiscall TESForm_constr(TESForm *this)
{
  TESForm *v1; // esi
  int v2; // edi
  bool v3; // zf
  char v4; // cl
  const char **v5; // ebp
  int v6; // esi
  unsigned int i; // ebx
  unsigned int refID; // eax
  int v9; // eax
  char v11; // [esp+Bh] [ebp-9h]
  int v12; // [esp+Ch] [ebp-8h]

  v1 = this;
  v2 = 0;
  v3 = TESForm_FormTypeListInitialized == 0;
  this->vtbl = (TESFormVtbl *)&TESForm::`vftable';
  this->member.modlist.data = 0;
  this->member.modlist.next = 0;
  if ( v3 )
  {
    v4 = 0;
    v11 = bDisableWarning_MESSAGES;
    bDisableWarning_MESSAGES = 1;
    v5 = (const char **)off_B05E04;
    v12 = 0x45;
    do
    {
      v5[1] = (const char *)(**v5 | (((*v5)[1] | (((*v5)[2] | ((*v5)[3] << 8)) << 8)) << 8));
      if ( *((unsigned __int8 *)v5 + 0xFFFFFFFC) != v2 )
      {
        PrintError("formEnumString[ %d ].cFormID in TESForm.cpp is out of order.", v2);
        v4 = 1;
      }
      v6 = 0;
      for ( i = 0; i < 0xCF; i += 3 )
      {
        if ( v2 != v6 && v5[1] == (const char *)dword_B05E08[i] )
        {
          PrintError(
            "formEnumString[ %d ] and formEnumString[ %d ] have the same iFormString %s in TESForm.cpp.",
            v2,
            v6,
            *v5);
          v4 = 1;
        }
        ++v6;
      }
      ++v2;
      v5 += 3;
      --v12;
    }
    while ( v12 );
    bDisableWarning_MESSAGES = v11;
    if ( v4 )
      sub_404EC0("You must fix the problems in TESForm.cpp to run this game.");
    v1 = this;
    TESForm_FormTypeListInitialized = 1;
  }
  v1->member.type = kFormType_None;
  v1->member.flags = kFormFlags_Linked;
  v1->member.refID = 0;
  if ( TESDataHandler )
  {
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
    {
      v1->member.refID = TESDataHandler_ReserveNextFormID((int *)TESDataHandler);
      if ( *(_DWORD *)(TESDataHandler + 0x8C4) )
        sub_46B6C0(v1, *(Data **)(TESDataHandler + 0x8C4));
      refID = v1->member.refID;
      if ( refID <= 0x7FF )
      {
        if ( (v1->member.flags & 0x4000) == 0 )
        {
          if ( refID )
            NiTMap_RemoveAt(&TESForm_FormIDMap, v1->member.refID);
          if ( v1->member.refID )
            TESDataHandler_ReleaseFormID((_DWORD *)TESDataHandler, v1->member.refID);
          NiTMap_SetAt(&TESForm_FormIDMap, 0x800, (int)v1);
        }
        v1->member.refID = 0x800;
      }
    }
  }
  v9 = v1->member.refID;
  if ( v9 )
    NiTMap_SetAt(&TESForm_FormIDMap, v9, (int)v1);
  return v1;
}
