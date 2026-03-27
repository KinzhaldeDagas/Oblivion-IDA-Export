unsigned int __stdcall sub_712640(int *a1)
{
  int v1; // edx
  unsigned int result; // eax
  unsigned int v3; // edi
  unsigned int i; // esi
  int v5; // ecx

  v1 = *a1;
  *((_WORD *)a1 + 0xC) = a1[6] & 0xFFE1 | 0xE;
  result = (*(int (**)(void))(v1 + 8))();
  v3 = result;
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 0xB6);
    for ( i = 0; result > i; ++i )
    {
      v5 = *(_DWORD *)(v3 + 0xB0);
      if ( *(_DWORD *)(v5 + 4 * i) )
        sub_712640(*(int **)(v5 + 4 * i));
      result = *(unsigned __int16 *)(v3 + 0xB6);
    }
  }
  return result;
}
