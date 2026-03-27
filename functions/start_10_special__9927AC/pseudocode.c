int __usercall start_10_::special@<eax>(char a1@<zf>, char a2@<sf>, char a3@<of>, unsigned __int16 a4@<ax>, __int64 a5)
{
  if ( !(a2 ^ a3 | a1) )
    return start_10_::large();
  if ( a4 >> 4 == 0xC7E )
    JUMPOUT(0x9927BB);
  return start_10_::smallnorm(a5);
}
