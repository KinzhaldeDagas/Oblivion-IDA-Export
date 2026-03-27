int __cdecl sub_6FA3F0(char C)
{
  int result; // eax

  result = C;
  if ( (byte_B3F480 & 1) == 0 )
    return toupper(C);
  return result;
}
