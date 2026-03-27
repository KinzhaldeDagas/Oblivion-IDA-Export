bool __cdecl sub_6BDE40(int a1, int a2)
{
  bool result; // al

  result = sub_6D3190((float *)a1, (float *)a2);
  if ( result )
    return *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4);
  return result;
}
