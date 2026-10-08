unsigned __int16 *__stdcall sub_8E0C30(unsigned __int16 *a1, int a2, unsigned __int16 a3)
{
  int v3; // edx
  unsigned __int16 *result; // eax
  int i; // ecx
  int v6; // ecx
  bool v7; // cf
  unsigned __int16 *v8; // ecx

  v3 = a2; /*0x8e0c30*/
  result = a1; /*0x8e0c34*/
  for ( i = a2 - (_DWORD)a1; (int)((v3 - (_DWORD)result) & 0xFFFFFFFC) > 0x40; i = v3 - (_DWORD)result ) /*0x8e0c4a*/
  {
    v6 = i >> 3; /*0x8e0c50*/
    v7 = result[2 * v6] < a3; /*0x8e0c53*/
    v8 = &result[2 * v6]; /*0x8e0c57*/
    if ( v7 ) /*0x8e0c5a*/
      result = v8; /*0x8e0c5c*/
    else
      v3 = (int)v8; /*0x8e0c60*/
  }
  for ( ; *result < a3; result += 2 ) /*0x8e0c74*/
    ; /*0x8e0c76*/
  return result; /*0x8e0c7e*/
}
