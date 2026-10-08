// Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
TESObjectREFR *__thiscall TESObjectCELL_FindSmallestSubSpaceContainingPosition(
        TESObjectCELL *this,
        float *worldPosition)
{
  TESObjectREFR *SmallestContainingPosition; // edi

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cbbba*/
  SmallestContainingPosition = TESSubSpace_FindSmallestContainingPosition( /*0x4cbbd6*/
                                 worldPosition,
                                 (TESSubSpaceReferenceList *)&this->members.objectList);
  sub_496F50(&unk_B35C80, this); /*0x4cbbd8*/
  return SmallestContainingPosition; /*0x4cbbdf*/
}
