_DWORD *__stdcall sub_8E0A00(_DWORD *a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_8E66D0(*a1 + *(char *)(*a1 + 5), a1[1] + *(char *)(a1[1] + 5));
  if ( result )
    return (_DWORD *)sub_8E7920(result);
  return result;
}
