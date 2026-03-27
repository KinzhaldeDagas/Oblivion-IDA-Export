_DWORD *__cdecl sub_7FAAD0(unsigned int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = (_DWORD *)a1;
  if ( a1 <= 0x13 )
  {
    result = (_DWORD *)((char *)&unk_B47018 + 0x20 * a1);
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = a5;
  }
  return result;
}
