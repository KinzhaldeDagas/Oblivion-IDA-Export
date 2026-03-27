int __userpurge ExtraDataList_SetExtraCount_::Remove_Destroy@<eax>(int a1@<eax>, ExtraDataList *a2@<edi>, int a3)
{
  if ( a1 )
    BaseExtraList_RemoveExtraByPtr(a2, a1, 1);
  return ExtraDataList_SetExtraCount_::Done(a3);
}
