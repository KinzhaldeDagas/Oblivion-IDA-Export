int __thiscall sub_484780(ExtraDataList ***this)
{
  ExtraDataList **v1; // esi
  int i; // ebx
  ExtraDataList *v3; // edi

  v1 = *this;
  for ( i = 0; v1; v1 = (ExtraDataList **)v1[1] )
  {
    v3 = *v1;
    if ( !*v1 )
      break;
    if ( ExtraDataList_IsExtraDefaultForContainer_all(*v1) )
      i += ExtraDataList_GetExtraCount(v3);
  }
  return i;
}
