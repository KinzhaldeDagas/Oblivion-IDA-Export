char __cdecl sub_56B190(unsigned int a1, unsigned int a2)
{
  char result; // al

  result = 0; /*0x56b194*/
  if ( a1 < 0x171 && a2 < Script_CommandList[a1].numParams ) /*0x56b1b6*/
    return *(_BYTE *)(8 * Script_CommandList[a1].params[a2].typeID + 0xB0A54D); /*0x56b1c5*/
  return result; /*0x56b1cc*/
}
