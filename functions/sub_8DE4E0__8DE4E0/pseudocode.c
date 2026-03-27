_DWORD *__usercall sub_8DE4E0@<eax>(_DWORD *result@<eax>)
{
  int i; // esi
  int v2; // edx
  int j; // ecx

  for ( i = result[1] - 1; i >= 0; --i )
  {
    if ( !*(_DWORD *)(*result + 4 * i) )
    {
      v2 = result[1] - 1;
      result[1] = v2;
      for ( j = i; j < result[1]; ++j )
        *(_DWORD *)(*result + 4 * j) = *(_DWORD *)(*result + 4 * j + 4);
    }
  }
  return result;
}
