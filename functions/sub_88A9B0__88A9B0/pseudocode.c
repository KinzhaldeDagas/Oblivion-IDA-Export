int **__cdecl sub_88A9B0(int **a1, int a2)
{
  int **result; // eax

  result = a1; /*0x88a9b0*/
  if ( a1 ) /*0x88a9b6*/
  {
    result = (int **)NiRTTI_Cast((BSStringT *)&stru_BA7D84, (NiObject *)a1[4]); /*0x88a9c1*/
    if ( result ) /*0x88a9cb*/
      return (int **)sub_4D6AB0(result, *(_DWORD *)(a2 + 0xC) != 0); /*0x88a9db*/
  }
  return result; /*0x88a9e0*/
}
