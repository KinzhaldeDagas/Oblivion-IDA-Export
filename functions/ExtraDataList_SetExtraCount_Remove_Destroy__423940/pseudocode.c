void __userpurge ExtraDataList_SetExtraCount_::Remove_Destroy(int a1@<eax>, ExtraDataList *a2@<edi>, int a3)
{
  if ( a1 ) /*0x423942*/
    BaseExtraList_RemoveExtraByPtr(a2, a1, 1); /*0x423949*/
  ExtraDataList_SetExtraCount_::Done(a3); /*0x42394a*/
}
