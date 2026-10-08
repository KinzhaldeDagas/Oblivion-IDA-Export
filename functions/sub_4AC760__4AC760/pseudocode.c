// Returns min(a,b) as a single-precision float. Native callers push two floats, clean 8 bytes, and consume ST0 as float; prior double return was an x87 decompiler artifact.
float __cdecl Float_Min(float a, float b)
{
  if ( b <= (double)a ) /*0x4ac76f*/
    return b; /*0x4ac77e*/
  return a; /*0x4ac77b*/
}
