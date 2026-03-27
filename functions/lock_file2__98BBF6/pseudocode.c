void __cdecl _lock_file2(int a1, _RTL_CRITICAL_SECTION_0 *a2)
{
  if ( a1 >= 0x14 )
    EnterCriticalSection(a2 + 1);
  else
    _lock(a1 + 0x10);
}
