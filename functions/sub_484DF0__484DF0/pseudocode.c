BSExtraDataVtbl *__thiscall sub_484DF0(ExtraDataList ***this)
{
  ExtraDataList **v1; // eax
  ExtraDataList *v2; // esi

  v1 = *this;
  if ( *this && (v2 = *v1) != 0 && ExtraDataList_GetPoison(*v1) )
    return ExtraDataList_GetPoison(v2);
  else
    return 0;
}
