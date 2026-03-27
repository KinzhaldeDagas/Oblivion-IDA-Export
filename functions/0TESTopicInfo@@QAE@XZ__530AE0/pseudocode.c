TESTopicInfo *__thiscall TESTopicInfo::TESTopicInfo(TESTopicInfo *this, int a2)
{
  _DWORD *v3; // eax

  TESForm_constr((TESForm *)this);
  this->conditions.data = (ConditionEntry::Data *)&TESTopicInfo::`vftable';
  DNameNode::DNameNode((DNameNode *)&this->addedTopics.node.next);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *(_WORD *)((char *)&this->unk34 + 3) = 0;
  *((_BYTE *)this + 0x25) = 0;
  *((_DWORD *)this + 0xD) = 0;
  BYTE2(this->unk34) = 0;
  LOWORD(this->unk34) = 0xFFFF;
  LOBYTE(this->conditions.next) = 0x3A;
  *((_DWORD *)this + 0xC) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  HIBYTE(this->unk34) = a2;
  if ( a2 == 1 )
  {
    v3 = (_DWORD *)FormHeapAlloc(0x10u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 0;
    }
    else
    {
      v3 = 0;
    }
    *((_BYTE *)this + 0x25) |= 2u;
    *((_DWORD *)this + 0xC) = v3;
  }
  return this;
}
