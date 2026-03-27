UInt8 __thiscall HighProcess::CopyFrom(HighProcess *this, HighProcess *a2)
{
  DetectionList *v4; // eax
  DetectionList::Data *data; // ebp
  DetectionList *i; // esi
  DetectionList *v7; // eax
  UInt8 result; // al
  DetectionList *detectionList; // [esp+Ch] [ebp+4h]

  this->unk1BC = a2->unk1BC;
  this->unk1AC = a2->unk1AC;
  this->unk1B0 = a2->unk1B0;
  this->unk1B4 = a2->unk1B4;
  this->unk25D = a2->unk25D;
  detectionList = a2->detectionList;
  v4 = detectionList;
  if ( detectionList )
  {
    while ( 1 )
    {
      data = v4->data;
      if ( !v4->data )
        break;
      for ( i = this->detectionList; i->next; i = i->next )
        ;
      if ( i->data )
      {
        v7 = (DetectionList *)FormHeapAlloc(8u);
        if ( v7 )
        {
          v7->data = data;
          v7->next = 0;
          i->next = v7;
        }
        else
        {
          i->next = 0;
        }
        v4 = detectionList;
      }
      else
      {
        i->data = data;
      }
      detectionList = v4->next;
      if ( !detectionList )
        break;
      v4 = v4->next;
    }
  }
  this->unk1EC = a2->unk1EC;
  this->unk1F0 = a2->unk1F0;
  this->unk294 = a2->unk294;
  this->unk298 = a2->unk298;
  this->unk29C = a2->unk29C;
  this->unk2A0 = a2->unk2A0;
  this->unk2A9 = a2->unk2A9;
  this->unk2B4 = a2->unk2B4;
  result = a2->unk2B8;
  this->unk2B8 = result;
  this->unk258 = a2->unk258;
  return result;
}
