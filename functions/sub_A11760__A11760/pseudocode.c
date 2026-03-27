int *sub_A11760()
{
  int v0; // ecx
  int *result; // eax

  v0 = 0x22;
  result = &dword_B464A0;
  do
  {
    *((float *)result + 0xFFFFFFFE) = 0.0;
    result += 4;
    --v0;
    *((float *)result + 0xFFFFFFFB) = 0.0;
    *((float *)result + 0xFFFFFFFC) = 0.0;
    *((float *)result + 0xFFFFFFFD) = 0.0;
  }
  while ( v0 >= 0 );
  return result;
}
