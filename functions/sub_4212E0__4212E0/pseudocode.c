// Removes the combined Oblivion ExtraSavedMovementData record (type 0x4B).
int __thiscall ExtraDataList_RemoveSavedMovementData(_DWORD *this)
{
  return BaseExtraList_RemoveExtraByType(this, 0x4Bu); /*0x4212e7*/
}
