UInt8 __thiscall HighProcess::CopyFrom(HighProcess *this, HighProcess *a2)
{
  DetectionList *v4; // eax
  DetectionList::Data *data; // ebp
  DetectionList *i; // esi
  DetectionList *v7; // eax
  UInt8 result; // al
  DetectionList *detectionList; // [esp+Ch] [ebp+4h]

  this->unk1BC = a2->unk1BC; /*0x6299fe*/
  this->unk1AC = a2->unk1AC; /*0x629a2e*/
  this->unk1B0 = a2->unk1B0; /*0x629a3a*/
  this->unk1B4 = a2->unk1B4; /*0x629a46*/
  this->unk25D = a2->unk25D; /*0x629a52*/
  detectionList = a2->detectionList; /*0x629a60*/
  v4 = detectionList; /*0x629a58*/
  if ( detectionList ) /*0x629a64*/
  {
    while ( 1 ) /*0x629a74*/
    {
      data = v4->data; /*0x629a74*/
      if ( !v4->data ) /*0x629a74*/
        break; /*0x629a74*/
      for ( i = this->detectionList; i->next; i = i->next ) /*0x629a80*/
        ; /*0x629a86*/
      if ( i->data ) /*0x629a8f*/
      {
        v7 = (DetectionList *)FormHeapAlloc(8u); /*0x629a96*/
        if ( v7 ) /*0x629aa0*/
        {
          v7->data = data; /*0x629aa2*/
          v7->next = 0; /*0x629aa4*/
          i->next = v7; /*0x629aab*/
        }
        else
        {
          i->next = 0; /*0x629ab6*/
        }
        v4 = detectionList; /*0x629aae*/
      }
      else
      {
        i->data = data; /*0x629abf*/
      }
      detectionList = v4->next; /*0x629ac6*/
      if ( !detectionList ) /*0x629aca*/
        break; /*0x629aca*/
      v4 = v4->next; /*0x629a70*/
    }
  }
  this->unk1EC = a2->unk1EC; /*0x629ad4*/
  this->unk1F0 = a2->unk1F0; /*0x629ae0*/
  this->unk294 = a2->unk294; /*0x629aec*/
  this->unk298 = a2->unk298; /*0x629af8*/
  this->unk29C = a2->unk29C; /*0x629b04*/
  this->unk2A0 = a2->unk2A0; /*0x629b10*/
  this->unk2A9 = a2->unk2A9; /*0x629b1c*/
  this->unk2B4 = a2->unk2B4; /*0x629b28*/
  result = a2->unk2B8; /*0x629b2e*/
  this->unk2B8 = result; /*0x629b34*/
  this->unk258 = a2->unk258; /*0x629b40*/
  return result; /*0x629b46*/
}
