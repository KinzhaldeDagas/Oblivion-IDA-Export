int __userpurge ExtraDataList_SetExtraCount_::CreateNewExtraCount@<eax>(__int16 a1@<si>, int a2)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0x10u);
  if ( v2 )
    ExtraCount_constr(v2, a1);
  return ExtraDataList_SetExtraCount_::AddExtraToList(a2);
}
