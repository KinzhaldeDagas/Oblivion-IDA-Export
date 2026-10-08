_DWORD *__cdecl sub_6F11A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1; /*0x6f11a0*/
  for ( result = a3; v3 != a2; result += 3 ) /*0x6f11ae*/
  {
    if ( result ) /*0x6f11b3*/
    {
      *result = *v3; /*0x6f11b7*/
      result[1] = v3[1]; /*0x6f11bc*/
      result[2] = v3[2]; /*0x6f11c2*/
    }
    v3 += 3; /*0x6f11c5*/
  }
  return result; /*0x6f11d0*/
}
