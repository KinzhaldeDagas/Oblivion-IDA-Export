int __thiscall sub_56A480(UInt32 *this, TESForm *a2)
{
  UInt32 *i; // esi
  int result; // eax

  for ( i = this; i; i = (UInt32 *)i[1] ) /*0x56a485*/
  {
    if ( !i[1] && !*i ) /*0x56a496*/
      break; /*0x56a499*/
    result = sub_56AE20(*i, a2); /*0x56a49e*/
  }
  return result; /*0x56a4ab*/
}
