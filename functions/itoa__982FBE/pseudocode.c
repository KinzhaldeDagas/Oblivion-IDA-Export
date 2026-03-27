char *__cdecl _itoa(int Value, char *Dest, int Radix)
{
  if ( Radix == 0xA && Value < 0 )
    xtoa(Value, Dest, 0xAu, 1);
  else
    xtoa(Value, Dest, Radix, 0);
  return Dest;
}
