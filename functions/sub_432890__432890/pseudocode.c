char __thiscall sub_432890(volatile LONG *this)
{
  char result; // al

  result = sub_432350(this); /*0x432890*/
  if ( result ) /*0x432897*/
    return sub_431FA0(*((volatile LONG **)MEMORY[0xB33A1C] + 6)); /*0x4328a1*/
  return result; /*0x4328a6*/
}
