int __thiscall sub_56A480(UInt32 *this, TESForm *a2)
{
  UInt32 *i; // esi
  int result; // eax

  for ( i = this; i; i = (UInt32 *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    result = sub_56AE20(*i, a2);
  }
  return result;
}
