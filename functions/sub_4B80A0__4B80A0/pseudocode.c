char __thiscall sub_4B80A0(char *this, unsigned __int8 *a2)
{
  char *v3; // eax

  if ( !a2 )
    return 0;
  if ( !sub_4B7930(a2) )
    return 0;
  v3 = this + 0x68;
  if ( this == (char *)0xFFFFFF98 )
    return 0;
  while ( *(unsigned __int8 **)v3 != a2 )
  {
    v3 = *((char **)v3 + 1);
    if ( !v3 )
      return 0;
  }
  return 1;
}
