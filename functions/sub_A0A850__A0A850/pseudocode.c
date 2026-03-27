char *sub_A0A850()
{
  int v0; // ecx
  char *result; // eax

  v0 = 0x1F;
  result = byte_B40618;
  do
  {
    result[0xFFFFFFF8] = 0;
    *((_DWORD *)result + 0xFFFFFFFF) = 0xFFFFFFFF;
    *result = 0;
    result += 0xC;
    --v0;
  }
  while ( v0 >= 0 );
  return result;
}
