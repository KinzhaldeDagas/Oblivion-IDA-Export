BSFurnitureMarker *__cdecl NiObjectNET::GetBSFornitureMarker(NiObjectNET *a1)
{
  BSFurnitureMarker *result; // eax
  NiObject *ExtraData; // eax

  result = 0;
  if ( a1 )
  {
    ExtraData = (NiObject *)NiObjectNET_GetExtraData(a1, off_A7D238);
    return (BSFurnitureMarker *)NiRTTI_Cast((BSStringT *)dword_B3F4B4, ExtraData);
  }
  return result;
}
