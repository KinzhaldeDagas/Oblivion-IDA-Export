int __cdecl sub_8AFC90(int *a1)
{
  int v1; // esi
  int result; // eax
  int v3; // edi

  v1 = sub_8AFBE0(a1);
  result = 0;
  if ( v1 )
  {
    v3 = a1[1];
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x9C))(v1, v3) >= 0x1E )
      return 0x1E;
    else
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x9C))(v1, v3);
  }
  return result;
}
