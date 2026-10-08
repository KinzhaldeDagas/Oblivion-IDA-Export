void __cdecl sub_498EE0(DWORD dwMilliseconds, char a2)
{
  if ( a2 ) /*0x498ee5*/
    Sleep(dwMilliseconds); /*0x498eec*/
  else
    *(_DWORD *)&MEMORY[0xB33E90][0x1258] += dwMilliseconds; /*0x498ef7*/
}
