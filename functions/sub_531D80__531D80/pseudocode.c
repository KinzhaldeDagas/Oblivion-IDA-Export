signed int sub_531D80()
{
  signed int result; // eax

  result = (unsigned __int16)(dword_B2EB3C + 1);
  dword_B2EB3C = result;
  if ( !result )
  {
    dword_B2EB3C = 0xA;
    return 0xA;
  }
  return result;
}
