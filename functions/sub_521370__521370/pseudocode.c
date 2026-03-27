char *__cdecl sub_521370(char *a1, BSStringT *a2)
{
  char *result; // eax
  char v3; // cl
  char *v4; // eax
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  FormHeapFree((unsigned int)a2->m_data);
  result = a1;
  a2->m_data = 0;
  a2->m_bufLen = 0;
  a2->m_dataLen = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      do
      {
        v3 = *result;
        result[Str - a1] = *result;
        ++result;
      }
      while ( v3 );
      v4 = strstr(Str, aIdleanims);
      if ( v4 )
      {
        v4[9] = 0;
        return (char *)BSStringT_Set(a2, Str, 0);
      }
      else
      {
        result = strrchr(Str, 0x5C);
        if ( result )
        {
          result[1] = 0;
          BSStringT_Set(a2, Str, 0);
          return (char *)BSStringT_Append(a2, aIdleanims);
        }
      }
    }
  }
  return result;
}
