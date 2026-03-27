char __cdecl sub_56B1D0(unsigned int a1, unsigned int a2)
{
  char result; // al

  result = 0;
  if ( a1 < 0x171
    && a2 < Script_CommandList_[a1].numParams
    && (Script_CommandList_[a1].params[a2].typeID == 4 || Script_CommandList_[a1].params[a2].typeID == 6) )
  {
    return 1;
  }
  return result;
}
