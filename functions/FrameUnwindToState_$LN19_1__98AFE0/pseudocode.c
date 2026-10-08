void __usercall __FrameUnwindToState_::_LN19_1(int a1@<ebx>, int a2@<ebp>, int a3@<esi>)
{
  if ( a3 != *(_DWORD *)(a2 + 0x14) ) /*0x98afe3*/
    _inconsistency(); /*0x98afe5*/
  *(_DWORD *)(a1 + 8) = a3; /*0x98afea*/
}
