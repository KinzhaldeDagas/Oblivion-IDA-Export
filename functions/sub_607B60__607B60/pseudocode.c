signed int sub_607B60()
{
  signed int result; // eax

  result = dword_B3B7D4;
  if ( !dword_B3B7D4 )
  {
    result = (unsigned __int16)(dword_B2EB3C + 1);
    dword_B2EB3C = result;
    if ( !result )
    {
      result = 0xA;
      dword_B2EB3C = 0xA;
    }
    dword_B3B7D4 = result;
  }
  return result;
}
