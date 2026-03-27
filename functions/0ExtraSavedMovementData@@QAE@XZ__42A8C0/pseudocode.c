ExtraSavedMovementData *__thiscall ExtraSavedMovementData::ExtraSavedMovementData(ExtraSavedMovementData *this)
{
  *((_BYTE *)this + 4) = 0x4B;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraSavedMovementData::`vftable';
  *((_BYTE *)this + 0xC) = SaveLoad_CurrentSavegame[1].createdObjectList.next;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
