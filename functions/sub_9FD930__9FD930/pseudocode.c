int sub_9FD930()
{
  dword_B14E2C = FormHeapAlloc(0x94u);
  _memset(dword_B14E2C, 0, 4 * dword_B14E28);
  off_B14E24 = &NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable';
  return atexit(sub_A257A0);
}
