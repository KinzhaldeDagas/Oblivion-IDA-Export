int __usercall setlocale_::_LN26_0@<eax>(int a1@<ebp>, int a2@<esi>)
{
  *(_DWORD *)(a1 - 4) = 0xFFFFFFFE; /*0x98ae49*/
  setlocale_::_LN17_0(a2); /*0x98ae50*/
  return setlocale_::_LN18_0(a1);
}
