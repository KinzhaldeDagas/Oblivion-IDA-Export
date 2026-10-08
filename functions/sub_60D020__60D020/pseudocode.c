// Identical-code-folded setter shared by unrelated engine classes: writes value to *(int *)(this+4) and returns value. In EntryData call sites, +0x04 is the canonical signed countDelta; shader/process vtable users give the same bytes unrelated meanings. Do not assign a globally EntryData-specific prototype.
int __thiscall Shared_SetDwordAtOffset04(void *this, int value)
{
  *((_DWORD *)this + 1) = value; /*0x60d024*/
  return value; /*0x60d027*/
}
