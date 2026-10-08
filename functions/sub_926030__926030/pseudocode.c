void __thiscall sub_926030(LPCRITICAL_SECTION lpCriticalSection)
{
  sub_8A7720(lpCriticalSection); /*0x926033*/
  --*((_DWORD *)lpCriticalSection + 0x1A); /*0x92603d*/
  LeaveCriticalSection(lpCriticalSection); /*0x926040*/
}
