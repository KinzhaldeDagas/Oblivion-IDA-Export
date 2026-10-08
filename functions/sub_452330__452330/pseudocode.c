bool sub_452330()
{
  signed int v4; // eax
  int OpenedMenuCode; // eax
  bool result; // al

  result = 0; /*0x452397*/
  if ( Actor::GetDeadState((Actor *)reference) != 2 /*0x452356*/
    && Actor::GetDeadState((Actor *)reference) != 1
    && !sub_65D140(reference) )
  {
    v4 = sub_578FE0(); /*0x45235f*/
    if ( v4 == 0x40F || !v4 || v4 == 0x3F5 || v4 == 3 ) /*0x452379*/
    {
      OpenedMenuCode = GetOpenedMenuCode(); /*0x45237b*/
      if ( OpenedMenuCode == 0x40F || !OpenedMenuCode || OpenedMenuCode == 0x3F5 || OpenedMenuCode == 3 ) /*0x452395*/
        return 1; /*0x45233e*/
    }
  }
  return result; /*0x452399*/
}
