int __stdcall sub_9433E0(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int result; // eax

  *a5 = *a1; /*0x9433ea*/
  a5[1] = a1[1]; /*0x9433ef*/
  a5[2] = a1[2]; /*0x9433f5*/
  result = a1[3]; /*0x9433f8*/
  a5[3] = result; /*0x9433fb*/
  return result; /*0x9433fe*/
}
