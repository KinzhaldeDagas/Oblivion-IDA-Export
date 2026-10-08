int sub_5C1100()
{
  int result; // eax
  const char *value; // edx
  int v2; // edi
  int v3; // esi

  result = *(_DWORD *)&byte_B3B418[0x18]; /*0x5c1100*/
  if ( *(_DWORD *)&byte_B3B418[0x18] == 0xFFFFFFFF ) /*0x5c1108*/
  {
    value = stru_B394C8.value; /*0x5c1112*/
    v2 = *(_DWORD *)&byte_B3B418[0x10]; /*0x5c1119*/
    if ( *(int *)&byte_B3B418[0x1C] < 0 || v2 <= (int)value ) /*0x5c1123*/
    {
      result = *(_DWORD *)&byte_B3B418[0x20]; /*0x5c1129*/
      v3 = *(_DWORD *)&byte_B3B418[0x14]; /*0x5c1131*/
      if ( *(int *)&byte_B3B418[0x20] < 0 || v3 <= (int)value ) /*0x5c113b*/
      {
        if ( *(int *)&byte_B3B418[0x1C] < 0 ) /*0x5c113f*/
        {
          return 0xFFFFFFFF; /*0x5c114e*/
        }
        else if ( result < 0 || v3 <= (unsigned int)v2 ) /*0x5c1147*/
        {
          return *(_DWORD *)&byte_B3B418[0x1C]; /*0x5c114a*/
        }
      }
    }
    else
    {
      return *(_DWORD *)&byte_B3B418[0x1C]; /*0x5c1125*/
    }
  }
  return result; /*0x5c1128*/
}
