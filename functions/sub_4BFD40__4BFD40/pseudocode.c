_DWORD *__cdecl sub_4BFD40(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x20u);
  if ( !result )
    return 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[5] = 0;
  result[4] = 0;
  result[6] = 0;
  result[7] = 0;
  *result = a5;
  result[1] = a1;
  result[2] = a2;
  result[3] = a3;
  result[5] = a4;
  result[4] = 0;
  return result;
}
