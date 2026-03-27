void __userpurge sub_484E20(
        ExtraDataList ***this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        BSExtraDataVtbl *a6)
{
  ExtraDataList **v6; // eax
  ExtraDataList *v7; // esi

  v6 = *this;
  if ( *this )
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( !ExtraDataList_GetPoison(*v6) )
      {
        sub_41EFD0(v7, a6);
        sub_57B230(bp0, a3, a4, a5);
      }
    }
  }
}
