_DWORD *__usercall sub_8DE4E0@<eax>(_DWORD *result@<eax>)
{
  int i; // esi
  int v2; // edx
  int j; // ecx

  for ( i = result[1] - 1; i >= 0; --i ) /*0x8de4e5*/
  {
    if ( !*(_DWORD *)(*result + 4 * i) ) /*0x8de4ea*/
    {
      v2 = result[1] - 1; /*0x8de4f4*/
      result[1] = v2; /*0x8de4f8*/
      for ( j = i; j < result[1]; ++j ) /*0x8de4fd*/
        *(_DWORD *)(*result + 4 * j) = *(_DWORD *)(*result + 4 * j + 4); /*0x8de509*/
    }
  }
  return result; /*0x8de517*/
}
