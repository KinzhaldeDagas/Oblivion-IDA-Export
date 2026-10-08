// Verified runtime lock predicate: returns (ExtraLockData.flags & 0x01) != 0. ExtraDataList_Load sets this bit on accepted 12-byte and legacy 16-byte XLOC payloads; serialized flag bits are then preserved. This is a runtime normalization step.
bool __thiscall ExtraLockData_IsLocked(ExtraLockData *this)
{
  return (this->flags & 1) != 0; /*0x428e7a*/
}
