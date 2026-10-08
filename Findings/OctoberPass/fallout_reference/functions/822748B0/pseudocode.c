BSExtraData *__fastcall ExtraDataList::GetDecalRefs(ExtraDataList *this)
{
  BSExtraData *ExtraData; // r3
  BSExtraData *result; // r3
  bool v3; // zf

  ExtraData = BaseExtraList::GetExtraData(this, 0x57u); /*0x822748c0*/
  v3 = ExtraData != nullptr; /*0x822748cc*/
  result = ExtraData + 1; /*0x822748c8*/
  if ( !v3 ) /*0x822748cc*/
    return nullptr; /*0x822748d0*/
  return result; /*0x822748d4*/
}
