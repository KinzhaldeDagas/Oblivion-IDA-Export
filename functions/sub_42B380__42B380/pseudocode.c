// Map marker writer emits FNAM exactly 1 byte, FULL as known length/strlen + 1 including terminal NUL, and TNAM exactly 2 bytes; caller emits empty XMRK first.
void *__thiscall MapMarkerData_SaveFNAM_FULL_TNAM(MapMarkerData *this)
{
  unsigned int v2; // eax
  char *m_data; // ecx
  size_t v5; // [esp-10h] [ebp-14h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v6) = 1; /*0x42b383*/
  TESForm_PutFormRecordChunkData(0x4D414E46, &this->flags, v6); /*0x42b38e*/
  LOWORD(v2) = this->fullName.name.m_dataLen; /*0x42b393*/
  if ( (_WORD)v2 == 0xFFFF ) /*0x42b39e*/
    v2 = strlen(this->fullName.name.m_data); /*0x42b3a3*/
  else
    v2 = (unsigned __int16)v2; /*0x42b3b3*/
  m_data = this->fullName.name.m_data; /*0x42b3b6*/
  if ( !m_data ) /*0x42b3bb*/
    m_data = EmptyString; /*0x42b3bd*/
  LODWORD(v7) = v2 + 1; /*0x42b3c5*/
  j_TESForm_PutCurrentChunkData(0x4C4C5546, m_data, v7); /*0x42b3cc*/
  LODWORD(v5) = 2; /*0x42b3d1*/
  return TESForm_PutFormRecordChunkData(0x4D414E54, &this->markerType, v5); /*0x42b3e4*/
}
