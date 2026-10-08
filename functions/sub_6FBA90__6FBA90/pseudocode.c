NiObject *__cdecl sub_6FBA90(NiObjectNET *a1)
{
  NiObject *result; // eax
  NiObject *ExtraData; // eax

  result = 0; /*0x6fba94*/
  if ( a1 ) /*0x6fba98*/
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, (const char *)&off_A7D2CC); /*0x6fba9f*/
    return NiRTTI_Cast((BSStringT *)stru_B3F4BC, ExtraData); /*0x6fbaaa*/
  }
  return result; /*0x6fbab2*/
}
