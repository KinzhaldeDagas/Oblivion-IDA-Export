// Pass223: Stores engine startup/shutdown callback pair for default property lifecycle.
int (*__cdecl sub_747C20(int (*a1)(void), int (*a2)(void)))(void)
{
  LODWORD(MEMORY[0xB3F9B0][0x283]) = a1; /*0x747c28*/
  LODWORD(MEMORY[0xB3F9B0][0x284]) = a2; /*0x747c2d*/
  return a1; /*0x747c33*/
}
