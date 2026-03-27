char __thiscall TESForm_MakeTemporary(TESForm *this)
{
  char result; // al

  result = TESForm_RemoveFromGlobalLists(this);
  if ( SaveLoad_CurrentSavegame )
    result = sub_45B780((TESForm *)SaveLoad_CurrentSavegame, (int)this, 0);
  this->member.flags |= 0x4000u;
  return result;
}
