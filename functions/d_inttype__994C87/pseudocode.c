int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 || _frnd(X) != X ) /*0x994cb6*/
    return 0; /*0x994ce7*/
  if ( _frnd(X * 0.5) == X * 0.5 ) /*0x994cdb*/
    return 2; /*0x994cdf*/
  return 1; /*0x994ce0*/
}
