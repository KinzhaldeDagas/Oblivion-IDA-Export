int __usercall _allshr@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
  {
    LODWORD(a1) = SHIDWORD(a1) >> 0x1F;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(a1) = SHIDWORD(a1) >> (a2 & 0x1F);
  }
  else
  {
    a1 >>= a2 & 0x1F;
  }
  return a1;
}
