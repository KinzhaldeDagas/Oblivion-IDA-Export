int NiTPointerMap<unsigned int,TESTextureList *>::NiTPointerMap<unsigned int,TESTextureList *>()
{
  dword_B08318 = FormHeapAlloc(0x94u);
  _memset(dword_B08318, 0, 4 * dword_B08314);
  off_B08310 = &NiTPointerMap<unsigned int,TESTextureList *>::`vftable';
  return atexit(sub_A1B680);
}
