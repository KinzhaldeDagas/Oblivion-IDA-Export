NiObject *__cdecl sub_6FBA90(NiObjectNET *a1)
{
  NiObject *result; // eax
  NiObject *ExtraData; // eax

  result = 0;
  if ( a1 )
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, (const char *)&off_A7D2CC);
    return NiRTTI_Cast((BSStringT *)dword_B3F4BC, ExtraData);
  }
  return result;
}
