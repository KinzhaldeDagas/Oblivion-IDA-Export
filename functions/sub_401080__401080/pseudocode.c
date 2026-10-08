int __stdcall sub_401080(void *a1, int a2, int a3, void *(__thiscall *a4)(void *))
{
  int i; // edi
  int result; // eax

  for ( i = a3 - 1; i >= 0; --i ) /*0x401088*/
  {
    result = (int)a4(a1); /*0x4010a2*/
    a1 = (char *)a1 + a2; /*0x4010a4*/
  }
  return result; /*0x4010ae*/
}
