int **__cdecl sub_88A9B0(int **a1, int a2)
{
  int **result; // eax

  result = a1;
  if ( a1 )
  {
    result = (int **)NiRTTI_Cast((BSStringT *)dword_BA7D84, (NiObject *)a1[4]);
    if ( result )
      return (int **)sub_4D6AB0(result, *(_DWORD *)(a2 + 0xC) != 0);
  }
  return result;
}
