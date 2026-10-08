void __usercall TESTopicInfo::~TESTopicInfo(TESTopicInfo *this@<ecx>, char a2@<bpl>)
{
  this->conditions.data = (ConditionEntry::Data *)&TESTopicInfo::`vftable'; /*0x5318a8*/
  sub_530DB0((int)this, a2); /*0x5318b6*/
  sub_56A7A0((BSSimpleList_VoidPtr *)&this->addedTopics.node.next); /*0x5318c3*/
  TESForm_destr((TESForm *)this); /*0x5318d2*/
}
