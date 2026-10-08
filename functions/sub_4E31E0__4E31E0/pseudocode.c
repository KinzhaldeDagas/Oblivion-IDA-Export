int __fastcall sub_4E31E0(TESForm *this, _DWORD edx0, unsigned __int16 a3)
{
  int result; // eax
  Data *v5; // ebp
  TESForm *v6; // edi
  const char *v7; // eax
  const char *v8; // edx
  const char *v9; // eax
  TESForm::ModReferenceList *v10; // eax
  TESFormVtbl *vtbl; // edx
  void (__thiscall *CopyFrom)(TESForm *); // eax
  ActorAnimData *v13; // eax
  float *p_unk00; // edi
  const char *v15; // eax
  int v16; // [esp-4h] [ebp-64h]
  int a2; // [esp+0h] [ebp-60h]
  int easeOutTime; // [esp+4h] [ebp-5Ch]
  int v19; // [esp+8h] [ebp-58h]
  TESForm a1; // [esp+18h] [ebp-48h] BYREF
  char v21[2]; // [esp+30h] [ebp-30h] BYREF
  __int16 v22; // [esp+32h] [ebp-2Eh]
  __int16 v23; // [esp+34h] [ebp-2Ch]
  int v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h]
  int v26; // [esp+40h] [ebp-20h]
  _BYTE v27[8]; // [esp+44h] [ebp-1Ch] BYREF
  int v28; // [esp+4Ch] [ebp-14h]
  TESFormMembr *p_member; // [esp+50h] [ebp-10h]

  if ( g_TESSaveLoadGame->currentVersion < 0x51u ) /*0x4e31ef*/
    return sub_4E0AB0(this, a3); /*0x4e31f8*/
  v5 = *((Data **)this + 0xF); /*0x4e3206*/
  if ( v5 )
  {
    a1.member.type = kFormType_None; /*0x4e321b*/
    *(_WORD *)&a1.member.pad[1] = 0; /*0x4e321f*/
    LOWORD(a1.member.flags) = 0; /*0x4e3224*/
    memset(&a1.member.refID, 0, 0xC); /*0x4e3229*/
    TESForm_LoadDataFromCurrentSaveGame(this, &a1.member, 1u); /*0x4e3235*/
    TESForm_LoadDataFromCurrentSaveGame(this, &a1, 2u); /*0x4e3243*/
    v6 = 0; /*0x4e3252*/
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].CopyFrom)(this) ) /*0x4e3254*/
    {
      v6 = this; /*0x4e325f*/
      if ( (a1.member.type & 8) != 0 ) /*0x4e3263*/
        sub_5EF9B0((int)this, 1); /*0x4e3267*/
      else
        sub_5EF9B0((int)this, 0); /*0x4e326a*/
    }
    v21[0] = 0; /*0x4e3276*/
    v22 = 0; /*0x4e327a*/
    v23 = 0; /*0x4e327f*/
    v24 = 0; /*0x4e3284*/
    v25 = 0; /*0x4e3288*/
    v26 = 0; /*0x4e328c*/
    sub_4E0970(this, v21); /*0x4e3290*/
    if ( LOWORD(a1.vtbl) == v22 + v23 )
    {
      a1.member.refID = (UInt32)this; /*0x4e3358*/
      a1.member.modlist.data = v5; /*0x4e335c*/
      v10 = (TESForm::ModReferenceList *)sub_4A05E0((int)v5); /*0x4e3360*/
      vtbl = this->vtbl; /*0x4e3365*/
      a1.member.modlist.next = v10; /*0x4e336b*/
      CopyFrom = vtbl[1].CopyFrom; /*0x4e336f*/
      p_member = &a1.member; /*0x4e3375*/
      v28 = 0xF; /*0x4e337e*/
      v27[4] = 1; /*0x4e3386*/
      if ( ((unsigned __int8 (__thiscall *)(TESForm *))CopyFrom)(this) ) /*0x4e338b*/
      {
        sub_88D070((NiNode *)v5, 1, 1, 0); /*0x4e3397*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v5, 0.0, 0); /*0x4e33a8*/
      }
      sub_88A7D0(v5, (int)v27, (void (__cdecl *)(int, int))sub_4DAE60); /*0x4e33b8*/
      if ( v6 ) /*0x4e33c2*/
      {
        if ( ((unsigned __int8 (__thiscall *)(TESForm *))v6->vtbl[1].Unk_31)(v6) ) /*0x4e33ce*/
        {
          sub_8A5580((int)v5, 1); /*0x4e33d7*/
          sub_88D070((NiNode *)v5, 1, 1, 0); /*0x4e33e2*/
          v13 = (ActorAnimData *)((int (__thiscall *)(TESForm *))v6->vtbl[1].Unk_22)(v6); /*0x4e33f4*/
          p_unk00 = (float *)&v13->unk00; /*0x4e33f6*/
          if ( v13 ) /*0x4e33fa*/
          {
            ActorAnimData_ClearSlot(v13, 5, 0.0); /*0x4e3406*/
            p_unk00[6] = g_zeroNiPoint3.x; /*0x4e3411*/
            p_unk00[7] = g_zeroNiPoint3.y; /*0x4e341a*/
            p_unk00[8] = g_zeroNiPoint3.z; /*0x4e3422*/
          }
        }
      }
      result = ((int (__thiscall *)(TESForm *))this->vtbl[1].CopyFrom)(this); /*0x4e342f*/
      if ( !(_BYTE)result ) /*0x4e3433*/
        return NiAVObject_UpdateNiAVObject((NiAVObject *)v5, 0.0, 0); /*0x4e3442*/
    }
    else
    {
      v7 = (const char *)((int (__thiscall *)(TESForm *, UInt32, _DWORD, _DWORD))this->vtbl->GetEditorName)( /*0x4e32c6*/
                           this,
                           this->member.refID,
                           LOWORD(a1.vtbl),
                           (unsigned __int16)(v22 + v23));
      PrintError(
        "Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only ha"
        "ppen with art changes.",
        v7,
        v16,
        a2,
        easeOutTime);
      if ( (a1.member.type & 8) != (v21[0] & 8) )
      {
        v8 = "true"; /*0x4e32e9*/
        if ( (v21[0] & 8) == 0 ) /*0x4e32ee*/
          v8 = "false"; /*0x4e32f0*/
        v9 = "true"; /*0x4e32f7*/
        if ( (a1.member.type & 8) == 0 ) /*0x4e32fc*/
          v9 = "false"; /*0x4e32fe*/
        PrintError("Bone count difference likely due to weapon bone difference.  Saved: %s Current: %s", v9, v8);
      }
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, a3 - 3); /*0x4e3321*/
      result = ((int (__thiscall *)(TESForm *))this->vtbl[1].CopyFrom)(this); /*0x4e3330*/
      if ( (_BYTE)result ) /*0x4e3334*/
        return sub_8AB440(v5, &g_zeroNiPoint3.x, 1, 0.0, 0); /*0x4e3345*/
    }
  }
  else
  {
    v15 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4e345d*/
    PrintError("Cannot load Havok data for reference %s %08X because it has no 3D.", v15, v19); /*0x4e3465*/
    return SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, a3); /*0x4e3479*/
  }
  return result; /*0x4e31fd*/
}
