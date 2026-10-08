int __thiscall sub_415E50(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 0x29); /*0x415e53*/
  if ( v2 <= 0 ) /*0x415e5b*/
  {
    result = v2 - 1; /*0x415e72*/
    *(this + 0x29) = result; /*0x415e75*/
  }
  else
  {
    PrintError("Trying to Queue up a Magic Effect Associated Item which is already loaded"); /*0x415e62*/
    return *(this + 0x29); /*0x415e67*/
  }
  return result; /*0x415e70*/
}
