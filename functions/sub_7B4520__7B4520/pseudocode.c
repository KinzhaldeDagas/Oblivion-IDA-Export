int __cdecl sub_7B4520(_DWORD *a1)
{
  __int64 v1; // rax
  int v2; // esi
  int result; // eax

  v1 = a1[2] - *a1;
  v2 = v1 - HIDWORD(v1);
  result = (a1[1] - a1[3]) / 2;
  flt_B4313C = (float)((v2 >> 1) + *a1);
  flt_B43140 = (float)(result + a1[3]);
  flt_B43144 = (float)(v2 >> 1);
  flt_B43148 = (float)result;
  return result;
}
