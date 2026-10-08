DetectionList::Data *__thiscall HighProcess::GetDetectionData(HighProcess *this, Actor *a2)
{
  DetectionList *detectionList; // ecx
  DetectionList::Data *result; // eax

  detectionList = this->detectionList; /*0x631c50*/
  for ( result = 0; detectionList; detectionList = detectionList->next ) /*0x631c5a*/
  {
    if ( !detectionList->data ) /*0x631c61*/
      break; /*0x631c65*/
    if ( result ) /*0x631c69*/
      break; /*0x631c69*/
    if ( detectionList->data->actor == a2 ) /*0x631c6d*/
      result = detectionList->data; /*0x631c6f*/
  }
  return result; /*0x631c79*/
}
