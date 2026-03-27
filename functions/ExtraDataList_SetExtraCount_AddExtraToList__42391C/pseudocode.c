// positive sp value has been detected, the output may be wrong!
int __userpurge ExtraDataList_SetExtraCount_::AddExtraToList@<eax>(
        BSExtraData *a1@<eax>,
        ExtraDataList *a2@<edi>,
        int a3)
{
  return BaseExtraList_AddExtra(a2, a1);
}
