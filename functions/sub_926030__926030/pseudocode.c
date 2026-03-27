void __thiscall sub_926030(LPCRITICAL_SECTION lpCriticalSection)
{
  sub_8A7720(lpCriticalSection);
  --*((_DWORD *)lpCriticalSection + 0x1A);
  LeaveCriticalSection(lpCriticalSection);
}
