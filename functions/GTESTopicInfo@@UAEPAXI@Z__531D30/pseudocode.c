TESTopicInfo *__userpurge TESTopicInfo::`scalar deleting destructor'@<eax>(
        TESTopicInfo *this@<ecx>,
        char a2@<bpl>,
        char a3)
{
  TESTopicInfo::~TESTopicInfo(this, a2);
  if ( (a3 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
