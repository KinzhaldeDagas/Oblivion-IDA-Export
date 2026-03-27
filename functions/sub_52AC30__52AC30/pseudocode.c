int __thiscall sub_52AC30(int *this, char a2)
{
  int *v2; // ecx
  int result; // eax

  v2 = this + 1;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    result = *v2;
    if ( *v2 )
    {
      if ( *(_BYTE *)(result + 0x60) == a2 )
        break;
    }
    v2 = (int *)v2[1];
    if ( !v2 )
      return 0;
  }
  return result;
}
