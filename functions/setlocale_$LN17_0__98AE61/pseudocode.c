int __usercall setlocale_::_LN17_0@<eax>(int a1@<esi>)
{
  *(_DWORD *)(a1 + 0x70) &= ~0x10u;
  return setlocale_::_LN16_2();
}
