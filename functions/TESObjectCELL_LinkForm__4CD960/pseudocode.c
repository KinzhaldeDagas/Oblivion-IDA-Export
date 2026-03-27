char __usercall TESObjectCELL_LinkForm@<al>(TESForm *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm *v5; // edi
  TESForm *v6; // ebp
  TESObjectREFR *vtbl; // ebx
  TESSaveLoad *v8; // eax
  UInt32 flags; // ebx
  double v10; // st7
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
  int v36; // [esp+0h] [ebp-28h]
  int v37; // [esp+0h] [ebp-28h]
  int v38; // [esp+0h] [ebp-28h]
  char v39; // [esp+17h] [ebp-11h]
  int v40; // [esp+18h] [ebp-10h]
  const char *v41; // [esp+1Ch] [ebp-Ch]
  float v42; // [esp+20h] [ebp-8h]
  int v43; // [esp+20h] [ebp-8h]
  int v44; // [esp+24h] [ebp-4h]

  v5 = this + 3;
  v6 = 0;
  if ( this != (TESForm *)0xFFFFFFB8 )
  {
    do
    {
      if ( !*(_DWORD *)&v5->member.type && !v5->vtbl )
        break;
      vtbl = (TESObjectREFR *)v5->vtbl;
      if ( ((int)v5->vtbl->super.CopyFromBase & 8) == 0 )
      {
        a4 = ((double (__usercall *)@<st0>(TESFormVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))vtbl->vtbl->super.DoPostFixup)(
               v5->vtbl,
               a4,
               a3,
               a2);
        TESSaveLoadGame_LoadForm(SaveLoad_CurrentSavegame, a2, a3, a4, (int)vtbl);
      }
      if ( (*((_BYTE *)this + 0x24) & 1) != 0
        && vtbl->vtbl->GetBaseForm(vtbl) == (TESForm *)TESDataHandler_g_NorthMarker )
      {
        v42 = vtbl->member.rot.z * dbl_A3D360;
        sub_420C60((ExtraDataList *)this + 2, (BSExtraDataVtbl *)LODWORD(v42));
      }
      if ( (this->member.flags & 0x400) != 0 || TESObjectREFR_GetParentCell(vtbl) == (TESObjectCELL *)this )
      {
        v6 = v5;
        v5 = *(TESForm **)&v5->member.type;
      }
      else
      {
        v5 = v6 ? *(TESForm **)&v6->member.type : this + 3;
      }
    }
    while ( v5 );
  }
  LOBYTE(v8) = sub_45A500(SaveLoad_CurrentSavegame);
  if ( (_BYTE)v8 )
  {
    sub_464910((int)SaveLoad_CurrentSavegame, a2, a3, a4, (TESObjectCELL *)this);
    v8 = SaveLoad_CurrentSavegame;
    flags = SaveLoad_CurrentSavegame->flags;
    if ( (flags & 0x100) == 0 )
    {
      if ( v8->unk01C[0] )
      {
        v8->flags |= 0x80u;
        v10 = sub_45FDA0(SaveLoad_CurrentSavegame, a3, a2, a4, 0, 0, 0);
        sub_461030(SaveLoad_CurrentSavegame, a2, a3, v10, 0);
        v8 = SaveLoad_CurrentSavegame;
        if ( (flags & 0x80) != 0 )
          v8->flags |= 0x80u;
        else
          v8->flags &= ~0x80u;
      }
    }
  }
  if ( (this->member.flags & 8) == 0 )
  {
    v44 = dword_B34D88;
    v11 = 0;
    v39 = bDisableWarning_MESSAGES;
    bDisableWarning_MESSAGES = 1;
    dword_B34D88 = 0;
    ExtraDataList_Link_((ExtraDataList *)this + 2, this);
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
      goto LABEL_39;
    if ( ExtraDataList_GetOwner((ExtraDataList *)this + 2) )
    {
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v12 = *((_DWORD **)this + 0x14)) == 0 )
      {
        v40 = 0;
        v41 = "NONE";
      }
      else
      {
        v40 = v12[3];
        v41 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v12 + 0xD4))(v12);
      }
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v13 = *((_DWORD *)this + 0xF)) == 0 )
        v43 = 0;
      else
        v43 = *(_DWORD *)(v13 + 4);
      if ( (*((_BYTE *)this + 0x24) & 1) == 0 )
      {
        v14 = *((int **)this + 0xF);
        if ( v14 )
          v11 = *v14;
      }
      refID = this->member.refID;
      v16 = this->vtbl->GetEditorName(this);
      PrintError(
        "Removing ownership data on exterior cell '%s' (%08X) at ( %i, %i ) in worldspace '%s' (%08X).",
        v16,
        refID,
        v11,
        v43,
        v41,
        v40);
      ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)this + 2, 0);
      sub_4237E0((ExtraDataList *)this + 2, (BSExtraDataVtbl *)0xFFFFFFFF);
      sub_423720((ExtraDataList *)this + 2, 0);
    }
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    {
LABEL_39:
      v17 = 0;
    }
    else
    {
      FormHeapFree(*((_DWORD *)this + 7));
      v17 = 0;
      *((_DWORD *)this + 7) = 0;
      *((_WORD *)this + 0x11) = 0;
      *((_WORD *)this + 0x10) = 0;
    }
    TESForm_SetIsLinked(this, 1);
    bDisableWarning_MESSAGES = v39;
    v8 = (TESSaveLoad *)dword_B34D88;
    v18 = dword_B34D88 == 0;
    dword_B34D88 = v44;
    if ( !v18 )
    {
      if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
      {
        v28 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID);
        LOBYTE(v8) = PrintError(
                       "Errors were encountered during InitItem for interior cell:\n"
                       "\n"
                       "Cell '%s' (%08X)\n"
                       "\n"
                       "Check Warnings for details.",
                       v28,
                       v38);
      }
      else
      {
        v19 = *((_DWORD **)this + 0x14);
        v20 = *((int **)this + 0xF);
        if ( v19 )
        {
          if ( v20 )
          {
            v17 = v20[1];
            v21 = *v20;
          }
          else
          {
            v21 = 0;
          }
          v22 = this->member.refID;
          v23 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 0xD4))(v19, v19[3]);
          v24 = (const char *)((int (__thiscall *)(TESForm *, UInt32, int, int, int))this->vtbl->GetEditorName)(
                                this,
                                v22,
                                v21,
                                v17,
                                v23);
          LOBYTE(v8) = PrintError(
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
                         v36);
        }
        else
        {
          if ( v20 )
            v25 = v20[1];
          else
            v25 = 0;
          if ( v20 )
            v26 = *v20;
          else
            v26 = 0;
          v27 = (const char *)((int (__thiscall *)(TESForm *, UInt32, int, int))this->vtbl->GetEditorName)(
                                this,
                                this->member.refID,
                                v26,
                                v25);
          LOBYTE(v8) = PrintError(
                         "Errors were encountered during InitItem for exterior cell:\n"
                         "\n"
                         "Cell '%s' (%08X) at (%i, %i) in UNKNOWN world\n"
                         "\n"
                         "Check Warnings for details.",
                         v27,
                         v33,
                         v35,
                         v37);
        }
      }
    }
  }
  return (char)v8;
}
