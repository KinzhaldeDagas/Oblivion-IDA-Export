// Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
UInt32 __thiscall Shared_GetDwordAtOffset40(void *this)
{
  return *((_DWORD *)this + 0x10); /*0x6ecc83*/
}
