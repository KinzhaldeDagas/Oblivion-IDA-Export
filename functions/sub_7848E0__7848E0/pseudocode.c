_DWORD *__usercall sub_7848E0@<eax>(_DWORD *result@<eax>, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
      {
        *result = *a4;
        result[1] = a4[1];
        result[2] = a4[2];
        result[3] = a4[3];
        result[4] = a4[4];
        result[5] = a4[5];
      }
      --v4;
      result += 6;
    }
    while ( v4 );
  }
  return result;
}
