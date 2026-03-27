int __userpurge ExtraDataList_CompareListForContainer_::ExtraDataLoop@<eax>(
        BSExtraData *a1@<esi>,
        ExtraDataList *edi0@<edi>,
        int a3,
        int a4,
        int a2)
{
  UInt8 type; // al
  BSExtraData *ExtraData; // eax

  type = a1->members.type;
  if ( type == 0x12 )
    return ExtraDataList_CompareListForContainer_::Return_1(a3);
  if ( type == 0x27 )
    return ExtraDataList_CompareListForContainer_::Return_1(a3);
  if ( type != 0x2A
    && ((ExtraData = BaseExtraList_GetExtraData(edi0, (ExtraDataType)a1->members.type)) == 0
     || ExtraData->vtbl->CompareTo(ExtraData, a1)) )
  {
    return ExtraDataList_CompareListForContainer_::Return_1(a3);
  }
  else
  {
    return ExtraDataList_CompareListForContainer_::ExtraDataLoop_Next((int)a1, a3);
  }
}
