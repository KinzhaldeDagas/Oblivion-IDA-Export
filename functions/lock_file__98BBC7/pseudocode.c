void __cdecl _lock_file(_RTL_CRITICAL_SECTION_0 *a1)
{
  if ( a1 < (_RTL_CRITICAL_SECTION_0 *)&off_B30E28 || a1 > &stru_B31088 ) /*0x98bbd9*/
    EnterCriticalSection(a1 + 1); /*0x98bbef*/
  else
    _lock((((char *)a1 - (char *)&off_B30E28) >> 5) + 0x10); /*0x98bbe4*/
}
