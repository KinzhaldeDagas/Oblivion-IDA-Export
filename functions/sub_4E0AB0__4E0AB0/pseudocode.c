unsigned int __thiscall sub_4E0AB0(_DWORD *this, unsigned __int16 arg0)
{
  TESSaveLoad *v2; // eax
  NiNode *v4; // edi
  unsigned __int8 next; // al
  const char *v6; // eax
  unsigned int result; // eax
  float *v8; // eax
  float *v9; // esi
  const char *v10; // eax
  int v11; // [esp-4h] [ebp-4Ch]
  int a2; // [esp+0h] [ebp-48h]
  size_t v13; // [esp+4h] [ebp-44h]
  int v14; // [esp+4h] [ebp-44h]
  int v15; // [esp+4h] [ebp-44h]
  TESForm a1; // [esp+16h] [ebp-32h] BYREF
  char v17; // [esp+30h] [ebp-18h]
  int v18; // [esp+34h] [ebp-14h]
  int v19; // [esp+38h] [ebp-10h]
  _DWORD *v20; // [esp+3Ch] [ebp-Ch]
  int vtbl_low; // [esp+40h] [ebp-8h]
  int v22; // [esp+44h] [ebp-4h]

  v2 = SaveLoad_CurrentSavegame;
  LOBYTE(a1.vtbl) = 0;
  if ( LOBYTE(v2[1].createdObjectList.next) < 0x16u )
  {
    LODWORD(v13) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 1), v13);
    if ( BYTE1(a1.vtbl) )
      LOBYTE(a1.vtbl) |= 1u;
  }
  v4 = (NiNode *)*(this + 0xF);
  if ( v4 )
  {
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Bu )
    {
      LODWORD(v13) = 1;
      TESForm_LoadDataFromCurrentSaveGame(&a1, v13);
    }
    next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
    if ( next >= 0x16u && next < 0x2Bu )
    {
      LODWORD(v13) = 1;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 1), v13);
      if ( BYTE1(a1.vtbl) )
        LOBYTE(a1.vtbl) |= 1u;
    }
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x18u
      || (LODWORD(v13) = 1,
          TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 1), v13),
          BYTE2(a1.vtbl) = 0,
          *(_WORD *)&a1.member.type = 0,
          *(_WORD *)&a1.member.pad[1] = 0,
          memset((char *)&a1.member.flags + 2, 0, 0xC),
          sub_4E0970(this, (char *)&a1.vtbl + 2),
          a1.member.pad[1] + a1.member.type == BYTE1(a1.vtbl)) )
    {
      v18 = 0xF;
      v17 = 1;
      v19 = sub_4A05E0((int)v4);
      v20 = this;
      vtbl_low = LOBYTE(a1.vtbl);
      v22 = 0;
      sub_88A7D0(v4, (int)&a1.member.modlist.next + 2, (void (__cdecl *)(int, int))sub_4DB080);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x1A0))(this) )
        {
          sub_8A5580((int)v4, 1);
          sub_88D070(v4, 1, 1, 0);
          v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 0x164))(this);
          v9 = v8;
          if ( v8 )
          {
            sub_470FC0(v8, 5, 0.0);
            v9[6] = Vector3_InitValue_;
            v9[7] = *(&Vector3_InitValue_ + 1);
            v9[8] = dword_B3F9B0;
          }
        }
      }
      return NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0);
    }
    else
    {
      v6 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 0xD4))(
                           this,
                           *(this + 3),
                           BYTE1(a1.vtbl),
                           (unsigned __int8)(a1.member.pad[1] + a1.member.type));
      PrintError(
        "Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only ha"
        "ppen with art changes.",
        v6,
        v11,
        a2,
        v14);
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, arg0 - 2);
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x190))(this);
      if ( (_BYTE)result )
        return sub_8AB440((int)v4, (int)&Vector3_InitValue_, 1, 0.0, 0);
    }
  }
  else
  {
    v10 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xD4))(this, *(this + 3));
    PrintError("Cannot load Havok data for reference %s %08X because it has no 3D.", v10, v15);
    return SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, arg0);
  }
  return result;
}
