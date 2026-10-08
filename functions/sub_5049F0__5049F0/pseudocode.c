char __cdecl Cmd_IsIdlePlaying(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  if ( a3 ) /*0x5049f6*/
    return CmdHelper_IsIdlePlaying(a3, 0, 0, a7); /*0x504a02*/
  else
    return 1; /*0x504a0b*/
}
