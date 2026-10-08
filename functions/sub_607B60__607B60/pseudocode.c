signed int sub_607B60()
{
  signed int result; // eax

  result = unk_B3B7D4; /*0x607b60*/
  if ( !unk_B3B7D4 ) /*0x607b60*/
  {
    result = (unsigned __int16)(dword_B2EB3C + 1); /*0x607b71*/
    dword_B2EB3C = result; /*0x607b76*/
    if ( !result ) /*0x607b7b*/
    {
      result = 0xA; /*0x607b7d*/
      dword_B2EB3C = 0xA; /*0x607b82*/
    }
    unk_B3B7D4 = result; /*0x607b87*/
  }
  return result; /*0x607b8c*/
}
