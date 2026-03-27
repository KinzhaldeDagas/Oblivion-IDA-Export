ExtraInfoGeneralTopic *__thiscall ExtraInfoGeneralTopic::ExtraInfoGeneralTopic(
        ExtraInfoGeneralTopic *this,
        UnkBohDialogueTopicBoh *a2)
{
  this->super.members.type = 0x59;
  this->super.members.next = 0;
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraInfoGeneralTopic::`vftable';
  this->GeneralTopicData = a2;
  return this;
}
