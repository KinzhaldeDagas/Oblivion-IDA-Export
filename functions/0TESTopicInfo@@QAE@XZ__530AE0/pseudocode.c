TESTopicInfo *__thiscall TESTopicInfo::TESTopicInfo(TESTopicInfo *this, int a2)
{
  _DWORD *v3; // eax

  TESForm_constr((TESForm *)this); /*0x530b09*/
  this->conditions.data = (ConditionEntry::Data *)&TESTopicInfo::`vftable'; /*0x530b17*/
  DNameNode::DNameNode((DNameNode *)&this->addedTopics.node.next); /*0x530b1d*/
  *((_DWORD *)this + 0xA) = 0; /*0x530b22*/
  *((_DWORD *)this + 0xB) = 0; /*0x530b25*/
  *(_WORD *)((char *)&this->unk34 + 3) = 0; /*0x530b2a*/
  *((_BYTE *)this + 0x25) = 0; /*0x530b2e*/
  *((_DWORD *)this + 0xD) = 0; /*0x530b38*/
  BYTE2(this->unk34) = 0;                       // Constructor initializes the INFO-global spoken byte at +0x22 to false. Plugin DATA does not supply this runtime byte; modified-form loading restores it. /*0x530b3b*/
  LOWORD(this->unk34) = 0xFFFF; /*0x530b3e*/
  LOBYTE(this->conditions.next) = 0x3A; /*0x530b44*/
  *((_DWORD *)this + 0xC) = 0; /*0x530b48*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x530b4b*/
  HIBYTE(this->unk34) = a2; /*0x530b57*/
  if ( a2 == 1 ) /*0x530b5a*/
  {
    v3 = (_DWORD *)FormHeapAlloc(0x10u); /*0x530b5e*/
    if ( v3 ) /*0x530b68*/
    {
      *v3 = 0; /*0x530b6a*/
      v3[1] = 0; /*0x530b6c*/
      v3[2] = 0; /*0x530b6f*/
      v3[3] = 0; /*0x530b72*/
    }
    else
    {
      v3 = 0; /*0x530b77*/
    }
    *((_BYTE *)this + 0x25) |= 2u; /*0x530b79*/
    *((_DWORD *)this + 0xC) = v3; /*0x530b7d*/
  }
  return this; /*0x530b82*/
}
