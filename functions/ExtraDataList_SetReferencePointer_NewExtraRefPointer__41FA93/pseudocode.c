// positive sp value has been detected, the output may be wrong!
int __userpurge ExtraDataList_SetReferencePointer_::NewExtraRefPointer@<eax>(
        ExtraDataList *a1@<edi>,
        int a2@<esi>,
        int a3)
{
  _BYTE *v3; // eax
  BSExtraData *v4; // eax

  v3 = (_BYTE *)FormHeapAlloc(0x10u);
  if ( v3 )
    v4 = (BSExtraData *)ExtraReferencePointer_constr(v3, a2);
  else
    v4 = 0;
  return BaseExtraList_AddExtra(a1, v4);
}
