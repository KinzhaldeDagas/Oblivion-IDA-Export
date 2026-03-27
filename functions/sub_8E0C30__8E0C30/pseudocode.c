unsigned __int16 *__stdcall sub_8E0C30(unsigned __int16 *a1, int a2, unsigned __int16 a3)
{
  int v3; // edx
  unsigned __int16 *result; // eax
  int i; // ecx
  int v6; // ecx
  bool v7; // cf
  unsigned __int16 *v8; // ecx

  v3 = a2;
  result = a1;
  for ( i = a2 - (_DWORD)a1; (int)((v3 - (_DWORD)result) & 0xFFFFFFFC) > 0x40; i = v3 - (_DWORD)result )
  {
    v6 = i >> 3;
    v7 = result[2 * v6] < a3;
    v8 = &result[2 * v6];
    if ( v7 )
      result = v8;
    else
      v3 = (int)v8;
  }
  for ( ; *result < a3; result += 2 )
    ;
  return result;
}
