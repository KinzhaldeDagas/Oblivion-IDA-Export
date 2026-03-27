char __thiscall sub_597A60(char *this)
{
  char v1; // al
  char result; // al

  v1 = *this;
  if ( *this < 0 )
    result = v1 & 0x7F;
  else
    result = v1 | 0x80;
  *this = result;
  return result;
}
