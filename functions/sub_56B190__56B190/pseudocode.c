char __cdecl sub_56B190(unsigned int a1, unsigned int a2)
{
  char result; // al

  result = 0;
  if ( a1 < 0x171 && a2 < Script_CommandList_[a1].numParams )
    return *(_BYTE *)(8 * Script_CommandList_[a1].params[a2].typeID + 0xB0A54D);
  return result;
}
