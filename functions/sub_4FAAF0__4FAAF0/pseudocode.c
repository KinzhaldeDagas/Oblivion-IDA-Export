TESDataHandler *sub_4FAAF0()
{
  TESDataHandler *result; // eax
  float *objectList; // ecx

  result = g_TESDataHandler; /*0x4faaf0*/
  if ( g_TESDataHandler ) /*0x4faaf0*/
  {
    result = (TESDataHandler *)((char *)result + 0x64); /*0x4faaf9*/
    if ( result ) /*0x4faafc*/
    {
      if ( result->packageList.item || result->objectList ) /*0x4fab04*/
      {
        do /*0x4fab15*/
        {
          objectList = (float *)result->objectList; /*0x4fab0b*/
          result = (TESDataHandler *)result->packageList.item; /*0x4fab0d*/
          objectList[0xD] = 0.0; /*0x4fab10*/
        }
        while ( result ); /*0x4fab15*/
      }
    }
  }
  return result; /*0x4fab19*/
}
