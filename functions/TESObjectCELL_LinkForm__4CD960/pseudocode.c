// Verified cell linking: calls ExtraDataList_ResolveLoadedFormIDs before ownership policy. XOWN case 0x27 rebases the stored FormID, resolves it via TESForm_LookupByFormID, and stores the TESForm*; missing owners remove the extra. For an exterior cell (interior flag bit 0 clear) with direct XOWN, LinkForm logs a removal and clears XOWN, XRNK, and XGLB. Interior cells keep those ownership fields.
char __usercall TESObjectCELL_LinkForm@<al>(TESForm *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *v5; // edi
  TESForm *v6; // ebp
  float *vtbl; // ebx
  TESSaveLoadGame_SerializationView *v8; // eax
  unsigned int flags; // ebx
  double Game_FinalizeLoadedForms; // st7
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // eax
  int *v14; // eax
  UInt32 refID; // ebp
  const char *v16; // eax
  int v17; // ebp
  bool v18; // zf
  _DWORD *v19; // ecx
  int *v20; // eax
  int v21; // ebx
  UInt32 v22; // edi
  int v23; // eax
  const char *v24; // eax
  int v25; // edx
  int v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  int v30; // [esp-10h] [ebp-38h]
  int v31; // [esp-Ch] [ebp-34h]
  int v32; // [esp-8h] [ebp-30h]
  int v33; // [esp-8h] [ebp-30h]
  const char *v34; // [esp-4h] [ebp-2Ch]
  int v35; // [esp-4h] [ebp-2Ch]
  int northRotation; // [esp+0h] [ebp-28h]
  int northRotationa; // [esp+0h] [ebp-28h]
  int northRotationb; // [esp+0h] [ebp-28h]
  char v39; // [esp+17h] [ebp-11h]
  int v40; // [esp+18h] [ebp-10h]
  const char *v41; // [esp+1Ch] [ebp-Ch]
  float v42; // [esp+20h] [ebp-8h]
  int v43; // [esp+20h] [ebp-8h]
  int v44; // [esp+24h] [ebp-4h]

  v5 = this + 3; /*0x4cd969*/
  v6 = 0; /*0x4cd96c*/
  if ( this != (TESForm *)0xFFFFFFB8 )
  {
    do
    {
      if ( !*(_DWORD *)&v5->member.type && !v5->vtbl ) /*0x4cd97c*/
        break; /*0x4cd97f*/
      vtbl = (float *)v5->vtbl; /*0x4cd985*/
      if ( ((int)v5->vtbl->super.CopyFromBase & 8) == 0 ) /*0x4cd98f*/
      {
        a4 = ((double (__usercall *)@<st0>(TESFormVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))*(_DWORD *)(*(_DWORD *)vtbl + 0x6C))( /*0x4cd998*/
               v5->vtbl,
               a4,
               a3,
               a2);
        TESSaveLoadGame_LoadForm(g_TESSaveLoadGame, a2, a3, a4, (int)vtbl); /*0x4cd9a1*/
      }
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 /*0x4cd9be*/
        && (*(int (__thiscall **)(float *))(*(_DWORD *)vtbl + 0x170))(vtbl) == MEMORY[0xB35EB8] )
      {
        v42 = vtbl[0xA] * dbl_A3D360; /*0x4cd9cd*/
        ExtraDataList_SetNorthRotation((ExtraDataList *)this + 2, v42); /*0x4cd9d8*/
      }
      if ( (this->member.flags & 0x400) != 0 || (TESForm *)Shared_GetDwordAtOffset40(vtbl) == this )
      {
        v6 = v5; /*0x4cd9ff*/
        v5 = *(TESForm **)&v5->member.type; /*0x4cda01*/
      }
      else
      {
        v5 = v6 ? *(TESForm **)&v6->member.type : this + 3;
      }
    }
    while ( v5 );
  }
  LOBYTE(v8) = sub_45A500(g_TESSaveLoadGame); /*0x4cda12*/
  if ( (_BYTE)v8 ) /*0x4cda19*/
  {
    TESSaveLoadGame_LoadReferencesForCell(g_TESSaveLoadGame, (TESObjectCELL *)this); /*0x4cda22*/
    v8 = g_TESSaveLoadGame; /*0x4cda27*/
    flags = g_TESSaveLoadGame->flags; /*0x4cda2c*/
    if ( (flags & 0x100) == 0 ) /*0x4cda37*/
    {
      if ( *(_DWORD *)v8->unknown1C ) /*0x4cda39*/
      {
        v8->flags |= 0x80u; /*0x4cda46*/
        Game_FinalizeLoadedForms = TESSaveLoadGame_FinalizeLoadedForms(g_TESSaveLoadGame, a3, a2, a4, 0, 0, 0); /*0x4cda59*/
        sub_461030(g_TESSaveLoadGame, a2, a3, Game_FinalizeLoadedForms, 0); /*0x4cda66*/
        v8 = g_TESSaveLoadGame; /*0x4cda6d*/
        if ( (flags & 0x80) != 0 ) /*0x4cda72*/
          v8->flags |= 0x80u; /*0x4cda74*/
        else
          v8->flags &= ~0x80u; /*0x4cda79*/
      }
    }
  }
  if ( (this->member.flags & 8) == 0 ) /*0x4cda89*/
  {
    v44 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x4cda9a*/
    v11 = 0; /*0x4cdaa1*/
    v39 = bDisableWarning_MESSAGES; /*0x4cdaa6*/
    bDisableWarning_MESSAGES = 1; /*0x4cdaaa*/
    *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = 0; /*0x4cdab1*/
    ExtraDataList_ResolveLoadedFormIDs((ExtraDataList *)this + 2, this); /*0x4cdab7*/
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4cdac0*/
      goto LABEL_39; /*0x4cdac0*/
    if ( ExtraDataList_GetOwner((ExtraDataList *)this + 2) ) /*0x4cdac8*/
    {
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v12 = *((_DWORD **)this + 0x14)) == 0 ) /*0x4cdae0*/
      {
        v40 = 0; /*0x4cdaf9*/
        v41 = "NONE"; /*0x4cdafd*/
      }
      else
      {
        v40 = v12[3]; /*0x4cdae7*/
        v41 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v12 + 0xD4))(v12); /*0x4cdaf3*/
      }
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v13 = *((_DWORD *)this + 0xF)) == 0 ) /*0x4cdb12*/
        v43 = 0; /*0x4cdb1d*/
      else
        v43 = *(_DWORD *)(v13 + 4); /*0x4cdb17*/
      if ( (*((_BYTE *)this + 0x24) & 1) == 0 ) /*0x4cdb23*/
      {
        v14 = *((int **)this + 0xF); /*0x4cdb25*/
        if ( v14 ) /*0x4cdb2a*/
          v11 = *v14; /*0x4cdb2c*/
      }
      refID = this->member.refID; /*0x4cdb36*/
      v16 = this->vtbl->GetEditorName(this); /*0x4cdb3b*/
      PrintError( /*0x4cdb54*/
        "Removing ownership data on exterior cell '%s' (%08X) at ( %i, %i ) in worldspace '%s' (%08X).",
        v16,
        refID,
        v11,
        v43,
        v41,
        v40);
      ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)this + 2, 0); /*0x4cdb60*/
      ExtraDataList_SetRank((ExtraDataList *)this + 2, 0xFFFFFFFF); /*0x4cdb69*/
      ExtraDataList_SetGlobal((ExtraDataList *)this + 2, 0); /*0x4cdb72*/
    }
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4cdb7b*/
    {
LABEL_39:
      v17 = 0; /*0x4cdb98*/
    }
    else
    {
      FormHeapFree(*((_DWORD *)this + 7)); /*0x4cdb81*/
      v17 = 0; /*0x4cdb89*/
      *((_DWORD *)this + 7) = 0; /*0x4cdb8b*/
      *((_WORD *)this + 0x11) = 0; /*0x4cdb8e*/
      *((_WORD *)this + 0x10) = 0; /*0x4cdb92*/
    }
    TESForm_SetIsLinked(this, 1); /*0x4cdb9e*/
    bDisableWarning_MESSAGES = v39; /*0x4cdbab*/
    v8 = *(TESSaveLoadGame_SerializationView **)&MEMORY[0xB33E90][0xEF8]; /*0x4cdbb0*/
    v18 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] == 0; /*0x4cdbb5*/
    *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = v44; /*0x4cdbb7*/
    if ( !v18 ) /*0x4cdbbd*/
    {
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4cdbca*/
      {
        v28 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4cdc71*/
        LOBYTE(v8) = PrintError( /*0x4cdc79*/
                       "Errors were encountered during InitItem for interior cell:\n"
                       "\n"
                       "Cell '%s' (%08X)\n"
                       "\n"
                       "Check Warnings for details.",
                       v28,
                       northRotationb);
      }
      else
      {
        v19 = *((_DWORD **)this + 0x14); /*0x4cdbcc*/
        v20 = *((int **)this + 0xF); /*0x4cdbd9*/
        if ( v19 ) /*0x4cdbdc*/
        {
          if ( v20 ) /*0x4cdbe3*/
          {
            v17 = v20[1]; /*0x4cdbe5*/
            v21 = *v20; /*0x4cdbec*/
          }
          else
          {
            v21 = 0; /*0x4cdbf0*/
          }
          v22 = this->member.refID; /*0x4cdbf2*/
          v23 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 0xD4))(v19, v19[3]); /*0x4cdbfe*/
          v24 = (const char *)((int (__thiscall *)(TESForm *, UInt32, int, int, int))this->vtbl->GetEditorName)( /*0x4cdc0e*/
                                this,
                                v22,
                                v21,
                                v17,
                                v23);
          LOBYTE(v8) = PrintError( /*0x4cdc16*/
                         "Errors were encountered during InitItem for exterior cell:\n"
                         "\n"
                         "Cell '%s' (%08X) at (%i, %i) in world %s (%08X)\n"
                         "\n"
                         "Check Warnings for details.",
                         v24,
                         v30,
                         v31,
                         v32,
                         v34,
                         northRotation);
        }
        else
        {
          if ( v20 ) /*0x4cdc28*/
            v25 = v20[1]; /*0x4cdc2a*/
          else
            v25 = 0; /*0x4cdc2f*/
          if ( v20 ) /*0x4cdc33*/
            v26 = *v20; /*0x4cdc35*/
          else
            v26 = 0; /*0x4cdc39*/
          v27 = (const char *)((int (__thiscall *)(TESForm *, UInt32, int, int))this->vtbl->GetEditorName)( /*0x4cdc4b*/
                                this,
                                this->member.refID,
                                v26,
                                v25);
          LOBYTE(v8) = PrintError( /*0x4cdc53*/
                         "Errors were encountered during InitItem for exterior cell:\n"
                         "\n"
                         "Cell '%s' (%08X) at (%i, %i) in UNKNOWN world\n"
                         "\n"
                         "Check Warnings for details.",
                         v27,
                         v33,
                         v35,
                         northRotationa);
        }
      }
    }
  }
  return (char)v8; /*0x4cdc1e*/
}
