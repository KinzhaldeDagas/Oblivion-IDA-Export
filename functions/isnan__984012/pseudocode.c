int __cdecl _isnan(double X)
{
  return (HIWORD(X) & 0x7FF8) == 0x7FF0 && ((HIDWORD(X) & 0x7FFFF) != 0 || LODWORD(X)) || (HIWORD(X) & 0x7FF8) == 0x7FF8;
}
