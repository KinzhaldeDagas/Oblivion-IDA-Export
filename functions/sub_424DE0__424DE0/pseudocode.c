void __thiscall sub_424DE0(ExtraDataList *this, const char *a2)
{
  ExtraLastFinishedSequence *v3; // eax
  BSExtraData *FinishedSequence; // eax

  BaseExtraList_RemoveExtraByType(this, 0x4Au);
  if ( a2 )
  {
    v3 = (ExtraLastFinishedSequence *)FormHeapAlloc(0x10u);
    if ( v3 )
      FinishedSequence = (BSExtraData *)ExtraLastFinishedSequence::ExtraLastFinishedSequence(v3, a2);
    else
      FinishedSequence = 0;
    BaseExtraList_AddExtra(this, FinishedSequence);
  }
}
