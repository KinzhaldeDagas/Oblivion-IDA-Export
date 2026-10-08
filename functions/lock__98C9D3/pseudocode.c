void __cdecl _lock(int a1)
{
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  if ( !*(&lpCriticalSection + 2 * a1) && !_mtinitlocknum(a1) ) /*0x98c9e7*/
    _amsg_exit((int)&savedregs, 0x11); /*0x98c9f3*/
  EnterCriticalSection(*(&lpCriticalSection + 2 * a1)); /*0x98c9fb*/
}
