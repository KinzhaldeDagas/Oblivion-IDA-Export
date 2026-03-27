UInt32 __thiscall sub_5306D0(TESForm *this, TESForm *a2)
{
  TESForm::FormFlags flags; // eax
  int *TopicInfoParent; // eax

  flags = this->member.flags;
  if ( (flags & 0x4000) == 0 )
  {
    if ( (_BYTE)a2 )
    {
      if ( (flags & 8) != 0 )
      {
        TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this);
        if ( TopicInfoParent )
          (*(void (__thiscall **)(int *, int))(*TopicInfoParent + 0x90))(TopicInfoParent, 1);
      }
    }
  }
  return TESForm_SetFromActiveFile(this, a2);
}
