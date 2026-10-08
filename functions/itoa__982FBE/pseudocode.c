char *__cdecl _itoa(int Value, char *Dest, int Radix)
{
  if ( Radix == 0xA && Value < 0 ) /*0x982fcc*/
    xtoa(Value, Dest, 0xAu, 1); /*0x982fd2*/
  else
    xtoa(Value, Dest, Radix, 0); /*0x982fdc*/
  return Dest; /*0x982fe4*/
}
