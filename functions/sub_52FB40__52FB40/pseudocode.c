// TESTopic constructor stores the DialogueType argument in topicType. New runtime DIAL records are constructed with zero at 0x44E49C. LoadForm does not initialize a separate scratch candidate for DATA.
TESTopic *__thiscall TESTopic::TESTopic(TESTopic *this, DialogueType topicType)
{
  TESForm_constr((TESForm *)this); /*0x52fb43*/
  this->fullname.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x52fb48*/
  this->fullname.name.m_data = 0; /*0x52fb51*/
  this->fullname.name.m_dataLen = 0; /*0x52fb54*/
  this->fullname.name.m_bufLen = 0; /*0x52fb58*/
  this->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'}; /*0x52fb5c*/
  this->fullname.vtbl = (BaseFormComponentVtbl *)&TESTopic::`vftable'{for `TESFullName'}; /*0x52fb62*/
  this->questInfoEntries.data = 0; /*0x52fb69*/
  this->questInfoEntries.next = 0; /*0x52fb6c*/
  this->editorID.m_data = 0; /*0x52fb6f*/
  this->editorID.m_dataLen = 0; /*0x52fb72*/
  this->editorID.m_bufLen = 0; /*0x52fb76*/
  this->unk30 = 0;                              // TESTopic constructor initializes the runtime XIDX backing field unk30 to zero; topicType is a separate field assigned from the constructor argument at 0x52FB81. /*0x52fb7a*/
  this->topicType = topicType; /*0x52fb81*/
  this->super.type = kFormType_Dialog; /*0x52fb84*/
  return this; /*0x52fb8a*/
}
