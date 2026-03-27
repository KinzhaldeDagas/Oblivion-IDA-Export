int NiTPointerMap<int,unsigned int>::NiTPointerMap<int,unsigned int>()
{
  dword_B16314 = FormHeapAlloc(0x94u);
  _memset(dword_B16314, 0, 4 * dword_B16310);
  off_B1630C = &NiTPointerMap<int,unsigned int>::`vftable';
  return atexit(sub_A26730);
}
