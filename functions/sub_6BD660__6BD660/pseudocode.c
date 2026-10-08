int __cdecl sub_6BD660(float a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int result; // eax
  int v6[4]; // [esp+14h] [ebp-10h] BYREF

  v4 = (_DWORD *)sub_714F80((int)v6, a1, a2 + 4, a2 + 0x14, a3 + 0x14, a3 + 4); /*0x6bd688*/
  *a4 = *v4; /*0x6bd693*/
  a4[1] = v4[1]; /*0x6bd698*/
  a4[2] = v4[2]; /*0x6bd69e*/
  result = v4[3]; /*0x6bd6a1*/
  a4[3] = result; /*0x6bd6a4*/
  return result; /*0x6bd6aa*/
}
