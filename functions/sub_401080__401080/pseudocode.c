int __stdcall sub_401080(void *a1, int a2, int a3, void *(__thiscall *a4)(void *))
{
  int i; // edi
  int result; // eax

  for ( i = a3 - 1; i >= 0; --i )
  {
    result = (int)a4(a1);
    a1 = (char *)a1 + a2;
  }
  return result;
}
