NiObject *__cdecl sub_6FA970(NiObjectNET *a1)
{
  NiObject *result; // eax
  NiObject *ExtraData; // eax

  result = 0;
  if ( a1 )
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, dword_A7D0EC);
    return NiRTTI_Cast((BSStringT *)dword_B3F484, ExtraData);
  }
  return result;
}
