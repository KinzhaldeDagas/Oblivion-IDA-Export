char __cdecl sub_6C1C80(int a1, int a2)
{
  char result; // al

  *(float *)a1 = *(float *)a2; /*0x6c1c8a*/
  result = *(_BYTE *)(a2 + 4); /*0x6c1c8c*/
  *(_BYTE *)(a1 + 4) = result; /*0x6c1c8f*/
  return result; /*0x6c1c92*/
}
