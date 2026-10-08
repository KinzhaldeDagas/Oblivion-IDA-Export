char *sub_A0A850()
{
  int v0; // ecx
  char *result; // eax

  v0 = 0x1F; /*0xa0a850*/
  result = (char *)&dword_B40614[1]; /*0xa0a855*/
  do /*0xa0a870*/
  {
    result[0xFFFFFFF8] = 0; /*0xa0a860*/
    *((_DWORD *)result + 0xFFFFFFFF) = 0xFFFFFFFF; /*0xa0a864*/
    *result = 0; /*0xa0a867*/
    result += 0xC; /*0xa0a86a*/
    --v0; /*0xa0a86d*/
  }
  while ( v0 >= 0 ); /*0xa0a870*/
  return result; /*0xa0a872*/
}
