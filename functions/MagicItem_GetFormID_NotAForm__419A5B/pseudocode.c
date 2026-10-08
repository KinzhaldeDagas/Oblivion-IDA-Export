// positive sp value has been detected, the output may be wrong!
int __usercall MagicItem_GetFormID_::NotAForm@<eax>(int a1@<eax>)
{
  if ( a1 ) /*0x419a5d*/
    return *(_DWORD *)(a1 + 0xC); /*0x419a5f*/
  else
    return MagicItem_GetFormID_::NotABoundObj(); /*0x419a5d*/
}
