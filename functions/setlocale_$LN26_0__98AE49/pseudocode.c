int __usercall setlocale_::_LN26_0@<eax>(int a1@<ebp>)
{
  *(_DWORD *)(a1 - 4) = 0xFFFFFFFE;
  setlocale_::_LN17_0();
  return setlocale_::_LN18_0(a1);
}
