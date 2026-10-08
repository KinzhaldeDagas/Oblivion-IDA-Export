NiObject *__stdcall sub_44CD80(int a1, int a2, int a3, int a4, char a5)
{
  NiObject *result; // eax

  result = (NiObject *)a1; /*0x44cd80*/
  if ( a1 ) /*0x44cd86*/
  {
    result = NiRTTI_Cast((BSStringT *)&stru_B3F95C, *(NiObject **)(a1 + 8)); /*0x44cd91*/
    if ( result ) /*0x44cd9b*/
      return (NiObject *)nullsub_return0_0arg(); /*0x44cdd6*/
  }
  return result; /*0x44cdde*/
}
