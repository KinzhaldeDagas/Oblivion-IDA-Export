int __usercall _allshr@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u ) /*0x984a93*/
  {
    LODWORD(a1) = SHIDWORD(a1) >> 0x1F; /*0x984aae*/
  }
  else if ( a2 >= 0x20u ) /*0x984a98*/
  {
    LODWORD(a1) = SHIDWORD(a1) >> (a2 & 0x1F); /*0x984aa8*/
  }
  else
  {
    a1 >>= a2 & 0x1F; /*0x984a9d*/
  }
  return a1; /*0x984a9f*/
}
