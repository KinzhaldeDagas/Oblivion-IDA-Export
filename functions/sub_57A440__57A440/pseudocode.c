BSStringT *__usercall sub_57A440@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  if ( InterfaceManager_GetSingleton(0, 1) /*0x57a46e*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->unk054[3] )
  {
    return StatsMenu_Create(a1, a3, a2); /*0x57a474*/
  }
  else
  {
    return 0; /*0x57a479*/
  }
}
