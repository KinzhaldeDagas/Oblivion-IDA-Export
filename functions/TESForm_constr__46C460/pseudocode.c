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

  v1 = this; /*0x46c464*/
  v2 = 0; /*0x46c467*/
  v3 = MEMORY[0xB33C10] == 0; /*0x46c469*/
  this->vtbl = (TESFormVtbl *)&TESForm::`vftable'; /*0x46c470*/
  this->member.modlist.data = 0; /*0x46c47a*/
  this->member.modlist.next = 0; /*0x46c47d*/
  if ( v3 ) /*0x46c480*/
  {
    v4 = 0; /*0x46c48d*/
    v11 = bDisableWarning_MESSAGES; /*0x46c48f*/
    bDisableWarning_MESSAGES = 1; /*0x46c493*/
    v5 = (const char **)off_B05E04; /*0x46c49a*/
    v12 = 0x45; /*0x46c49f*/
    do /*0x46c52d*/
    {
      v5[1] = (const char *)(**v5 | (((*v5)[1] | (((*v5)[2] | ((*v5)[3] << 8)) << 8)) << 8)); /*0x46c4d1*/
      if ( *((unsigned __int8 *)v5 + 0xFFFFFFFC) != v2 ) /*0x46c4da*/
      {
        PrintError("formEnumString[ %d ].cFormID in TESForm.cpp is out of order.", v2); /*0x46c4e2*/
        v4 = 1; /*0x46c4ea*/
      }
      v6 = 0; /*0x46c4ec*/
      for ( i = 0; i < 0xCF; i += 3 ) /*0x46c4ee*/
      {
        if ( v2 != v6 && v5[1] == (const char *)dword_B05E08[i] ) /*0x46c4fd*/
        {
          PrintError( /*0x46c50a*/
            "formEnumString[ %d ] and formEnumString[ %d ] have the same iFormString %s in TESForm.cpp.",
            v2,
            v6,
            *v5);
          v4 = 1; /*0x46c512*/
        }
        ++v6; /*0x46c517*/
      }
      ++v2; /*0x46c522*/
      v5 += 3; /*0x46c525*/
      --v12; /*0x46c528*/
    }
    while ( v12 ); /*0x46c52d*/
    bDisableWarning_MESSAGES = v11; /*0x46c536*/
    if ( v4 ) /*0x46c53d*/
      sub_404EC0("You must fix the problems in TESForm.cpp to run this game."); /*0x46c544*/
    v1 = this; /*0x46c54c*/
    MEMORY[0xB33C10] = 1; /*0x46c550*/
  }
  v1->member.type = kFormType_None;             // TESForm layout evidence: +0x04 formType byte, +0x08 flags, +0x0C refID/FormID. /*0x46c557*/
  v1->member.flags = kFormFlags_Linked; /*0x46c55b*/
  v1->member.refID = 0; /*0x46c562*/
  if ( g_TESDataHandler ) /*0x46c569*/
  {
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x46c586*/
                     + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                   + 0x184) )
    {
      v1->member.refID = TESDataHandler_ReserveNextFormID((int *)g_TESDataHandler); /*0x46c594*/
      if ( *(_DWORD *)(g_TESDataHandler + 0x8C4) ) /*0x46c59d*/
        TESForm_SetFile(v1, *(Data **)(g_TESDataHandler + 0x8C4)); /*0x46c5aa*/
      refID = v1->member.refID; /*0x46c5af*/
      if ( refID <= 0x7FF ) /*0x46c5b7*/
      {
        if ( (v1->member.flags & 0x4000) == 0 ) /*0x46c5c9*/
        {
          if ( refID ) /*0x46c5cd*/
            NiTMap_RemoveAt(&TESForm_FormIDMap, v1->member.refID); /*0x46c5d5*/
          if ( v1->member.refID ) /*0x46c5da*/
            TESDataHandler_ReleaseFormID((_DWORD *)g_TESDataHandler, v1->member.refID); /*0x46c5e8*/
          NiTMap_SetAt(&TESForm_FormIDMap, 0x800, (int)v1); /*0x46c5f8*/
        }
        v1->member.refID = 0x800; /*0x46c5fd*/
      }
    }
  }
  v9 = v1->member.refID; /*0x46c604*/
  if ( v9 ) /*0x46c609*/
    NiTMap_SetAt(&TESForm_FormIDMap, v9, (int)v1); /*0x46c612*/
  return v1; /*0x46c617*/
}
