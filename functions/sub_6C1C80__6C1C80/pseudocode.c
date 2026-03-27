char __cdecl sub_6C1C80(int a1, int a2)
{
  char result; // al

  *(float *)a1 = *(float *)a2;
  result = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 4) = result;
  return result;
}
