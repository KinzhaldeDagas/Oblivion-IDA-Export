DetectionList::Data *__thiscall HighProcess::GetDetectionData(HighProcess *this, Actor *a2)
{
  DetectionList *detectionList; // ecx
  DetectionList::Data *result; // eax

  detectionList = this->detectionList;
  for ( result = 0; detectionList; detectionList = detectionList->next )
  {
    if ( !detectionList->data )
      break;
    if ( result )
      break;
    if ( detectionList->data->actor == a2 )
      result = detectionList->data;
  }
  return result;
}
