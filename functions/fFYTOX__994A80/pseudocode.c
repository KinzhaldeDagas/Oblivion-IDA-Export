int __usercall fFYTOX@<eax>(char a1@<ch>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 0x90) = 0xFE;
  if ( a1 )
    return negYTOX();
  else
    return fFYTOX_::fFXTOY();
}
