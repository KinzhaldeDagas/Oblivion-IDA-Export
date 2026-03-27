int __stdcall sub_783C30(int a1)
{
  int v1; // eax

  v1 = (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)dword_B428C0 + 0x1A8))(dword_B428C0, a1, &a1);
  if ( v1 >= 0 )
    return a1;
  sub_738460(1, 0, "Failed to create pixel shader\nError 0x%08x\n", v1);
  return 0;
}
