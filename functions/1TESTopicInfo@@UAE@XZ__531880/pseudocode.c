void __usercall TESTopicInfo::~TESTopicInfo(TESTopicInfo *this@<ecx>, char a2@<bpl>)
{
  this->conditions.data = (ConditionEntry::Data *)&TESTopicInfo::`vftable';
  sub_530DB0((int)this, a2);
  sub_56A7A0(&this->addedTopics.node.next);
  TESForm_destr((TESForm *)this);
}
