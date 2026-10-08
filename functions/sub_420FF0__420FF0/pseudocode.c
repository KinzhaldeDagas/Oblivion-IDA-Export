// Removes ExtraLastFinishedSequence (type 0x4A).
int __thiscall ExtraDataList_RemoveLastFinishedSequence(_DWORD *this)
{
  return BaseExtraList_RemoveExtraByType(this, 0x4Au); /*0x420ff7*/
}
