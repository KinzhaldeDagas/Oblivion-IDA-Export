int __stdcall sub_783BF0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)dword_B428C0 + 0x16C))(dword_B428C0, a1, &a1);
  if ( v6 >= 0 )
    return a1;
  sub_738460(1, 0, "Failed to create vertex shader\nError 0x%08x\n", v6);
  return 0;
}
