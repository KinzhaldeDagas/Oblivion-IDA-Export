char *sub_662EE0()
{
  const char *value; // eax
  int v1; // edx
  char v2; // cl
  char *v3; // eax
  char Str[260]; // [esp+0h] [ebp-108h] BYREF

  value = stru_B36BB8.value; /*0x662ef4*/
  v1 = Str - stru_B36BB8.value; /*0x662efc*/
  do /*0x662f0a*/
  {
    v2 = *value; /*0x662f00*/
    value[v1] = *value; /*0x662f02*/
    ++value; /*0x662f05*/
  }
  while ( v2 ); /*0x662f0a*/
  v3 = strrchr(Str, 0x5C); /*0x662f12*/
  if ( v3 ) /*0x662f1c*/
  {
    *(_DWORD *)(v3 + 1) = *(_DWORD *)aIdleanims; /*0x662f24*/
    *(_DWORD *)(v3 + 5) = dword_A538D4; /*0x662f2d*/
    *(_WORD *)(v3 + 9) = word_A538D8; /*0x662f37*/
  }
  return sub_5215C0((_DWORD *)dword_B361CC[0x3D], Str); /*0x662f4a*/
}
