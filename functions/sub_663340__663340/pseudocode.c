OSGlobals *__userpurge sub_663340@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4@<edi>, int a5)
{
  OSGlobals *result; // eax
  TESSaveLoad *v9; // ecx
  bool v10; // al
  TESSaveLoad *v11; // ecx
  float *v12; // eax
  float *v13; // ebp
  double v14; // st7
  size_t v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+20h] [ebp-8h] BYREF
  char v17; // [esp+24h] [ebp-4h]

  result = OSGlobals;
  if ( !OSGlobals->unk04 )
  {
    if ( a1[0x1C3] )
    {
      HIDWORD(v15) = a4;
      sub_4523F0(SaveLoad_CurrentSavegame);
      LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) = BYTE1(SaveLoad_CurrentSavegame[1].unk01C[1]);
      v9 = SaveLoad_CurrentSavegame;
      byte_B3BB07 = 0;
      v10 = sub_45A500(v9);
      v11 = SaveLoad_CurrentSavegame;
      v17 = v10;
      sub_45A530(v11, 1);
      v12 = sub_459FA0(a1);
      SaveLoad_CurrentSavegame->unk030[5] = 0x1FFFF000;
      v13 = v12;
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x60))(a1, a5 & 0x1FFFF000);
      LODWORD(v15) = 4;
      SaveLoad_CurrentSavegame->unk000[5] = a1[0x1C3];
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v16, v15);
      BYTE1(SaveLoad_CurrentSavegame[1].createdObjectList.next) = 0;
      (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x54))(a1, v16, a5);
      SaveLoad_CurrentSavegame->unk000[5] = 0;
      SaveLoad_CurrentSavegame->unk030[5] = 0x60000000;
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x60))(a1, a5 & 0x60000000);
      sub_45A020((int)a1, a1, v13);
      (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x58))(a1, v16, a5);
      v14 = ((double (__thiscall *)(_DWORD *, int, int))*(_DWORD *)(*a1 + 0x5C))(a1, v16, a5);
      sub_461030(SaveLoad_CurrentSavegame, a2, a3, v14, 0);
      BYTE1(SaveLoad_CurrentSavegame[1].createdObjectList.next) = 1;
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x48))(a1, v16);
      sub_57A6F0(0xFFFFFFFF);
      sub_57A6F0(0xA);
      sub_57A6F0(8);
      sub_57A6F0(9);
      return (OSGlobals *)sub_45A530(SaveLoad_CurrentSavegame, v17);
    }
    else
    {
      return (OSGlobals *)PrintError(
                            " PlayerCharacter::RestoreInitialState(): Attempting to restore player's initial state, but t"
                            "he initial state buffer is empty");
    }
  }
  return result;
}
