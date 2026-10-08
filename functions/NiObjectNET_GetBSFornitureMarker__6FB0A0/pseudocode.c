BSFurnitureMarker *__cdecl NiObjectNET::GetBSFornitureMarker(NiObjectNET *a1)
{
  BSFurnitureMarker *result; // eax
  NiObject *ExtraData; // eax

  result = 0; /*0x6fb0a4*/
  if ( a1 ) /*0x6fb0a8*/
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, off_A7D238); /*0x6fb0af*/
    return (BSFurnitureMarker *)NiRTTI_Cast((BSStringT *)&stru_B3F4B4, ExtraData); /*0x6fb0ba*/
  }
  return result; /*0x6fb0c2*/
}
