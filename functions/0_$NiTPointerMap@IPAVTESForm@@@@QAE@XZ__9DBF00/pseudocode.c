int NiTPointerMap<unsigned int,TESForm *>::NiTPointerMap<unsigned int,TESForm *>()
{
  dword_B06144 = FormHeapAlloc(0x80234u);
  _memset(dword_B06144, 0, 4 * dword_B06140);
  TESForm_FormIDMap = &NiTPointerMap<unsigned int,TESForm *>::`vftable';
  return atexit(sub_A18520);
}
