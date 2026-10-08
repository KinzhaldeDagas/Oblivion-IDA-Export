_DWORD *__stdcall sub_8E0A00(_DWORD *a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_8E66D0(*a1 + *(char *)(*a1 + 5), a1[1] + *(char *)(a1[1] + 5)); /*0x8e0a17*/
  if ( result ) /*0x8e0a21*/
    return (_DWORD *)sub_8E7920(result); /*0x8e0a24*/
  return result; /*0x8e0a2a*/
}
