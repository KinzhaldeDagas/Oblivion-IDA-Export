ahkMalleableConstraintData *__thiscall ahkMalleableConstraintData::`scalar deleting destructor'(
        ahkMalleableConstraintData *this,
        char a2)
{
  ahkMalleableConstraintData::~ahkMalleableConstraintData(this); /*0x8bf163*/
  if ( (a2 & 1) != 0 ) /*0x8bf16d*/
    (*(void (__stdcall **)(ahkMalleableConstraintData *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bf182*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x8bf186*/
}
