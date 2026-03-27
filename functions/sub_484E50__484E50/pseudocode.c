void __usercall sub_484E50(ExtraDataList ***a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  ExtraDataList **v5; // eax
  ExtraDataList *v6; // esi

  v5 = *a1;
  if ( *a1 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( ExtraDataList_GetPoison(*v5) )
      {
        sub_41F660(v6);
        sub_57B230(a2, a3, a4, a5);
      }
    }
  }
}
