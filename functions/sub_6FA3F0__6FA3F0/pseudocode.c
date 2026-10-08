int __cdecl sub_6FA3F0(char C)
{
  int result; // eax

  result = C; /*0x6fa3f7*/
  if ( (unk_B3F480 & 1) == 0 ) /*0x6fa3fc*/
    return toupper(C); /*0x6fa402*/
  return result; /*0x6fa407*/
}
