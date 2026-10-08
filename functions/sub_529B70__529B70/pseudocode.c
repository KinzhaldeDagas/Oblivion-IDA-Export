unsigned __int8 **__thiscall sub_529B70(unsigned __int8 **this)
{
  unsigned __int8 **result; // eax
  unsigned __int8 v2; // bl
  unsigned __int8 **v3; // edx
  unsigned __int8 *v4; // eax
  unsigned __int8 v5; // al

  result = this + 0x10; /*0x529b71*/
  v2 = 0; /*0x529b74*/
  if ( this != (unsigned __int8 **)0xFFFFFFC0 ) /*0x529b78*/
  {
    do /*0x529b9f*/
    {
      v3 = (unsigned __int8 **)result[1]; /*0x529b80*/
      if ( !v3 && !*result ) /*0x529b87*/
        break; /*0x529b89*/
      v4 = *result; /*0x529b8b*/
      if ( v4[1] ) /*0x529b8d*/
      {
        v5 = *v4; /*0x529b93*/
        if ( v5 > v2 ) /*0x529b97*/
          v2 = v5; /*0x529b99*/
      }
      result = v3; /*0x529b9b*/
    }
    while ( v3 ); /*0x529b9f*/
  }
  if ( v2 > *((_BYTE *)this + 0x5C) ) /*0x529ba4*/
    *((_BYTE *)this + 0x5C) = v2; /*0x529ba6*/
  return result; /*0x529ba9*/
}
