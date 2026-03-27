int sub_701AB0()
{
  int result; // eax

  result = dword_B3F940;
  if ( dword_B3F940 )
  {
    *(_BYTE *)(result + 0x1B0) = 1;
    return sub_404D60(0xFFFFFFFF);
  }
  return result;
}
