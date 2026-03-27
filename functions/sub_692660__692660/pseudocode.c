int __cdecl sub_692660(_DWORD *a1, int a2, char a3)
{
  int v3; // ecx

  v3 = a1[0x16];
  if ( v3 )
  {
    if ( a3 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x3CC))(v3, 0);
  }
  (*(void (__thiscall **)(_DWORD *, int, float))(*a1 + 0x374))(a1, a2, flt_A40360);
  return (*(int (__thiscall **)(_DWORD *, int, unsigned int, _DWORD))(*a1 + 0x298))(a1, 0x22, 0xFFFFFF9C, 0);
}
