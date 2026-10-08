// Verified: serializes region-data type/override/priority base header into RDAT.
void *__thiscall TESRegionData_SaveHeader(TESRegionData *self)
{
  int v2; // eax
  unsigned __int8 priority; // cl
  size_t v5; // [esp-4h] [ebp-10h]
  int Src; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  Src = 0; /*0x4a3568*/
  v7 = 0; /*0x4a356c*/
  v2 = ((int (__thiscall *)(TESRegionData *))self->vtable->unknown0C)(self); /*0x4a3575*/
  priority = self->priority; /*0x4a3577*/
  LODWORD(v5) = 8; /*0x4a357a*/
  Src = v2; /*0x4a3580*/
  LOBYTE(v7) = self->bOverride; /*0x4a358d*/
  BYTE1(v7) = priority; /*0x4a3591*/
  return TESForm_PutFormRecordChunkData(0x54414452, &Src, v5); /*0x4a359d*/
}
