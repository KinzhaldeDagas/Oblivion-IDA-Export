// Verified: reads region-data base header fields from RDAT payload; pair with SaveHeader for exact serialization layout.
bool __thiscall TESRegionData_LoadHeader(TESRegionData *self, unsigned __int8 *data)
{
  unsigned __int8 v3; // al

  if ( !data ) /*0x4a35b6*/
    return 0; /*0x4a35b8*/
  self->bOverride = data[4]; /*0x4a35c0*/
  v3 = data[5]; /*0x4a35c3*/
  if ( v3 <= 0x64u ) /*0x4a35c8*/
    self->priority = v3; /*0x4a35ca*/
  return 1; /*0x4a35ba*/
}
