// Verified base save path writes duration, elapsed and owning-cell FormID (0 when absent). Derived particle save delegates here.
bool __thiscall BSTempEffect_SaveGame(BSTempEffect *self)
{
  TESObjectCELL *parentCell; // esi
  bool result; // al
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  SaveLoad_SaveData(g_TESSaveLoadGame, &self->durationSeconds, 4u); /*0x56bd90*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->elapsedSeconds, 4u); /*0x56bda1*/
  parentCell = self->parentCell; /*0x56bda6*/
  source = 0; /*0x56bdab*/
  if ( parentCell ) /*0x56bdb3*/
    source = parentCell->members.super.refID; /*0x56bdb8*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x56bdc9*/
  return result; /*0x56bdce*/
}
