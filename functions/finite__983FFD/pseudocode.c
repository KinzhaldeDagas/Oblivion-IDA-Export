int __cdecl _finite(double X)
{
  return (HIWORD(X) & 0x7FF0) != 0x7FF0;
}
