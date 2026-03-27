void __thiscall ExtraInfoGeneralTopic::~ExtraInfoGeneralTopic(ExtraInfoGeneralTopic *this)
{
  UInt32 *GeneralTopicData; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraInfoGeneralTopic::`vftable';
  this->GeneralTopicData->isInfoGeneralTopic = 0;
  GeneralTopicData = (UInt32 *)this->GeneralTopicData;
  if ( GeneralTopicData )
  {
    sub_6B8F50(GeneralTopicData);
    FormHeapFree((unsigned int)GeneralTopicData);
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable';
}
