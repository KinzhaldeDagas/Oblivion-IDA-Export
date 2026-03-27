int __stdcall sub_9433E0(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int result; // eax

  *a5 = *a1;
  a5[1] = a1[1];
  a5[2] = a1[2];
  result = a1[3];
  a5[3] = result;
  return result;
}
