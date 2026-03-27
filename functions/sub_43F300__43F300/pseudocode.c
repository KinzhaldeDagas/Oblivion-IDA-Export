void __thiscall sub_43F300(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( (*((_DWORD *)lpCriticalSection + 0x1F))-- == 1 )
    *((_DWORD *)lpCriticalSection + 0x1E) = 0;
  LeaveCriticalSection(lpCriticalSection);
}
