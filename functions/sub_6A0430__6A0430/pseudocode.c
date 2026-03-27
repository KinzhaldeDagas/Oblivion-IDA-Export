char __thiscall sub_6A0430(_DWORD *this, int a2, int a3)
{
  char result; // al
  int v5; // esi
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]

  sub_69DBB0((int)this, a2, a3);
  LODWORD(v6) = 4;
  result = (unsigned __int8)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xE, v6);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x37u )
  {
    LODWORD(v7) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xA, v7);
    LODWORD(v8) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xB, v8);
    v5 = *(this + 0xC);
    a3 = 0;
    if ( v5 )
      a3 = *(_DWORD *)(v5 + 0xC);
    return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&a3, 4u);
  }
  return result;
}
