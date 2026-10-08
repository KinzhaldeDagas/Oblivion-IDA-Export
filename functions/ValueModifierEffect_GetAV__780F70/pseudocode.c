// Linker-folded Oblivion accessor: returns the dword at this+0x38. In TESClass auto-stat calls this is primaryAttribute1; other call contexts may represent unrelated fields.
UInt32 __thiscall Shared_GetDwordAtOffset38(void *this)
{
  return *((_DWORD *)this + 0xE); /*0x780f73*/
}
