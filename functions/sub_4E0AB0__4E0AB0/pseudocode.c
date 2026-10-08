unsigned int __thiscall sub_4E0AB0(TESForm *this, unsigned __int16 arg0)
{
  TESSaveLoadGame_SerializationView *v2; // eax
  NiNode *v4; // edi
  unsigned __int8 currentVersion; // al
  const char *v6; // eax
  unsigned int result; // eax
  ActorAnimData *v8; // eax
  float *p_unk00; // esi
  const char *v10; // eax
  int v11; // [esp-4h] [ebp-4Ch]
  int a2; // [esp+0h] [ebp-48h]
  int v13; // [esp+4h] [ebp-44h]
  int v14; // [esp+4h] [ebp-44h]
  TESForm a1; // [esp+16h] [ebp-32h] BYREF
  char v16; // [esp+30h] [ebp-18h]
  int v17; // [esp+34h] [ebp-14h]
  int v18; // [esp+38h] [ebp-10h]
  TESForm *v19; // [esp+3Ch] [ebp-Ch]
  int vtbl_low; // [esp+40h] [ebp-8h]
  int v21; // [esp+44h] [ebp-4h]

  v2 = g_TESSaveLoadGame; /*0x4e0ab3*/
  LOBYTE(a1.vtbl) = 0; /*0x4e0abc*/
  if ( v2->currentVersion < 0x16u ) /*0x4e0ac7*/
  {
    TESForm_LoadDataFromCurrentSaveGame(this, (char *)&a1.vtbl + 1, 1u); /*0x4e0ad2*/
    if ( BYTE1(a1.vtbl) ) /*0x4e0adb*/
      LOBYTE(a1.vtbl) |= 1u; /*0x4e0add*/
  }
  v4 = *((NiNode **)this + 0xF); /*0x4e0ae2*/
  if ( v4 )
  {
    if ( g_TESSaveLoadGame->currentVersion >= 0x2Bu ) /*0x4e0af7*/
      TESForm_LoadDataFromCurrentSaveGame(this, &a1, 1u); /*0x4e0b02*/
    currentVersion = g_TESSaveLoadGame->currentVersion; /*0x4e0b0d*/
    if ( currentVersion >= 0x16u && currentVersion < 0x2Bu ) /*0x4e0b16*/
    {
      TESForm_LoadDataFromCurrentSaveGame(this, (char *)&a1.vtbl + 1, 1u); /*0x4e0b21*/
      if ( BYTE1(a1.vtbl) ) /*0x4e0b2a*/
        LOBYTE(a1.vtbl) |= 1u; /*0x4e0b2c*/
    }
    if ( g_TESSaveLoadGame->currentVersion < 0x18u
      || (TESForm_LoadDataFromCurrentSaveGame(this, (char *)&a1.vtbl + 1, 1u),
          BYTE2(a1.vtbl) = 0,
          *(_WORD *)&a1.member.type = 0,
          *(_WORD *)&a1.member.pad[1] = 0,
          memset((char *)&a1.member.flags + 2, 0, 0xC),
          sub_4E0970(this, (char *)&a1.vtbl + 2),
          a1.member.pad[1] + a1.member.type == BYTE1(a1.vtbl)) )
    {
      v17 = 0xF; /*0x4e0bf3*/
      v16 = 1; /*0x4e0bfb*/
      v18 = sub_4A05E0((int)v4); /*0x4e0c15*/
      v19 = this; /*0x4e0c19*/
      vtbl_low = LOBYTE(a1.vtbl); /*0x4e0c1d*/
      v21 = 0; /*0x4e0c21*/
      sub_88A7D0(v4, (int)&a1.member.modlist.next + 2, (void (__cdecl *)(int, int))sub_4DB080); /*0x4e0c25*/
      if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].CopyFrom)(this) ) /*0x4e0c37*/
      {
        if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_31)(this) ) /*0x4e0c47*/
        {
          sub_8A5580((int)v4, 1); /*0x4e0c50*/
          sub_88D070(v4, 1, 1, 0); /*0x4e0c5b*/
          v8 = (ActorAnimData *)((int (__thiscall *)(TESForm *))this->vtbl[1].Unk_22)(this); /*0x4e0c6d*/
          p_unk00 = (float *)&v8->unk00; /*0x4e0c6f*/
          if ( v8 ) /*0x4e0c73*/
          {
            ActorAnimData_ClearSlot(v8, 5, 0.0); /*0x4e0c7f*/
            p_unk00[6] = g_zeroNiPoint3.x; /*0x4e0c89*/
            p_unk00[7] = g_zeroNiPoint3.y; /*0x4e0c92*/
            p_unk00[8] = g_zeroNiPoint3.z; /*0x4e0c9b*/
          }
        }
      }
      return NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0); /*0x4e0ca7*/
    }
    else
    {
      v6 = (const char *)((int (__thiscall *)(TESForm *, UInt32, _DWORD, _DWORD))this->vtbl->GetEditorName)( /*0x4e0b9a*/
                           this,
                           this->member.refID,
                           BYTE1(a1.vtbl),
                           (unsigned __int8)(a1.member.pad[1] + a1.member.type));
      PrintError(
        "Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only ha"
        "ppen with art changes.",
        v6,
        v11,
        a2,
        v13);
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, arg0 - 2); /*0x4e0bb9*/
      result = ((int (__thiscall *)(TESForm *))this->vtbl[1].CopyFrom)(this); /*0x4e0bc8*/
      if ( (_BYTE)result ) /*0x4e0bcc*/
        return sub_8AB440(v4, &g_zeroNiPoint3.x, 1, 0.0, 0); /*0x4e0be1*/
    }
  }
  else
  {
    v10 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4e0cc3*/
    PrintError("Cannot load Havok data for reference %s %08X because it has no 3D.", v10, v14); /*0x4e0ccb*/
    return SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, arg0); /*0x4e0cdf*/
  }
  return result; /*0x4e0be9*/
}
