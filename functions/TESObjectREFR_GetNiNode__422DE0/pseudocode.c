// Linker-folded Oblivion accessor: returns the dword at this+0x3C. In TESClass auto-stat calls this is primaryAttribute2; other call contexts may represent unrelated fields.
UInt32 __thiscall Shared_GetDwordAtOffset3C(void *this)
{
  return *((_DWORD *)this + 0xF); /*0x422de3*/
}
