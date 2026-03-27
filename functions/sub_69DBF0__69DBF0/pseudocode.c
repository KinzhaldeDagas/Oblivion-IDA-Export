int __thiscall sub_69DBF0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v5) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 8, v5);
  LODWORD(v6) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 9, v6);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x72u )
  {
    result = a3;
  }
  else
  {
    LODWORD(v7) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 2, v7);
    result = a2;
  }
  *(this + 6) = a2;
  *(this + 7) = a3;
  return result;
}
