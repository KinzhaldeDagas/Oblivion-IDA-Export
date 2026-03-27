unsigned int __usercall sub_40F640@<eax>(unsigned int result@<eax>)
{
  if ( result <= 0x10 )
  {
    if ( result <= 4 )
    {
      if ( result > 2 )
        return 4;
    }
    else
    {
      return result > 8 ? 0x10 : 8;
    }
  }
  else if ( result <= 0x40 )
  {
    return result > 0x20 ? 0x40 : 0x20;
  }
  else if ( result <= 0x80 )
  {
    return 0x80;
  }
  else if ( result <= 0x100 )
  {
    return 0x100;
  }
  else
  {
    return result > 0x200 ? 0x400 : 0x200;
  }
  return result;
}
