ahkBreakableConstraintData *__thiscall ahkBreakableConstraintData::`scalar deleting destructor'(
        ahkBreakableConstraintData *this,
        char a2)
{
  ahkBreakableConstraintData::~ahkBreakableConstraintData(this); /*0x8bf833*/
  if ( (a2 & 1) != 0 ) /*0x8bf83d*/
    (*(void (__stdcall **)(ahkBreakableConstraintData *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bf852*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x8bf856*/
}
