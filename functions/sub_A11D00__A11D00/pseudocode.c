int *sub_A11D00()
{
  int v0; // ecx
  int *result; // eax

  v0 = 0x30;
  result = &dword_B46F80;
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
