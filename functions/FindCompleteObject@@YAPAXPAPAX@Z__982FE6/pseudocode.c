char *__thiscall FindCompleteObject(_DWORD *this)
{
  int v1; // edx
  char *result; // eax
  int v3; // edx

  v1 = *(_DWORD *)(*this - 4);
  result = (char *)this - *(_DWORD *)(v1 + 4);
  v3 = *(_DWORD *)(v1 + 8);
  if ( v3 )
    result -= *(_DWORD *)((char *)this - v3);
  return result;
}
