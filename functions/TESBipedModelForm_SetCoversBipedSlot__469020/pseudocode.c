int __thiscall TESBipedModelForm_SetCoversBipedSlot(_WORD *this, char a2, char a3)
{
  int result; // eax

  result = 1 << a2; /*0x46902b*/
  if ( a3 ) /*0x469032*/
  {
    *(this + 2) |= result; /*0x469034*/
  }
  else
  {
    result = ~result; /*0x46903b*/
    *(this + 2) &= result; /*0x46903d*/
  }
  return result; /*0x469038*/
}
