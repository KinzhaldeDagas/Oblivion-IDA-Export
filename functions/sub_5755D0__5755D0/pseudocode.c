bool __thiscall sub_5755D0(const char **this, char *Str2)
{
  if ( Str2 && *this ) /*0x5755d8*/
    return CRT_StricmpLocaleDispatch(*this, Str2) == 0; /*0x5755ef*/
  else
    return 2 * (Str2 == 0) == 1; /*0x575606*/
}
