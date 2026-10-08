void __usercall doexit_::_LN16_0(int a1@<ebp>, int a2@<esi>)
{
  if ( !*(_DWORD *)(a1 + 0x10) ) /*0x981d97*/
  {
    *(_DWORD *)&byte_BA9DCC[8] = a2; /*0x981d9d*/
    _unlock(8); /*0x981da5*/
    __crtExitProcess(*(_DWORD *)(a1 + 8)); /*0x981dae*/
  }
}
