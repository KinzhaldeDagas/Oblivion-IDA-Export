char __cdecl sub_4F5E30(int a1, int a2, int a3, double *a4)
{
  unsigned __int8 (__thiscall *v4)(int); // edx
  bool v5; // zf
  char result; // al

  v4 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190);
  *a4 = 0.0;
  v5 = v4(a1) == 0;
  result = 1;
  if ( !v5 )
    *a4 = 1.0;
  return result;
}
