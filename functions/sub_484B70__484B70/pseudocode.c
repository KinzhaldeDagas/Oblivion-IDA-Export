void __thiscall sub_484B70(ExtraDataList ***this)
{
  ExtraDataList **v1; // eax
  ExtraDataList *v2; // esi

  v1 = *this;
  if ( *this )
  {
    v2 = *v1;
    if ( *v1 )
    {
      if ( ExtraDataList_GetOwner(*v1) )
        ExtraDataList_GetOwner(v2);
    }
  }
}
