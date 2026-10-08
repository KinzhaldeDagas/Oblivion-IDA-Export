NiObject *__cdecl sub_6FA970(NiObjectNET *a1)
{
  NiObject *result; // eax
  NiObject *ExtraData; // eax

  result = 0; /*0x6fa974*/
  if ( a1 ) /*0x6fa978*/
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, dword_A7D0EC); /*0x6fa97f*/
    return NiRTTI_Cast((BSStringT *)&stru_B3F484, ExtraData); /*0x6fa98a*/
  }
  return result; /*0x6fa992*/
}
