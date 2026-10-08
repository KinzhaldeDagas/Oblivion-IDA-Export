int sub_9FD930()
{
  dword_B14E2C = FormHeapAlloc(0x94u); /*0x9fd95c*/
  _memset(dword_B14E2C, 0, 4 * dword_B14E28); /*0x9fd961*/
  off_B14E24 = &NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable'; /*0x9fd96b*/
  return atexit(sub_A257A0); /*0x9fd97d*/
}
