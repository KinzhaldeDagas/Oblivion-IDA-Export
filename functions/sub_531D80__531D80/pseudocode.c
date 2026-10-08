signed int sub_531D80()
{
  signed int result; // eax

  result = (unsigned __int16)(dword_B2EB3C + 1); /*0x531d88*/
  dword_B2EB3C = result; /*0x531d8d*/
  if ( !result ) /*0x531d92*/
  {
    dword_B2EB3C = 0xA; /*0x531d99*/
    return 0xA; /*0x531d94*/
  }
  return result; /*0x531d9e*/
}
