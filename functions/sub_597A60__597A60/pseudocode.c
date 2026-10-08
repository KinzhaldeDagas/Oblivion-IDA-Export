char __thiscall sub_597A60(char *this)
{
  char v1; // al
  char result; // al

  v1 = *this; /*0x597a60*/
  if ( *this < 0 ) /*0x597a6c*/
    result = v1 & 0x7F; /*0x597a73*/
  else
    result = v1 | 0x80; /*0x597a6e*/
  *this = result; /*0x597a70*/
  return result; /*0x597a72*/
}
