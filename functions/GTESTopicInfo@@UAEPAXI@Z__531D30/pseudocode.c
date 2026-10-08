TESTopicInfo *__userpurge TESTopicInfo::`scalar deleting destructor'@<eax>(
        TESTopicInfo *this@<ecx>,
        char a2@<bpl>,
        char a3)
{
  TESTopicInfo::~TESTopicInfo(this, a2); /*0x531d33*/
  if ( (a3 & 1) != 0 ) /*0x531d3d*/
    FormHeapFree((unsigned int)this); /*0x531d40*/
  return this; /*0x531d4a*/
}
