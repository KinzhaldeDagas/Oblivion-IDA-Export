ahkBreakableConstraintData *__thiscall ahkBreakableConstraintData::`scalar deleting destructor'(
        ahkBreakableConstraintData *this,
        char a2)
{
  ahkBreakableConstraintData::~ahkBreakableConstraintData(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(ahkBreakableConstraintData *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this;
}
