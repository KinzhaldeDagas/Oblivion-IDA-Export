int __cdecl sub_8F6580(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  unsigned int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edx

  v4 = a2; /*0x8f6587*/
  v5 = a3; /*0x8f658b*/
  while ( 1 ) /*0x8f6598*/
  {
    v6 = *(_DWORD *)(a1 + 4 * ((v4 + v5) >> 1)); /*0x8f6598*/
    result = v5; /*0x8f659b*/
    v8 = v4; /*0x8f659d*/
    do /*0x8f65d2*/
    {
      for ( ; *(_DWORD *)(a1 + 4 * v8) < v6; ++v8 ) /*0x8f65a3*/
        ; /*0x8f65a5*/
      for ( ; v6 < *(_DWORD *)(a1 + 4 * result); --result ) /*0x8f65ae*/
        ; /*0x8f65b0*/
      if ( result < v8 ) /*0x8f65b8*/
        break; /*0x8f65b8*/
      if ( result != v8 ) /*0x8f65ba*/
      {
        v9 = *(_DWORD *)(a1 + 4 * result); /*0x8f65bf*/
        *(_DWORD *)(a1 + 4 * result) = *(_DWORD *)(a1 + 4 * v8); /*0x8f65c2*/
        v5 = a3; /*0x8f65c5*/
        *(_DWORD *)(a1 + 4 * v8) = v9; /*0x8f65c8*/
        v4 = a2; /*0x8f65cb*/
      }
      --result; /*0x8f65ce*/
      ++v8; /*0x8f65cf*/
    }
    while ( v8 <= result ); /*0x8f65d2*/
    if ( v4 < result ) /*0x8f65d6*/
      result = sub_8F6580(a1, v4, result, a4); /*0x8f65df*/
    if ( v8 >= v5 ) /*0x8f65e9*/
      break; /*0x8f65e9*/
    v4 = v8; /*0x8f65eb*/
    a2 = v8; /*0x8f65ed*/
  }
  return result; /*0x8f65f2*/
}
