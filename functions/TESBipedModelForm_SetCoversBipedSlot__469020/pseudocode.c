int __thiscall TESBipedModelForm_SetCoversBipedSlot(_WORD *this, char a2, char a3)
{
  int result; // eax

  result = 1 << a2;
  if ( a3 )
  {
    *(this + 2) |= result;
  }
  else
  {
    result = ~result;
    *(this + 2) &= result;
  }
  return result;
}
