// Builds IdleAnims lookup root from actor model path: preserves existing IdleAnims prefix or appends IdleAnims to model directory.
char *__cdecl TESIdleForm_BuildIdleAnimsRoot(char *a1, BSStringT *a2)
{
  char *result; // eax
  char v3; // cl
  char *v4; // eax
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  FormHeapFree((unsigned int)a2->m_data); /*0x521390*/
  result = a1; /*0x521395*/
  a2->m_data = 0; /*0x5213a3*/
  a2->m_bufLen = 0; /*0x5213a5*/
  a2->m_dataLen = 0; /*0x5213a9*/
  if ( a1 ) /*0x5213ad*/
  {
    if ( *a1 ) /*0x5213b3*/
    {
      do /*0x5213cb*/
      {
        v3 = *result; /*0x5213c1*/
        result[Str - a1] = *result; /*0x5213c3*/
        ++result; /*0x5213c6*/
      }
      while ( v3 ); /*0x5213cb*/
      v4 = strstr(Str, aIdleanims); /*0x5213d7*/
      if ( v4 ) /*0x5213e1*/
      {
        v4[9] = 0; /*0x5213eb*/
        return (char *)BSStringT_Set(a2, Str, 0); /*0x5213ee*/
      }
      else
      {
        result = strrchr(Str, 0x5C); /*0x521411*/
        if ( result ) /*0x52141b*/
        {
          result[1] = 0; /*0x521425*/
          BSStringT_Set(a2, Str, 0); /*0x521428*/
          return (char *)BSStringT_Append(a2, aIdleanims); /*0x521434*/
        }
      }
    }
  }
  return result; /*0x5213f3*/
}
