char __thiscall sub_683DB0(char **this)
{
  char *v1; // ecx
  char result; // al
  char *v3; // ecx
  bool v4; // zf

  if ( *(this + 0x12) != (char *)1 )
  {
    if ( *(this + 0x12) == (char *)2 )
    {
      v1 = *(this + 0xC);
      if ( v1 )
      {
        if ( sub_680CB0(v1) == 4 )
          return 1;
      }
    }
    return 0;
  }
  v3 = *(this + 0xC);
  if ( !v3 )
    return 0;
  v4 = sub_680CB0(v3) == 3;
  result = 1;
  if ( !v4 )
    return 0;
  return result;
}
