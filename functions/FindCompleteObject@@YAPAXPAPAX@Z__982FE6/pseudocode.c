char *__thiscall FindCompleteObject(_DWORD *this)
{
  int v1; // edx
  char *result; // eax
  int v3; // edx

  v1 = *(_DWORD *)(*this - 4); /*0x982fe8*/
  result = (char *)this - *(_DWORD *)(v1 + 4); /*0x982fed*/
  v3 = *(_DWORD *)(v1 + 8); /*0x982ff0*/
  if ( v3 ) /*0x982ff5*/
    result -= *(_DWORD *)((char *)this - v3); /*0x982ff9*/
  return result; /*0x982ffb*/
}
