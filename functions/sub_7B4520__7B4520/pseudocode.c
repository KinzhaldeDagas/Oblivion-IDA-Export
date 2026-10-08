int __cdecl sub_7B4520(_DWORD *a1)
{
  __int64 v1; // rax
  int v2; // esi
  int result; // eax

  v1 = a1[2] - *a1; /*0x7b4530*/
  v2 = v1 - HIDWORD(v1); /*0x7b4533*/
  result = (a1[1] - a1[3]) / 2; /*0x7b454a*/
  unk_B4313C = (float)((v2 >> 1) + *a1); /*0x7b4550*/
  unk_B43140 = (float)(result + a1[3]); /*0x7b4569*/
  unk_B43144 = (float)(v2 >> 1); /*0x7b4572*/
  unk_B43148 = (float)result; /*0x7b457c*/
  return result; /*0x7b4582*/
}
