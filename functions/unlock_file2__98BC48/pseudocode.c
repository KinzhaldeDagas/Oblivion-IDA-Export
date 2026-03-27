void __cdecl _unlock_file2(int a1, _RTL_CRITICAL_SECTION_0 *a2)
{
  if ( a1 >= 0x14 )
    LeaveCriticalSection(a2 + 1);
  else
    _unlock(a1 + 0x10);
}
