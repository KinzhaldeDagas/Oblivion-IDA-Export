int __userpurge sub_4E31E0@<eax>(_DWORD *this@<ecx>, int edi0@<edi>, unsigned __int16 a3)
{
  int result; // eax
  Data *v5; // ebp
  _DWORD *v6; // edi
  const char *v7; // eax
  const char *v8; // edx
  const char *v9; // eax
  TESForm::ModReferenceList *v10; // eax
  int v11; // edx
  unsigned __int8 (__thiscall *v12)(_DWORD *); // eax
  float *v13; // eax
  float *v14; // edi
  const char *v15; // eax
  int v16; // [esp-4h] [ebp-64h]
  int a2; // [esp+0h] [ebp-60h]
  size_t v18; // [esp+4h] [ebp-5Ch]
  size_t v19; // [esp+4h] [ebp-5Ch]
  int v20; // [esp+4h] [ebp-5Ch]
  int v21; // [esp+8h] [ebp-58h]
  TESForm a1; // [esp+18h] [ebp-48h] BYREF
  char v23[2]; // [esp+30h] [ebp-30h] BYREF
  __int16 v24; // [esp+32h] [ebp-2Eh]
  __int16 v25; // [esp+34h] [ebp-2Ch]
  int v26; // [esp+38h] [ebp-28h]
  int v27; // [esp+3Ch] [ebp-24h]
  int v28; // [esp+40h] [ebp-20h]
  _BYTE v29[8]; // [esp+44h] [ebp-1Ch] BYREF
  int v30; // [esp+4Ch] [ebp-14h]
  TESFormMembr *p_member; // [esp+50h] [ebp-10h]

  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x51u )
    return sub_4E0AB0(this, a3);
  v5 = (Data *)*(this + 0xF);
  if ( v5 )
  {
    HIDWORD(v18) = edi0;
    LODWORD(v18) = 1;
    a1.member.type = kFormType_None;
    *(_WORD *)&a1.member.pad[1] = 0;
    LOWORD(a1.member.flags) = 0;
    memset(&a1.member.refID, 0, 0xC);
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1.member, v18);
    LODWORD(v19) = 2;
    TESForm_LoadDataFromCurrentSaveGame(&a1, v19);
    v6 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
    {
      v6 = this;
      if ( (a1.member.type & 8) != 0 )
        sub_5EF9B0(1);
      else
        sub_5EF9B0(0);
    }
    v23[0] = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_4E0970(this, v23);
    if ( LOWORD(a1.vtbl) == v24 + v25 )
    {
      a1.member.refID = (UInt32)this;
      a1.member.modlist.data = v5;
      v10 = (TESForm::ModReferenceList *)sub_4A05E0((int)v5);
      v11 = *this;
      a1.member.modlist.next = v10;
      v12 = *(unsigned __int8 (__thiscall **)(_DWORD *))(v11 + 0x190);
      p_member = &a1.member;
      v30 = 0xF;
      v29[4] = 1;
      if ( v12(this) )
      {
        sub_88D070((NiNode *)v5, 1, 1, 0);
        NiAVObject_UpdateNiAVObject((NiAVObject *)v5, 0.0, 0);
      }
      sub_88A7D0(v5, (int)v29, (void (__cdecl *)(int, int))sub_4DAE60);
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 0x1A0))(v6) )
        {
          sub_8A5580((int)v5, 1);
          sub_88D070((NiNode *)v5, 1, 1, 0);
          v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*v6 + 0x164))(v6);
          v14 = v13;
          if ( v13 )
          {
            sub_470FC0(v13, 5, 0.0);
            v14[6] = Vector3_InitValue_;
            v14[7] = *(&Vector3_InitValue_ + 1);
            v14[8] = dword_B3F9B0;
          }
        }
      }
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x190))(this);
      if ( !(_BYTE)result )
        return NiAVObject_UpdateNiAVObject((NiAVObject *)v5, 0.0, 0);
    }
    else
    {
      v7 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 0xD4))(
                           this,
                           *(this + 3),
                           LOWORD(a1.vtbl),
                           (unsigned __int16)(v24 + v25));
      PrintError(
        "Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only ha"
        "ppen with art changes.",
        v7,
        v16,
        a2,
        v20);
      if ( (a1.member.type & 8) != (v23[0] & 8) )
      {
        v8 = "true";
        if ( (v23[0] & 8) == 0 )
          v8 = "false";
        v9 = "true";
        if ( (a1.member.type & 8) == 0 )
          v9 = "false";
        PrintError("Bone count difference likely due to weapon bone difference.  Saved: %s Current: %s", v9, v8);
      }
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, a3 - 3);
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x190))(this);
      if ( (_BYTE)result )
        return sub_8AB440((int)v5, (int)&Vector3_InitValue_, 1, 0.0, 0);
    }
  }
  else
  {
    v15 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xD4))(this, *(this + 3));
    PrintError("Cannot load Havok data for reference %s %08X because it has no 3D.", v15, v21);
    return SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, a3);
  }
  return result;
}
