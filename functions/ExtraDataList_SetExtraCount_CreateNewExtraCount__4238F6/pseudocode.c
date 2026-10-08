int __userpurge ExtraDataList_SetExtraCount_::CreateNewExtraCount@<eax>(
        __int16 a1@<si>,
        ExtraDataList *a2@<edi>,
        int a3)
{
  _BYTE *v3; // eax
  BSExtraData *v4; // eax

  v3 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4238f8*/
  if ( v3 ) /*0x42390e*/
    v4 = (BSExtraData *)ExtraCount_constr(v3, a1); /*0x423913*/
  else
    v4 = 0; /*0x42391a*/
  return ExtraDataList_SetExtraCount_::AddExtraToList(v4, a2, a3);
}
