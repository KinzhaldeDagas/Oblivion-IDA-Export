int __cdecl sub_899090(_DWORD *a1, const void **a2)
{
  int v2; // ebx
  int result; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi

  v2 = a1[0xE]; /*0x899096*/
  result = a1[0xF]; /*0x899099*/
  if ( v2 != v2 + 4 * result ) /*0x8990a3*/
  {
    do /*0x8990d8*/
    {
      v4 = (_DWORD *)(*(_DWORD *)v2 + 0x5C); /*0x8990aa*/
      v5 = 0; /*0x8990ad*/
      if ( *(int *)(*(_DWORD *)v2 + 0x60) > 0 ) /*0x8990b1*/
      {
        do /*0x8990c8*/
          sub_8DA150(a2, *(_DWORD *)(*v4 + 4 * v5++)); /*0x8990bd*/
        while ( v5 < v4[1] ); /*0x8990c8*/
      }
      v2 += 4; /*0x8990d0*/
      result = a1[0xE] + 4 * a1[0xF]; /*0x8990d3*/
    }
    while ( v2 != result ); /*0x8990d8*/
  }
  v6 = a1[0x11]; /*0x8990da*/
  if ( v6 != v6 + 4 * a1[0x12] ) /*0x8990e5*/
  {
    do /*0x89911a*/
    {
      v7 = (_DWORD *)(*(_DWORD *)v6 + 0x5C); /*0x8990ec*/
      v8 = 0; /*0x8990ef*/
      if ( *(int *)(*(_DWORD *)v6 + 0x60) > 0 ) /*0x8990f3*/
      {
        do /*0x89910a*/
          sub_8DA150(a2, *(_DWORD *)(*v7 + 4 * v8++)); /*0x8990ff*/
        while ( v8 < v7[1] ); /*0x89910a*/
      }
      result = a1[0x11]; /*0x89910f*/
      v6 += 4; /*0x899112*/
    }
    while ( v6 != result + 4 * a1[0x12] ); /*0x89911a*/
  }
  return result; /*0x89911c*/
}
