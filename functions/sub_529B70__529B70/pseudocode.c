unsigned __int8 **__thiscall sub_529B70(unsigned __int8 **this)
{
  unsigned __int8 **result; // eax
  unsigned __int8 v2; // bl
  unsigned __int8 **v3; // edx
  unsigned __int8 *v4; // eax
  unsigned __int8 v5; // al

  result = this + 0x10;
  v2 = 0;
  if ( this != (unsigned __int8 **)0xFFFFFFC0 )
  {
    do
    {
      v3 = (unsigned __int8 **)result[1];
      if ( !v3 && !*result )
        break;
      v4 = *result;
      if ( v4[1] )
      {
        v5 = *v4;
        if ( v5 > v2 )
          v2 = v5;
      }
      result = v3;
    }
    while ( v3 );
  }
  if ( v2 > *((_BYTE *)this + 0x5C) )
    *((_BYTE *)this + 0x5C) = v2;
  return result;
}
