int *sub_A11CD0()
{
  int v0; // ecx
  int *result; // eax

  v0 = 0x20; /*0xa11cd2*/
  result = &unk_B46CD0; /*0xa11cd7*/
  do /*0xa11cee*/
  {
    *((float *)result + 0xFFFFFFFE) = 0.0; /*0xa11cdc*/
    result += 4; /*0xa11cdf*/
    --v0; /*0xa11ce2*/
    *((float *)result + 0xFFFFFFFB) = 0.0; /*0xa11ce5*/
    *((float *)result + 0xFFFFFFFC) = 0.0; /*0xa11ce8*/
    *((float *)result + 0xFFFFFFFD) = 0.0; /*0xa11ceb*/
  }
  while ( v0 >= 0 ); /*0xa11cee*/
  return result; /*0xa11cf2*/
}
