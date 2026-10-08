void __thiscall sub_43F300(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( (*((_DWORD *)lpCriticalSection + 0x1F))-- == 1 ) /*0x43f300*/
    *((_DWORD *)lpCriticalSection + 0x1E) = 0; /*0x43f306*/
  LeaveCriticalSection(lpCriticalSection); /*0x43f30e*/
}
