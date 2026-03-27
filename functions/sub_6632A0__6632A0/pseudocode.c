TESSaveLoad *__usercall sub_6632A0@<eax>(_DWORD *this@<ecx>, char a2@<bpl>)
{
  TESSaveLoad *result; // eax
  int v4; // eax
  int v5; // edx
  unsigned __int16 v6; // ax
  FreeEntry *v7; // eax
  size_t v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-4h] BYREF

  if ( *(this + 0x1C3) )
    return (TESSaveLoad *)PrintError(
                            " PlayerCharacter::SaveInitialState(): Attempting to save player's initial state when the ini"
                            "tial state buffer already exists.");
  v4 = sub_4533F0(SaveLoad_CurrentSavegame, (int)this, 0);
  v5 = *this;
  v9 = v4;
  v6 = (*(int (__thiscall **)(_DWORD *, int))(v5 + 0x4C))(this, v4);
  v7 = sub_453500(SaveLoad_CurrentSavegame, a2, v6 + 4);
  LODWORD(v8) = 4;
  *(this + 0x1C3) = v7;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&v9, v8);
  BYTE1(SaveLoad_CurrentSavegame[1].createdObjectList.next) = 0;
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x50))(this, v9);
  result = SaveLoad_CurrentSavegame;
  BYTE1(SaveLoad_CurrentSavegame[1].createdObjectList.next) = 1;
  SaveLoad_CurrentSavegame->unk000[5] = 0;
  return result;
}
