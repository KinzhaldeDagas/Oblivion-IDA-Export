int *__thiscall TESRegionDataSound_Destructor(int *this, char a2)
{
  *this = (int)&TESRegionDataSound::`vftable'; /*0x4a55e3*/
  TESRegionDataSound_ClearRecords(this); /*0x4a55e9*/
  TESRegionData_SetBaseVTable(this); /*0x4a55f0*/
  if ( (a2 & 1) != 0 ) /*0x4a55fa*/
    FormHeapFree((unsigned int)this); /*0x4a55fd*/
  return this; /*0x4a5607*/
}
