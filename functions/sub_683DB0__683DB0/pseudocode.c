char __thiscall sub_683DB0(char **this)
{
  char *v1; // ecx
  char result; // al
  char *v3; // ecx
  bool v4; // zf

  if ( *(this + 0x12) != (char *)1 ) /*0x683db9*/
  {
    if ( *(this + 0x12) == (char *)2 ) /*0x683dbe*/
    {
      v1 = *(this + 0xC); /*0x683dc0*/
      if ( v1 ) /*0x683dc5*/
      {
        if ( sub_680CB0(v1) == 4 ) /*0x683dcf*/
          return 1; /*0x683dd4*/
      }
    }
    return 0; /*0x683dcf*/
  }
  v3 = *(this + 0xC); /*0x683dd5*/
  if ( !v3 ) /*0x683dda*/
    return 0; /*0x683dda*/
  v4 = sub_680CB0(v3) == 3; /*0x683de1*/
  result = 1; /*0x683de4*/
  if ( !v4 ) /*0x683de6*/
    return 0; /*0x683de8*/
  return result; /*0x683dd3*/
}
