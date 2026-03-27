void __usercall doexit_::_LN16_0(int a1@<ebp>, int a2@<esi>)
{
  if ( !*(_DWORD *)(a1 + 0x10) )
  {
    dword_BA9DD4 = a2;
    _unlock(8);
    __crtExitProcess(*(_DWORD *)(a1 + 8));
  }
}
