_DWORD *__cdecl sub_54D9A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 4 ) /*0x54d9aa*/
  {
    *result = *a3; /*0x54d9b3*/
    result[1] = a3[1]; /*0x54d9b8*/
    result[2] = a3[2]; /*0x54d9be*/
    result[3] = a3[3]; /*0x54d9c4*/
  }
  return result; /*0x54d9cf*/
}
