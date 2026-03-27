unsigned int *__usercall sub_57A180@<eax>(
        char a1@<bpl>,
        char a2@<bl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->unk054[3] )
  {
    return sub_5B3760(a1, a2, a3, a5, a4);
  }
  else
  {
    return 0;
  }
}
