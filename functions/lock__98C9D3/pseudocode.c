void __cdecl _lock(int a1)
{
  if ( !*(&lpCriticalSection + 2 * a1) && !_mtinitlocknum(a1) )
    _amsg_exit(0x11);
  EnterCriticalSection(*(&lpCriticalSection + 2 * a1));
}
