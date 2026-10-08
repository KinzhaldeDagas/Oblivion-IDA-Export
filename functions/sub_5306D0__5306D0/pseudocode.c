UInt32 __thiscall sub_5306D0(TESForm *this, TESForm *a2)
{
  TESForm::FormFlags flags; // eax
  int *TopicInfoParent; // eax

  flags = this->member.flags; /*0x5306d8*/
  if ( (flags & 0x4000) == 0 ) /*0x5306e3*/
  {
    if ( (_BYTE)a2 ) /*0x5306e7*/
    {
      if ( (flags & 8) != 0 ) /*0x5306ee*/
      {
        TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this); /*0x5306f1*/
        if ( TopicInfoParent ) /*0x5306fb*/
          (*(void (__thiscall **)(int *, int))(*TopicInfoParent + 0x90))(TopicInfoParent, 1); /*0x530709*/
      }
    }
  }
  return TESForm_SetFromActiveFile(this, (bool)a2); /*0x530713*/
}
