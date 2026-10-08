void __userpurge sub_424DE0(ExtraDataList *this@<ecx>, char a2@<bpl>, const char *a3)
{
  ExtraLastFinishedSequence *v4; // eax
  BSExtraData *FinishedSequence; // eax

  BaseExtraList_RemoveExtraByType(this, 0x4Au); /*0x424e06*/
  if ( a3 ) /*0x424e11*/
  {
    v4 = (ExtraLastFinishedSequence *)FormHeapAlloc(0x10u); /*0x424e15*/
    if ( v4 ) /*0x424e2b*/
      FinishedSequence = (BSExtraData *)ExtraLastFinishedSequence::ExtraLastFinishedSequence(v4, a2, a3); /*0x424e30*/
    else
      FinishedSequence = 0; /*0x424e37*/
    BaseExtraList_AddExtra(this, FinishedSequence); /*0x424e44*/
  }
}
