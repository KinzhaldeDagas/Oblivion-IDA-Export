_DWORD *__cdecl sub_54D910(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1; /*0x54d910*/
  for ( result = a3; v3 != a2; result += 4 ) /*0x54d91e*/
  {
    if ( result ) /*0x54d923*/
    {
      *result = *v3; /*0x54d927*/
      result[1] = v3[1]; /*0x54d92c*/
      result[2] = v3[2]; /*0x54d932*/
      result[3] = v3[3]; /*0x54d938*/
    }
    v3 += 4; /*0x54d93b*/
  }
  return result; /*0x54d946*/
}
