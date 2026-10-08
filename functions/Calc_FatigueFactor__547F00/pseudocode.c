double __cdecl Calc_FatigueFactor(float a1)
{
  return (float)(MEMORY[0xB37530] - (1.0 - a1) * MEMORY[0xB37538]); /*0x547f1e*/
}
